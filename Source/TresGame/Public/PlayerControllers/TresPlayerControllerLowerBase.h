#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TresControllerInterface.h"
#include "TresPlayerControllerLowerBase.generated.h"

class ATresCameraManager;
class ATresCameraDebug;

UCLASS()
class ATresPlayerControllerLowerBase : public APlayerController, public ITresControllerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ATresCameraManager* m_pCameraManager;
    
    UPROPERTY(Transient)
    ATresCameraDebug* m_pCameraDebug;
    
public:
    ATresPlayerControllerLowerBase();
    UFUNCTION(Exec)
    void ToggleTresCameraDebugStop();
    
    UFUNCTION(Exec)
    void ToggleTresCameraDebug();
    
    UFUNCTION(Exec)
    void OnDebugPauseFrameSkip();
    
    UFUNCTION(Exec)
    void OnDebugPauseEnableGamePad();
    
    UFUNCTION(Exec)
    void OnDebugPauseEnable();
    
    UFUNCTION(BlueprintPure)
    ATresCameraManager* GetTresCameraManager() const;
    
    UFUNCTION(Exec)
    void EnableDebugPauseFunction(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowMatineeTime();
    
    UFUNCTION(Exec)
    void DebugShowCameraDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetGameFrameRate(float InMaxFrame, float InMinFrame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetFixedDeltaTime(float InFrameRate);
    
    UFUNCTION(Exec)
    void DebugSetCameraZero();
    
    UFUNCTION(Exec)
    void DebugSetCameraSpeedScale(float SpeedScale);
    
    UFUNCTION(Exec)
    void DebugSetCameraFieldOfView(float FOV);
    
    UFUNCTION(Exec)
    void DebugGamePadSpecialLeftDebugPause(int32 debugPauseStyle);
    
    UFUNCTION(Exec)
    void DebugCameraShutOutFade(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugCameraCollCheck(uint8 EnableNo);
    
    
    // Fix for true pure virtual functions not being implemented
};

