#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILDPawnBase.h"
#include "ETresBodyCollReactionType.h"
#include "EX359_EffectGroupID.h"
#include "VoiceSet_e_ex359.h"
#include "EX359_RemoteEventID.h"
#include "TresEnemyPawn_e_ex359.generated.h"

class UParticleSystemComponent;
class USplineComponent;
class UParticleSystem;
class ATresWeaponBase;

UCLASS()
class ATresEnemyPawn_e_ex359 : public ATresEnemyXIIILDPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionTypeWhileStun;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionTypeWhileFinalBrake;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bIgnoreBodyReacyionNotifyWhileFinalBrake;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionTypeWhileArmorMode;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_EffectGroupID m_GroupID[7];
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    USplineComponent* m_SplineComp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    bool m_bBonamikResetBody;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WhiteOutParticleClass;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WhiteOutParticleComp;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FinalBrakeFloorParticleClass;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_RemoteEventID m_RemoteEventIDArray[6];
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ArmorBrakeBlowPower;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ArmorBrakeBlowDamageStartBrakeTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ArmorBrakeBlowDamageVelocityZ;
    
    UPROPERTY(EditDefaultsOnly)
    FVoiceSet_e_ex359 m_VoiceGroupSetArray[5];
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAccelVoiceProhibitTime;
    
protected:
    UPROPERTY()
    ATresWeaponBase* m_pWeaponKeyBlade;
    
    UPROPERTY()
    ATresWeaponBase* m_pWeaponClaymore;
    
public:
    ATresEnemyPawn_e_ex359();
    UFUNCTION(BlueprintPure)
    bool IsNowFinalBrake() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNowBerserkCombo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNowAirCombo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinalBrakeEnd() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinalBrakeArmorBrakeSucceeded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFastMoveMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDamageBodyReactionCoroutineFinished() const;
    
};

