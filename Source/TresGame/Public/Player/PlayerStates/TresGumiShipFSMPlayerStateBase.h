#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipFSMPlayerStateBase.generated.h"

class USceneComponent;
class ATresGumiShipPlayerPawnBase;
class UTresGumiShipPlayerMovementCompoBase;
class UTresGumiShipEffectSetComponent;
class ATresGumiShipPlayerControllerDefault;

UCLASS()
class UTresGumiShipFSMPlayerStateBase : public UTresGumiShipFSMState {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerStateBase();
protected:
    UFUNCTION(BlueprintPure)
    bool _WasJustReleased(const FString& rstrID) const;
    
    UFUNCTION(BlueprintPure)
    bool _WasJustPressed(const FString& rstrID) const;
    
    UFUNCTION(BlueprintCallable)
    void _SetNoBody(bool bIn, const float fTimer);
    
    UFUNCTION(BlueprintCallable)
    void _SetInvincibleWithTimer(bool bIn, const float fTimer);
    
    UFUNCTION(BlueprintCallable)
    void _SetInvincible(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetEventMode(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetEnableOperation(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetAvoiding(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _PlaySoundAtLocation(const int32 dAssetID, const FVector& vrLocation, const FRotator& rRotation, float fVolumeMultiplier, float fPitchMultiplier, float fStartTime);
    
    UFUNCTION(BlueprintCallable)
    void _PlaySound2D(const int32 dAssetID, float fVolumeMultiplier, float fPitchMultiplier, float fStartTime);
    
    UFUNCTION(BlueprintPure)
    FVector2D _GetStickValue(const FString& rstrID) const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipPlayerPawnBase* _GetPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UTresGumiShipPlayerMovementCompoBase* _GetMovementCompo() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* _GetModelBase() const;
    
    UFUNCTION(BlueprintPure)
    UTresGumiShipEffectSetComponent* _GetEffectSet() const;
    
    UFUNCTION(BlueprintPure)
    float _GetDownTime(const FString& rstrID) const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipPlayerControllerDefault* _GetController() const;
    
    UFUNCTION(BlueprintPure)
    float _GetAnalogValue(const FString& rstrID) const;
    
};

