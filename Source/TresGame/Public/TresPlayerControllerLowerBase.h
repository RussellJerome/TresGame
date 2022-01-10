// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TresPlayerControllerLowerBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPlayerControllerLowerBase : public APlayerController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerLowerBase")
	class ATresCameraManager* m_pCameraManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerLowerBase")
	class ATresCameraDebug* m_pCameraDebug;

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void ToggleTresCameraDebugStop() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void ToggleTresCameraDebug() {};

	UFUNCTION(BlueprintNativeEvent, Category = "TresPlayerControllerLowerBase")
	void OnDebugPauseFrameSkip();
	void OnDebugPauseFrameSkip_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, Category = "TresPlayerControllerLowerBase")
	void OnDebugPauseEnableGamePad();
	void OnDebugPauseEnableGamePad_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, Category = "TresPlayerControllerLowerBase")
	void OnDebugPauseEnable();
	void OnDebugPauseEnable_Implementation() {};

	UFUNCTION(BlueprintPure, Category = "TresPlayerControllerLowerBase")
	class ATresCameraManager* GetTresCameraManager() { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void EnableDebugPauseFunction(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowMatineeTime() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowCameraDebugInfo(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetGameFrameRate(float InMaxFrame, float InMinFrame) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetFixedDeltaTime(float InFrameRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetCameraZero() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetCameraSpeedScale(float SpeedScale) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetCameraFieldOfView(float FOV) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugGamePadSpecialLeftDebugPause(int debugPauseStyle) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugCameraShutOutFade(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugCameraCollCheck(bool EnableNo) {};
};
