#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "EX354_FieldChangeRemote.h"
#include "EX354_RemoteEventID.h"
#include "TresEnemyPawn_e_ex354.generated.h"

class USoundBase;
class ATresEnemyPawn_e_ex313;
class AActor;
class UParticleSystem;
class ATresProjectile_e_ex354_WarpArm;
class UParticleSystemComponent;
class ATresProjectileBase;
class ATresEnemyXIIILAManager;

UCLASS()
class ATresEnemyPawn_e_ex354 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_bFlyMode;
    
    UPROPERTY()
    bool m_bAura;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex313* e_ex313Pawn;
    
    UPROPERTY()
    ATresEnemyXIIILPawnBase* e_ex316Pawn;
    
    UPROPERTY()
    AActor* m_BattleAIPoint;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_PartnerDead;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_TestPartnerDead;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_fWarpAppearWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_pro_BattleTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_BattleEndHitPointPer;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ArrowRainSkyEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ArrowRainSkyEff;
    
    UPROPERTY()
    ATresProjectileBase* m_pArrowRain;
    
    UPROPERTY()
    ATresProjectile_e_ex354_WarpArm* m_WarpArmLeft;
    
    UPROPERTY()
    ATresProjectile_e_ex354_WarpArm* m_WarpArmRight;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_MagazineNum;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_ClusterShotMagazine;
    
    UPROPERTY(EditAnywhere)
    int32 m_pro_ArrowRainMagazine;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ClusterShotVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ClusterShotCoopVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RunShotVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ArtemaRunShotVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ArtemaSpinShotStartVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_ArtemaSpinShotSingleVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FieldChangeVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_RevengeVoiceDataArray;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIILAManager> m_pro_XIIILAManagerClass;
    
protected:
    UPROPERTY()
    ATresEnemyXIIILAManager* m_XIIILAManager;
    
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> m_QuickBattleCommandStartHitCountArray;
    
    UPROPERTY(EditAnywhere)
    bool m_bNoUseLastElementOfQuickBattleCommandStartHitCountArray;
    
    UPROPERTY(EditAnywhere)
    bool m_bCountOnlyStandardFieldQuickBattleCommandStartHitCount;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetQuickBattleCommandStartHitCountOnChangeField;
    
    UPROPERTY(EditAnywhere)
    float m_iQuickBattleCommandMaxHitIgnoreTime;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATresProjectileBase> m_QuickBattleProjectileClassForSora;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pQuickBattleBGMAsset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDispQuickBattleHitCount;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_QuickBattleProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX354_FieldChangeRemote> m_FieldChangeRemoteArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFieldChangeMinTime_Doughnut;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFieldChangeMinTime_Narrow;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDispFieldChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    FEX354_RemoteEventID m_RemoteEventIDArray[6];
    
public:
    ATresEnemyPawn_e_ex354();
    UFUNCTION()
    void SetDebugDispFlag(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsZeroMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsWarpShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsReflectDamageShotMagazine();
    
    UFUNCTION(BlueprintPure)
    bool IsQuickBattleEndWaiting() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPartnerDead();
    
    UFUNCTION(BlueprintPure)
    bool IsNowKeepBodyCollReaction() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNowDestroyChargeShotOnDamage() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNormalShotMagazine();
    
    UFUNCTION(BlueprintPure)
    bool IsNoAppearOnRevengeWarp() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHitOnCounterAttackWait() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsField_Standard() const;
    
    UFUNCTION(BlueprintPure)
    bool IsField_Narrow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsField_Doughnut() const;
    
    UFUNCTION(Exec)
    bool IsDuringWalkCooldown();
    
    UFUNCTION(Exec)
    bool IsDuringArrowRainCooldown();
    
    UFUNCTION(BlueprintPure)
    bool IsDamageBodyReactionCoroutineFinished() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCounterAttackWait() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsClusterShotMagazine();
    
    UFUNCTION(BlueprintCallable)
    bool IsArrowRainMagazine();
    
    UFUNCTION()
    void DebugSetDispQuickBattleHitCount(int32 inSet);
    
    UFUNCTION()
    void DebugSetDispFieldChangeTime(int32 inSet);
    
    UFUNCTION()
    void DebugFinishDoughnutChangeTime();
    
    UFUNCTION()
    void DebugFinishArtemaChangeTime();
    
    UFUNCTION()
    void DebugCallFieldChangeRemote(int32 InNum);
    
    UFUNCTION(Exec)
    bool CanUseArrowRain();
    
    UFUNCTION(BlueprintPure)
    bool CanChangeField_Narrow() const;
    
    UFUNCTION(BlueprintPure)
    bool CanChangeField_Doughnut() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    static void BP_OnReceiveRemoteEvent(FName inEventName);
    
};

