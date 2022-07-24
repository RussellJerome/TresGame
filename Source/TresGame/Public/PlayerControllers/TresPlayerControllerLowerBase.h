#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TresControllerInterface.h"
#include "TresPlayerControllerLowerBase.generated.h"

class ATresCameraManager;
class ATresCameraDebug;

UCLASS(BlueprintType)
class ATresPlayerControllerLowerBase : public APlayerController, public ITresControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, BlueprintReadWrite)
    ATresCameraManager* m_pCameraManager;
    
    UPROPERTY(Transient, BlueprintReadWrite)
    ATresCameraDebug* m_pCameraDebug;
    
public:
    ATresPlayerControllerLowerBase();
    UFUNCTION(Exec, BlueprintCallable)
    void ToggleTresCameraDebugStop();
    
    UFUNCTION(Exec, BlueprintCallable)
    void ToggleTresCameraDebug();
    
    UFUNCTION(Exec, BlueprintCallable)
    void OnDebugPauseFrameSkip();
    
    UFUNCTION(Exec, BlueprintCallable)
    void OnDebugPauseEnableGamePad();
    
    UFUNCTION(Exec, BlueprintCallable)
    void OnDebugPauseEnable();
    
    UFUNCTION(BlueprintPure)
    ATresCameraManager* GetTresCameraManager() const;
    
    UFUNCTION(Exec, BlueprintCallable)
    void EnableDebugPauseFunction(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowMatineeTime();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowCameraDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetGameFrameRate(float InMaxFrame, float InMinFrame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetFixedDeltaTime(float InFrameRate);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraZero();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraSpeedScale(float SpeedScale);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetCameraFieldOfView(float FOV);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugGamePadSpecialLeftDebugPause(int32 debugPauseStyle);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCameraShutOutFade(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCameraCollCheck(uint8 EnableNo);
    
    
    // Fix for true pure virtual functions not being implemented
};

