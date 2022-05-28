#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILEPawnBase.h"
#include "TresEnemyEx351AfterImageVisibleWorker.h"
#include "TresEnemyEx351AfterImageEffect.h"
#include "ETresStateID.h"
#include "ETresEnemyEx351TimeRushEvent.h"
#include "TresEnemyPawn_e_ex351.generated.h"

class ATresEnemyPawn_e_ex351;
class UParticleSystem;
class USoundBase;
class UObject;
class UCurveFloat;
class UParticleSystemComponent;
class ATresProjectileBase;

UCLASS()
class ATresEnemyPawn_e_ex351 : public ATresEnemyXIIILEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex351> m_AvatarPawnClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAvatarPawn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyEx351AfterImageEffect m_AfterImageEffects[5];
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowFadeTime;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_AfterImageStartVisibleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AfterImageFront;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AfterImageLeftRight;
    
    UPROPERTY()
    TArray<FTresEnemyEx351AfterImageVisibleWorker> m_AfterImageVisibleWorker;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NegativeReversalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETresStateID>> m_TimeStopCanSlowStates;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETresStateID>> m_TimeRushNotSendRemoteEventStates;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_TimeRushBaseDataTableIDNameList;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TimeRushWeatherEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TimeRushFloorEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TimeRushLongHandEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TimeRushShortHandEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_TimeRushAudioData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeRushAudioFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_TimeRushLongHandRewindCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_TimeRushInvisibleAttackNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsTimeRushShutDownFreezeShot: 1;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_NegativeReversalEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_TimeRushWeatherEffectCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_TimeRushFloorEffectCmp;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_TimeRushLongHandEffectCmp;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_TimeRushShortHandEffectCmp;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_MaliceWhipSmallContinuousProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MaliceWhipFloorEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ChangeLastAttackHitNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRateStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SmallContinuousStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_AirMaliceWhipVoiceList;
    
public:
    ATresEnemyPawn_e_ex351();
    UFUNCTION(BlueprintCallable)
    static void TimeRushSendEvent(UObject* WorldContextObject, ETresEnemyEx351TimeRushEvent EventType);
    
    UFUNCTION()
    bool IsTimeStopSlow();
    
    UFUNCTION()
    bool IsTimeRushStartReazonDamageReaction();
    
    UFUNCTION()
    bool IsTimeRushFinishOneCycle();
    
    UFUNCTION()
    bool IsTimeRush() const;
    
    UFUNCTION()
    bool IsTakaDamageTimeStopCancel();
    
    UFUNCTION()
    bool IsHitWhipComboAttack();
    
    UFUNCTION()
    bool IsHitMaliceWhipAttack();
    
    UFUNCTION()
    bool IsForceWarpIn();
    
    UFUNCTION()
    int32 IsEndTimeRushComboNum();
    
    UFUNCTION()
    bool IsEndAllTimeRushCombo();
    
    UFUNCTION()
    bool IsConditionFinalTimeRush() const;
    
    UFUNCTION()
    bool IsArmorBreakAfterWarp();
    
    UFUNCTION(BlueprintCallable)
    void DebugStartTimeRushCombo();
    
    UFUNCTION()
    void DebugSetTimeRushComboIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DebugEndTimeRushCombo();
    
    UFUNCTION(BlueprintCallable)
    ATresEnemyPawn_e_ex351* BP_GetAvaterSelectRoleNumber(int32 InSelectRoleNumber);
    
    UFUNCTION(BlueprintCallable)
    void BP_FinishTimeRush();
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableArmorBreakAfterWarp(bool bEnable);
    
};

