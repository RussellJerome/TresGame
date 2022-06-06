#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemyXIIIPhaseType.h"
#include "TresEnemyXIIIPlayerKilledVoiceData.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIIPawnBase.generated.h"

class USQEX_ParticleAttachDataAsset;
class UTresEnemyXIIIRetryInheritParam;

UCLASS()
class ATresEnemyXIIIPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyXIIIPhaseType m_FirstPhaseType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PhaseChangeHitPointMinRateList[5];
    
    UPROPERTY(EditDefaultsOnly)
    float m_RetryStartHitPointRateList[5];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyXIIIPlayerKilledVoiceData> m_PlayerKilledVoiceDataList;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bDebugEnableForcePhaseType: 1;
    
    UPROPERTY(EditInstanceOnly)
    ETresEnemyXIIIPhaseType m_DebugForcePhaseType;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bDebugEnableForceCenterLocation: 1;
    
    UPROPERTY(EditInstanceOnly)
    FVector m_DebugForceCenterLocation;
    
protected:
    UPROPERTY(SaveGame)
    ETresEnemyXIIIPhaseType m_PhaseType;
    
private:
    UPROPERTY()
    UTresEnemyXIIIRetryInheritParam* m_RetryInheritParam;
    
public:
    ATresEnemyXIIIPawnBase();
    UFUNCTION(BlueprintCallable)
    void NotifyChangePhase(ETresEnemyXIIIPhaseType InNewPhaseType);
    
    UFUNCTION(Exec)
    bool IsDuringCoopActionCooldown();
    
    UFUNCTION(Exec)
    bool IsDuringAlertCooldown();
    
    UFUNCTION(Exec)
    bool IsAnnoyingAttackToPlayer();
    
    UFUNCTION(Exec)
    int32 GetPhaseNo() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnChangePhase(ETresEnemyXIIIPhaseType InNewPhaseType);
    
};

