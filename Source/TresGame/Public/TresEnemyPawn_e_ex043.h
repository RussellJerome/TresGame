#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex043.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex043 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchResetRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bWheelShowFade;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWheelShowDelaySeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWheelShowSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BaseDataTableID_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BaseDataTableID_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BaseDataTableID_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bGroundAdjust;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGroundIdealHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGroundAdjustZSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugOutputGroundAdjust;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShowWeaponWheel;
    
private:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_WheelEffectAttachDataAsset;
    
public:
    ATresEnemyPawn_e_ex043();
    UFUNCTION(BlueprintCallable)
    void SetWeakAuraPhase();
    
    UFUNCTION(BlueprintCallable)
    void SetStrongAuraPhase();
    
    UFUNCTION(BlueprintCallable)
    void ResetPhase();
    
    UFUNCTION(BlueprintPure)
    int32 GetPhaseNum();
    
    UFUNCTION(BlueprintPure)
    bool DidAttackHit();
    
};

