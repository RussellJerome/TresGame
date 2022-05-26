#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TresEmotionPoint.h"
#include "TresRecoveryHpMpFpLogInfo.h"
#include "ETresBPEM_BattleType.h"
#include "ETresPlayerSpecificActionID.h"
#include "ETresCommandKind.h"
#include "TresTakeDamageLogInfo.h"
#include "TresStartAttackLogInfo.h"
#include "TresStateLogInfo.h"
#include "TresAttackHitInvincibleCharLogInfo.h"
#include "ETresEnemyXIIIPhaseType.h"
#include "TresBattlePlayerEmotionManager.generated.h"

class UCurveVector;
class UCurveFloat;
class UUserWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBattlePlayerEmotionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_ComboScore_Max_Player;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_Max_Enemy;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_PlayerHit_PlayerIncrease;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_PlayerHit_EnemyDecrease;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_EnemyHit_EnemyIncrease;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_EnemyHit_PlayerDecrease;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_PlayerMiss_PlayerDecrease;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_EnemyMiss_EnemyDecrease;
    
    UPROPERTY(EditAnywhere)
    float m_ComboScore_EnemyGuarded_EnemyDecrease;
    
    UPROPERTY(EditAnywhere)
    float m_AttackHitLogLifetime;
    
    UPROPERTY(EditAnywhere)
    float m_AttackMissLogLifetime;
    
    UPROPERTY(EditAnywhere)
    float m_SpecialActionLogLifeTime;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentEPUpdateTimeSpan;
    
    UPROPERTY(EditAnywhere)
    float m_NextEPUpdateTimeSpan;
    
    UPROPERTY(EditAnywhere)
    float m_GoalEPUpdateTimeSpan;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentHope_HitIncreaseBase;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentHope_HitIncreaseBase_Magic;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentHope_HitIncreaseBase_NoReaction;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentHope_kLatestHit;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentHope_kComboScore;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentHope_kDamage;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentHope_DecreaseHitlessTime;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentHope_MissDecreaseBase;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentHope_kLatestMiss;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentHope_EnemyHPIncrease;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_HitIncreaseBase;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_HitIncreaseBase_NoReaction;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentFear_kLatestHit;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentFear_kComboScore;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentFear_kDamage;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentFear_DecreaseHitlessTime;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_MissDecreaseBase;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentFear_kLatestMiss;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_GuardedDecreaseBase;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentFear_kLatestGuarded;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CurrentFear_DyingTimeIncreaseBase;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kMPCharging;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_Potion;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_HiPotion;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_MegaPotion;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_Ether;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_HiEther;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_MegaEther;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_Elixir;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_LastElixir;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_FocusSupplement;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_HiFocusSupplement;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_AllCure;
    
    UPROPERTY(EditAnywhere)
    float m_CurrentFear_kUsableRecoveryItem_MognetMedal;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* m_GoalEP_kShaking;
    
    UPROPERTY(EditAnywhere)
    float m_NextEP_Speed;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMin_BeginBattle_XIIIA;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMax_BeginBattle_XIIIA;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMin_EndBattle_XIIIA;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMax_EndBattle_XIIIA;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_ProgressionRate_Phase_XIIIA;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_ProgressionRate_EnemyHP_XIIIA;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_FutureEP_RangeInterpolation_XIIIA;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMin_BeginBattle_XIIIB;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMax_BeginBattle_XIIIB;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMin_EndBattle_XIIIB;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMax_EndBattle_XIIIB;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_ProgressionRate_Phase_XIIIB;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_ProgressionRate_EnemyHP_XIIIB;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_FutureEP_RangeInterpolation_XIIIB;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMin_BeginBattle_XIIIE;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMax_BeginBattle_XIIIE;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMin_EndBattle_XIIIE;
    
    UPROPERTY(EditAnywhere)
    FTresEmotionPoint m_FutureEP_RangeMax_EndBattle_XIIIE;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_ProgressionRate_Phase_XIIIE;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_ProgressionRate_EnemyHP_XIIIE;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_FutureEP_RangeInterpolation_XIIIE;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> m_DebugEmotionMapWidgetClass;
    
    UTresBattlePlayerEmotionManager();
    UFUNCTION(BlueprintCallable)
    void SetUseDynamicRangeToFutureEP(bool InbUse);
    
    UFUNCTION(BlueprintCallable)
    void SetRangeFutureEP(FTresEmotionPoint InMin, FTresEmotionPoint InMax);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugTelemetryLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugStatusLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugEPLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugEmotionMap(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugActionLogOnViewport(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledDebugActionLogOnOutputLog(bool InbEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleType(ETresBPEM_BattleType InBattleType);
    
    UFUNCTION()
    void RespondToOnStartBossDefeatEffect();
    
    UFUNCTION()
    void RespondToOnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> InActionID, int32 InSubID);
    
    UFUNCTION()
    void RespondToOnPlayerEndCommandAction(TEnumAsByte<ETresCommandKind> InCommandKind);
    
    UFUNCTION()
    void RespondToOnPlayerBeginCommandAction(TEnumAsByte<ETresCommandKind> InCommandKind);
    
    UFUNCTION()
    void RespondToOnNotificationTakeDamageLogInfo(FTresTakeDamageLogInfo InLog);
    
    UFUNCTION()
    void RespondToOnNotificationStartAttackLogInfo(FTresStartAttackLogInfo InLog);
    
    UFUNCTION()
    void RespondToOnNotificationStartAIAttackLogInfo(FTresStateLogInfo InLog);
    
    UFUNCTION()
    void RespondToOnNotificationRecoveryHpMpFpLogInfo(FTresRecoveryHpMpFpLogInfo InLog);
    
    UFUNCTION()
    void RespondToOnNotificationDtorStateLogInfo(FTresStateLogInfo InLog);
    
    UFUNCTION()
    void RespondToOnNotificationCtorStateLogInfo(FTresStateLogInfo InLog);
    
    UFUNCTION()
    void RespondToOnNotificationAttackHitInvincibleCharLogInfo(FTresAttackHitInvincibleCharLogInfo InLog);
    
    UFUNCTION()
    void RespondToOnChangeCinematicMode(bool InIsCinematicMode);
    
    UFUNCTION()
    void RespondToOnChangeBattleMode(bool InIsBattleMode);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeXIIIPhase(ETresEnemyXIIIPhaseType InNewPhaseType);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabledDebugTelemetryLog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabledDebugStatusLog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabledDebugEPLog() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabledDebugEmotionMap() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabledDebugActionLogOnViewport() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabledDebugActionLogOnOutputLog() const;
    
    UFUNCTION(BlueprintPure)
    FTresEmotionPoint GetRangeFutureEP_Min() const;
    
    UFUNCTION(BlueprintPure)
    FTresEmotionPoint GetRangeFutureEP_Max() const;
    
    UFUNCTION(BlueprintPure)
    FTresEmotionPoint GetNextEP() const;
    
    UFUNCTION(BlueprintPure)
    FTresEmotionPoint GetGoalEP() const;
    
    UFUNCTION(BlueprintPure)
    FTresEmotionPoint GetCurrentEP() const;
    
};

