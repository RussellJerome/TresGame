#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIDPawnBase.h"
#include "TresFRThinkOfYouInterface.h"
#include "VoiceSet_e_ex306.h"
#include "ETresObjTypeProcChannel.h"
#include "TresAnimNotifyState_AttachEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresScreenEffectPriority -FallbackName=ETresScreenEffectPriority
#include "TresEnemyPawn_e_ex306.generated.h"

class ATresCharPawnBase;
class UCurveFloat;
class UTresClaymoreManager_e_ex306;
class UCurveVector;
class ATresWeaponBase;

UCLASS()
class ATresEnemyPawn_e_ex306 : public ATresEnemyXIIIDPawnBase, public ITresFRThinkOfYouInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bBlueBurst;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnClaymore;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceStrongBodyDamageOnBlue;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceStrongWorkResetOnBlue;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceStrongBodyDamageOnStun;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxBerserkValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bGaugeUI;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_AddBerserkGageCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageAddBerserkGageRate;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AddBerserkGageCurve_PhaseEx1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageAddBerserkGageRate_PhaseEx1;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_SubBerserkGageCurve_PhaseEx1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageSubBerserkGageRate_PhaseEx1;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_HealBerserkGageCurve_PhaseEx1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageAddBerserkGageRate_Heal_PhaseEx1;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_HealBerserkGageCurve_PhaseEx1_ThinkOfYou;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageAddBerserkGageRate_Heal_PhaseEx1_ThinkOfYou;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_SubBerserkGageCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageSubBerserkGageRate;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_HealBerserkGageCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageAddBerserkGageRate_Heal;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AddBerserkGageCurve_Berserk;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageAddBerserkGageRate_Berserk;
    
    UPROPERTY(EditDefaultsOnly)
    FVoiceSet_e_ex306 m_VoiceGroupSetArray[6];
    
protected:
    UPROPERTY()
    ATresWeaponBase* m_pWeaponClaymore;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresClaymoreManager_e_ex306* m_ClaymoreManager;
    
    UPROPERTY()
    TWeakObjectPtr<ATresCharPawnBase> m_XionPawn;
    
public:
    ATresEnemyPawn_e_ex306();
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void OpenHudSaix();
    
    UFUNCTION(BlueprintPure)
    bool IsBodyTypeStun() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBodyTypeNormal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBodyTypeBlueBurst() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBodyTypeBerserk() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBerserkGageZero() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBerserkGageMax() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBerserkGage200() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBerserkGage100() const;
    
    UFUNCTION()
    void DebugThinkOfYouDamageDisp(int32 InNum);
    
    UFUNCTION()
    void DebugBodyTypeFunc(int32 InNum);
    
    UFUNCTION()
    void DebugBerserkGageFunc(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void CloseHudSaix();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DrawAlertMessage(const FString& inMsg);
    
    
    // Fix for true pure virtual functions not being implemented
};

