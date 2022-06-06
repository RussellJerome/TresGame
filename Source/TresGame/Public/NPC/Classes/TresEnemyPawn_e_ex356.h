#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILBPawnBase.h"
#include "ETresBigDealRemoteEvent_e_ex356.h"
#include "TresAction_e_ex356_Interface.h"
#include "UObject/NoExportTypes.h"
#include "ETresDamageKind.h"
#include "TresTimeGaugeParam_e_ex356.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex356.generated.h"

class ATresProjectileBase;
class ATresBodyPushPawn_e_ex356;
class ATresGimmick_e_ex356_Card;
class UEnvQuery;
class UParticleSystem;
class USoundBase;
class AController;
class AActor;
class UObject;

UCLASS()
class ATresEnemyPawn_e_ex356 : public ATresEnemyXIIILBPawnBase, public ITresAction_e_ex356_Interface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGimmick_e_ex356_Card> m_CardClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TargetExplodeProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BigDealProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BigDealEndProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpInEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CardWallParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_StunDamageEndEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_HideAndSeekFieldOutCardEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresDamageKind> m_CardWallSuccessDamageKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CardWallSuccessDamagePowerScale;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CardWallSuccessDamageParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresBodyPushPawn_e_ex356> m_BigDealBodyPushPawnClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BigDealMapCenterParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BigDealCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BigDealStartTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BigDealEndTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BigDealLuxordSideCardAttackParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BigDealLuxordSideCardAttackProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTresTimeGaugeParam_e_ex356 m_TimeGaugeParam[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlayerTimeGaugeDamageGameLevelRate[4];
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTimeGaugeDamageGameLevelRateCeil: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeTimeGaugeDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstBigDealFailedTimeGaugeDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondBigDealFailedTimeGaugeDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LastBigDealFailedTimeGaugeDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FirstBigDealSuccesTimeGaugeHealValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondBigDealSuccesTimeGaugeHealValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LastBigDealSuccesTimeGaugeDamage;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_HideAndSeekSuccesVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_HideAndSeekFailedVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_HideAndSeekExplodeCardAttackStartVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_CardWallFailedVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FirstBigDealSuccesVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_SecondBigDealSuccesVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_LastBigDealSuccesVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FirstSecondBigDealFailedVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_BigDealAttackVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_BigDealShuffleVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_BigDealLuxordSideCardAttackVoiceDataList;
    
public:
    ATresEnemyPawn_e_ex356();
private:
    UFUNCTION()
    void OnPlayerTakeDamage(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
public:
    UFUNCTION()
    void OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    bool IsStun() const;
    
    UFUNCTION()
    float GetPlayerTimeGaugeRate() const;
    
    UFUNCTION()
    int32 GetPlayerTimeGaugePer() const;
    
    UFUNCTION()
    float GetPlayerTimeGauge() const;
    
    UFUNCTION()
    float GetLuxordTimeGaugeRate() const;
    
    UFUNCTION()
    int32 GetLuxordTimeGaugePer() const;
    
    UFUNCTION()
    float GetLuxordTimeGauge() const;
    
    UFUNCTION(Exec)
    void DebugSpawnHideAndSeekCard(int32 Num);
    
    UFUNCTION(Exec)
    void DebugSpawnCard(int32 CardDesignType);
    
    UFUNCTION(Exec)
    void DebugSpawnBigDealProjectile();
    
    UFUNCTION(Exec)
    void DebugSetTimeGaugeRatePlayer(float InRate);
    
    UFUNCTION(Exec)
    void DebugSetTimeGaugeRateLuxord(float InRate);
    
    UFUNCTION(Exec)
    void DebugSetEnableDrawLockonHighPriorityCard(int32 Enable);
    
    UFUNCTION(Exec)
    void DebugSetEnableDrawHideAndSeekShuffleTargetLocation(int32 Enable);
    
    UFUNCTION(Exec)
    void DebugSetEnableCardLockonHighPriorityInRange(int32 Enable);
    
    UFUNCTION(Exec)
    void DebugSetDisableHideAndSeekCardSpawn(int32 Disable);
    
    UFUNCTION(Exec)
    void DebugSetDisableBigDealCardRotation(int32 Disable);
    
    UFUNCTION(Exec)
    void DebugBigDealLuxordCardDestroy();
    
    UFUNCTION(Exec)
    void DebugBigDealFailedEnd();
    
    UFUNCTION(BlueprintCallable)
    static void BigDealRemoteEventForLevelBP(UObject* WorldContextObject, TEnumAsByte<ETresBigDealRemoteEvent_e_ex356::Type> InRemoteType);
    
    UFUNCTION(BlueprintCallable)
    static void BigDealCinematicStartForLevelBP(UObject* WorldContextObject, int32 InRandomSeed, float InOneCardScaleUpTime, float InAllCardScaleUpTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

