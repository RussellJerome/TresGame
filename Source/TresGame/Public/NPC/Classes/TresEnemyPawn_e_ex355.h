#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILDPawnBase.h"
#include "VoiceSet_e_ex355.h"
#include "ETresBodyCollReactionType.h"
#include "EX355_RemoteEventID.h"
#include "EX355_EffectGroupID.h"
#include "ETresObjTypeProcChannel.h"
#include "TresAnimNotifyState_AttachEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresScreenEffectPriority -FallbackName=ETresScreenEffectPriority
#include "TresEnemyPawn_e_ex355.generated.h"

class UCurveFloat;
class ATresWeaponBase;
class UTresClaymoreManager_e_ex355;

UCLASS()
class ATresEnemyPawn_e_ex355 : public ATresEnemyXIIILDPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnClaymore;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bVisibleWeaponOnDamage;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDefaultBodyReactionTypeOnDamage;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fResetBodyReactionTypeOnLandDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceStrongBodyDamageOnStun;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxBodyStrongValueOnRevenge;
    
    UPROPERTY()
    bool m_bModifyMaxBodyStrongValueOnRevenge;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionTypeOnGageZero;
    
    UPROPERTY()
    bool m_bBodyReactionTypeOnGageZero;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionTypeOnGage200;
    
    UPROPERTY()
    bool m_bBodyReactionTypeOnGage200;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCanRevengeOnGageZero;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCanRevengeOnGaze200;
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_RemoteEventID m_RemoteEventIDArray[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxBerserkValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bGaugeUI;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_SubBerserkGageCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageSubBerserkGageRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iOnDamageSubBerserkGageRate_MaxReactionPower;
    
    UPROPERTY()
    bool m_bOnDamageSubBerserkGageRate_MaxReactionPower;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AddBerserkGageCurve_Charge;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_HealBerserkGageCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AddBerserkGageCurve_Berserk;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOnDamageAddBerserkGageRate_Berserk;
    
    UPROPERTY(EditDefaultsOnly)
    FVoiceSet_e_ex355 m_VoiceGroupSetArray[11];
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_EffectGroupID m_GroupID[5];
    
protected:
    UPROPERTY()
    ATresWeaponBase* m_pWeaponClaymore;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresClaymoreManager_e_ex355* m_ClaymoreManager;
    
public:
    ATresEnemyPawn_e_ex355();
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficientDefault(float InTransitionTime, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterLightCoefficient(float InTransitionTime, float InCoefficient, ETresObjTypeProcChannel InChannel, TEnumAsByte<ETresScreenEffectPriority> InPriority, bool IsEject);
    
    UFUNCTION(BlueprintCallable)
    void OpenHudSaix();
    
    UFUNCTION(BlueprintPure)
    bool IsDamageBodyReactionCoroutineFinished() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBodyTypeStun() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBodyTypeNormal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBodyTypeCharge() const;
    
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
    void DebugBodyTypeFunc(int32 InNum);
    
    UFUNCTION()
    void DebugBerserkGageFunc(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void CloseHudSaix();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DrawAlertMessage(const FString& inMsg);
    
};

