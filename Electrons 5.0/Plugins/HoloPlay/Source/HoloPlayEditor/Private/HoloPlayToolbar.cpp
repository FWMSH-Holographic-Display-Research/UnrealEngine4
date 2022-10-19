#include "HoloPlayToolbar.h"
#include "HoloPlayEditorCommands.h"

#include "IHoloPlayRuntime.h"
#include "HoloPlaySettings.h"
#include "IHoloPlayEditor.h"

#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"
#include "Internationalization/Internationalization.h"
#include "Widgets/SWidget.h"
#include "Widgets/Input/SSpinBox.h"

#include "Widgets/SBoxPanel.h"

#define LOCTEXT_NAMESPACE "HoloPlayToolbarEditor"

FHoloPlayToolbar::FHoloPlayToolbar()
{
	ExtendLevelEditorToolbar();
}

FHoloPlayToolbar::~FHoloPlayToolbar()
{
	if (UObjectInitialized() && LevelToolbarExtender.IsValid() && !IsEngineExitRequested())
	{
		FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
		if (LevelEditorModule.GetToolBarExtensibilityManager().IsValid())
		{
			LevelEditorModule.GetToolBarExtensibilityManager()->RemoveExtender(LevelToolbarExtender);
		}
	}
}

void FHoloPlayToolbar::ExtendLevelEditorToolbar()
{
	check(!LevelToolbarExtender.IsValid());

	// Create Toolbar extension
	LevelToolbarExtender = MakeShareable(new FExtender);

	LevelToolbarExtender->AddToolBarExtension(
		"Game",
		EExtensionHook::After,
		FHoloPlayToolbarCommand::Get().CommandActionList,
		FToolBarExtensionDelegate::CreateRaw(this, &FHoloPlayToolbar::FillToolbar)
	);

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(LevelToolbarExtender);
}

void FHoloPlayToolbar::FillToolbar(FToolBarBuilder & ToolbarBuilder)
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	ToolbarBuilder.BeginSection("HoloPlayToolbar");
	{
		// Add a button to open a HoloPlay Window
		ToolbarBuilder.AddToolBarButton(
			FHoloPlayToolbarCommand::Get().RepeatLastPlay,
			NAME_None,
			LOCTEXT("RepeatLastPlay_Label", "Play"),
			TAttribute< FText >::Create(TAttribute< FText >::FGetter::CreateStatic(&FHoloPlayToolbar::GetRepeatLastPlayToolTip)),
			TAttribute< FSlateIcon >::Create(TAttribute< FSlateIcon >::FGetter::CreateStatic(&FHoloPlayToolbar::GetRepeatLastPlayIcon))
		);

		ToolbarBuilder.AddToolBarButton(
			FHoloPlayToolbarCommand::Get().CloseHoloPlayWindow,
			NAME_None,
			LOCTEXT("CloseHoloPlayWindow_Label", "Stop"),
			LOCTEXT("CloseHoloPlayWindow_Tip", "Close HoloPlay Window."),
			FSlateIcon(FHoloPlayEditorStyle::GetStyleSetName(), TEXT("HoloPlay.CloseWindow"))
		);

		FUIAction SpecialPIEOptionsMenuAction;
		//SpecialPIEOptionsMenuAction.IsActionVisibleDelegate = FIsActionButtonVisible::CreateLambda([this]() { return !IHoloPlayRuntime::Get().IsPlaying(); });

		ToolbarBuilder.AddComboButton(
			SpecialPIEOptionsMenuAction,
			//FOnGetContent::CreateRaw(this, &FHoloPlayToolbar::GenerateMenuContent),
			FOnGetContent::CreateStatic(&FHoloPlayToolbar::GenerateMenuContent, FHoloPlayToolbarCommand::Get().CommandActionList.ToSharedRef(), LevelEditorModule.GetMenuExtensibilityManager()->GetAllExtenders()),
			LOCTEXT("PlayCombo_Label", "Active Play Mode"),
			LOCTEXT("PIEComboToolTip", "Change Play Mode and Play Settings"),
			FSlateIcon(),
			true
		);

		ToolbarBuilder.AddToolBarButton(
			FHoloPlayToolbarCommand::Get().OpenHoloPlaySettings,
			NAME_None,
			LOCTEXT("OpenHoloPlaySettings_Label", "Settings"),
			LOCTEXT("OpenHoloPlaySettings_Tip", "Open HoloPlay Settings."),
			FSlateIcon(FHoloPlayEditorStyle::GetStyleSetName(), TEXT("HoloPlay.OpenSettings"))
		);
	}
	ToolbarBuilder.EndSection();
}

