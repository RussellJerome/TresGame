#pragma once
#include "CoreMinimal.h"
#include "SaveInfo_e_ex082.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyEx082_SnowEffectParam.h"
#include "TresEnemyPawn_e_ex082.generated.h"

class UParticleSystem;
class UEnvQuery;

UCLASS()
class ATresEnemyPawn_e_ex082 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LandSnowEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LandSnowEffectBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyEx082_SnowEffectParam m_SnowEffectParam[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_SnowEffectHitCheckSize;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ModeChangeEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisableAppearState: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMissionLookAt: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableTiltBody: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UClass* m_MissionManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MissionAttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MissionAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissionAttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissionInitSpeed;
    
    UPROPERTY(SaveGame)
    FSaveInfo_e_ex082 m_SaveInfo;
    
public:
    ATresEnemyPawn_e_ex082();
    UFUNCTION(BlueprintCallable)
    void SetAppearStateSpecial();
    
    UFUNCTION(BlueprintCallable)
    void MissionStart();
    
    UFUNCTION(BlueprintPure)
    bool IsStartModeChange() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLandMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnableMissionLookAt() const;
    
    UFUNCTION()
    bool IsAllRegionBreaked() const;
    
    UFUNCTION()
    void DebugSetNumUpthrust(int32 Num);
    
    UFUNCTION()
    void DebugSetNumRush(int32 Num);
    
    UFUNCTION()
    void DebugSetMissionDrawDisplay(int32 bEnable);
    
};

