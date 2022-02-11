#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UTimelineComponent;
class UMaterialInstanceDynamic;
#include "Coil_blueprint__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Coil_blueprint.Coil_blueprint_C", OverrideNativeName="Coil_blueprint_C"))
class ACoil_blueprint_C__pf2132744816 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_Dim_Coil_9BCB362E4E0CEC0AE24E26ADDCC81759"))
	float bpv__Timeline_0_Dim_Coil_9BCB362E4E0CEC0AE24E26ADDCC81759__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_9BCB362E4E0CEC0AE24E26ADDCC81759"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_9BCB362E4E0CEC0AE24E26ADDCC81759__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Coil_blueprint", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateDynamicMaterialInstance_ReturnValue"))
	UMaterialInstanceDynamic* b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetScalarParameterValue_ReturnValue"))
	float b0l__CallFunc_K2_GetScalarParameterValue_ReturnValue__pf;
	ACoil_blueprint_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Coil_blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coil_blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Coil_blueprint__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_SpaceBar_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_SpaceBar_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
public:
};