TSharedRef<SWidget> FHoloPlayToolbar::GenerateMenuContent(TSharedRef<FUICommandList> InCommandList, TSharedPtr<FExtender> Extender)
{
	struct FLocal
	{
		static void AddPlayModeMenuEntry(FMenuBuilder& MenuBuilder, EHoloPlayModeType PlayMode)
		{
			TSharedPtr<FUICommandInfo> PlayModeCommand;

			switch (PlayMode)
			{
			case EHoloPlayModeType::PlayMode_InSeparateWindow:
				PlayModeCommand = FHoloPlayToolbarCommand::Get().PlayInHoloPlayWindow;
				break;

			case EHoloPlayModeType::PlayMode_InMainViewport:
				PlayModeCommand = FHoloPlayToolbarCommand::Get().PlayInMainViewport;
				break;
			}

			if (PlayModeCommand.IsValid())
			{
				MenuBuilder.AddMenuEntry(PlayModeCommand);
			}
		}
	};

	bool bIsPlaying = IHoloPlayRuntime::Get().IsPlaying();
	const bool bShouldCloseWindowAfterMenuSelection = true;
	FMenuBuilder MenuBuilder(bShouldCloseWindowAfterMenuSelection, InCommandList, Extender);

	if (!bIsPlaying)
	{
		MenuBuilder.BeginSection("HoloPlayModes", LOCTEXT("HoloPlayButtonModesSection", "Modes"));
		{
			FLocal::AddPlayModeMenuEntry(MenuBuilder, EHoloPlayModeType::PlayMode_InSeparateWindow);
			FLocal::AddPlayModeMenuEntry(MenuBuilder, EHoloPlayModeType::PlayMode_InMainViewport);
		}
		MenuBuilder.EndSection();
	}

	MenuBuilder.BeginSection("HoloPlay Play Settings", LOCTEXT("HoloPlayPlaySettings", "HoloPlay Play Settings"));
	{
		MenuBuilder.AddMenuEntry(FHoloPlayToolbarCommand::Get().PlayInQuiltMode);

		if (!bIsPlaying)
		{
			MenuBuilder.AddMenuEntry(FHoloPlayToolbarCommand::Get().LockInMainViewport);
			MenuBuilder.AddMenuEntry(FHoloPlayToolbarCommand::Get().AutoPlacementInHoloPlay);
		}

		MenuBuilder.AddMenuEntry(FHoloPlayToolbarCommand::Get().CustomAspect);


		TSharedRef<SWidget> CustomAspectWidget =
			SNew(SHorizontalBox)
			.Visibility_Lambda([]() -> EVisibility
			{
				return FHoloPlayToolbarCommand::IsCustomAspect() ? EVisibility::Visible : EVisibility::Collapsed;
			})
			+ SHorizontalBox::Slot()
			.Padding(2)
			.HAlign(HAlign_Left)
			[
				SNew(SSpinBox<float>)
					.MinValue(0.f)
					.MaxValue(10000.f)
					.MinSliderValue(0.f)
					.MaxSliderValue(10000.f)
					.Value_Lambda([]() -> float 
					{ 
						UHoloPlaySettings* HoloPlaySettings = GetMutableDefault<UHoloPlaySettings>();
						return HoloPlaySettings->HoloPlayShaderSettings.CustomAspectX;
					})
					.OnValueCommitted_Lambda([](float InValue, ETextCommit::Type CommitInfo)
					{ 
						UHoloPlaySettings* HoloPlaySettings = GetMutableDefault<UHoloPlaySettings>();
						HoloPlaySettings->HoloPlayShaderSettings.CustomAspectX = InValue;
						HoloPlaySettings->HoloPlaySave();
					})
			]
			+ SHorizontalBox::Slot()
			.Padding(2)
			.HAlign(HAlign_Left)
			[
				SNew(SSpinBox<float>)
					.MinValue(0.f)
					.MaxValue(10000.f)
					.MinSliderValue(0.f)
					.MaxSliderValue(10000.f)
					.Value_Lambda([]() -> float 
					{ 
						UHoloPlaySettings* HoloPlaySettings = GetMutableDefault<UHoloPlaySettings>();
						return HoloPlaySettings->HoloPlayShaderSettings.CustomAspectY;
					})
					.OnValueCommitted_Lambda([](float InValue, ETextCommit::Type CommitInfo)
					{ 
						UHoloPlaySettings* HoloPlaySettings = GetMutableDefault<UHoloPlaySettings>();
						HoloPlaySettings->HoloPlayShaderSettings.CustomAspectY = InValue;
						HoloPlaySettings->HoloPlaySave();
					})				
			]
			+ SHorizontalBox::Slot()
			.Padding(FMargin(5, 0, 5, 0))
			.HAlign(HAlign_Right)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text_Lambda([]() -> FText
				{
					UHoloPlaySettings* HoloPlaySettings = GetMutableDefault<UHoloPlaySettings>();
					FNumberFormattingOptions NumberFormat;	
					NumberFormat.MinimumIntegralDigits = 1;
					NumberFormat.MaximumIntegralDigits = 10000;
					NumberFormat.MinimumFractionalDigits = 2;
					NumberFormat.MaximumFractionalDigits = 2;
					return FText::AsNumber(HoloPlaySettings->HoloPlayShaderSettings.GetCustomAspect(), &NumberFormat);
				})
			];

		MenuBuilder.AddWidget(CustomAspectWidget, FText::GetEmpty());
		MenuBuilder.EndSection();
	}

	if (!bIsPlaying)
	{
		MenuBuilder.BeginSection("HoloPlay Play Display", LOCTEXT("HoloPlayPlayDisplaySection", "Display Options"));
		{
			TSharedRef<SWidget> DisplayIndex = SNew(SSpinBox<int32>)
				.MinValue(0)
				.MaxValue(3)
				.MinSliderValue(0)
				.MaxSliderValue(3)
				.ToolTipText(LOCTEXT("HoloPlayPlayDisplayToolTip", "HoloPlay display index"))
				.Value(FHoloPlayToolbarCommand::GetCurrentHoloPlayDisplayIndex())
				.OnValueCommitted_Static(&FHoloPlayToolbarCommand::SetCurrentHoloPlayDisplayIndex);

			MenuBuilder.AddWidget(DisplayIndex, LOCTEXT("HoloPlayDisplayIndexWidget", "Display Index"));
		}
		MenuBuilder.EndSection();
	}

	MenuBuilder.BeginSection("HoloPlayScalability", LOCTEXT("HoloPlayPlayScalabilitySection", "Scalability"));
	{
		TSharedRef<SWidget> DisplayIndex = SNew(SSpinBox<int32>)
			.MinValue(0)
			.MaxValue(4)
			.MinSliderValue(0)
			.MaxSliderValue(4)
			.ToolTipText(LOCTEXT("HoloPlayPlayScalabilityToolTip", "Global Scalability"))
			.Value(FHoloPlayToolbarCommand::GetCurrentHoloPlayScalability())
			.MinDesiredWidth(60.f)
			.OnValueCommitted_Static(&FHoloPlayToolbarCommand::SetCurrentHoloPlayScalability);

		MenuBuilder.AddWidget(DisplayIndex, LOCTEXT("HoloPlayScalabilityWidget", "QualityLevel"));
	}
	MenuBuilder.EndSection();

	return MenuBuilder.MakeWidget();
}

FSlateIcon FHoloPlayToolbar::GetRepeatLastPlayIcon()
{
	return FHoloPlayToolbarCommand::GetLastPlaySessionCommand()->GetIcon();
}

FText FHoloPlayToolbar::GetRepeatLastPlayToolTip()
{
	return FHoloPlayToolbarCommand::GetLastPlaySessionCommand()->GetDescription();
}

#undef LOCTEXT_NAMESPACE
