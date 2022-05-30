#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIPawnBase.h"
#include "EffectControlParam_e_ex304a.h"
#include "EffectSpawnParam_e_ex304a.h"
#include "TresEnemyPawn_e_ex304a.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex304a : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_NextPhaseChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffectAttachData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEffectSpawnParam_e_ex304a> m_EffectSpawnParamList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEffectControlParam_e_ex304a> m_EffectControlParamList;
    
public:
    ATresEnemyPawn_e_ex304a();
    UFUNCTION(BlueprintCallable)
    void StartPowerEffect();
    
    UFUNCTION()
    void DebugStartPowerEffect();
    
    UFUNCTION()
    void DebugSetDisableBattleEnd(int32 bDisable);
    
    UFUNCTION()
    void DebugPowerEffectNextStep();
    
    UFUNCTION()
    void DebugMovePowerEffectStartLocation();
    
};

