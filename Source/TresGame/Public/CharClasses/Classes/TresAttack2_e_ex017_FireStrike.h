#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex017_FireStrike.generated.h"

class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack2_e_ex017_FireStrike : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_RushEff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkHomingAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkHomingDownDistSt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkHomingDownDistEnd;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bDisableBrake;
    
public:
    UTresAttack2_e_ex017_FireStrike();
};

