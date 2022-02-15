// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/HoloPlaySceneCaptureComponent2D.h"
#include "SceneInterface.h"
#include "Engine/World.h"

UHoloPlaySceneCaptureComponent2D::UHoloPlaySceneCaptureComponent2D()
{
	TextureTarget = nullptr;
	SetHiddenInGame(false);
	bCaptureEveryFrame = false;
	bUseCustomProjectionMatrix = true;
	bAlwaysPersistRenderingState = true;
	CaptureSource = ESceneCaptureSource::SCS_FinalColorLDR;
}

void UHoloPlaySceneCaptureComponent2D::CaptureHoloPlayScene(UHoloPlayRenderingConfig* RenderingConfig)
{
	UWorld* World = GetWorld();
	if (World && World->Scene && IsVisible())
	{
		//? We must push any deferred render state recreations before causing any rendering to happen, to make sure that deleted resource references are updated
		World->SendAllEndOfFrameUpdates();
		UpdateHoloPlaySceneCaptureContents(this, RenderingConfig, World->Scene);
	}
}

