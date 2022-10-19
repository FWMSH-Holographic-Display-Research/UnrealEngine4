// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "HoloPlaySceneCaptureComponent2D.generated.h"

class FSceneInterface;
class UHoloPlayRenderingConfig;

/**
 * Capture looking glass multi views
 */
UCLASS()
class HOLOPLAYRUNTIME_API UHoloPlaySceneCaptureComponent2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()
	
public:
	UHoloPlaySceneCaptureComponent2D();

	/** 
	* Render the scene to the texture target immediately.  
	* This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly. 
	*/
	void CaptureHoloPlayScene(UHoloPlayRenderingConfig* RenderingConfig);

	//~ Begin UActorComponent Interface
	/** All the time we render everething manually, never call defereed rendering */
	virtual void SendRenderTransform_Concurrent() override
	{
		USceneCaptureComponent::SendRenderTransform_Concurrent();
	}

	virtual void OnRegister() override
	{
		USceneCaptureComponent::OnRegister();
	}
	//~ End UActorComponent Interface

private:
	/** Start rendering */
	static void UpdateHoloPlaySceneCaptureContents(USceneCaptureComponent2D* CaptureComponent, UHoloPlayRenderingConfig* RenderingConfig, FSceneInterface* Scene);
};
