#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_he90y_Breath.generated.h"

class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack_e_he90y_Breath : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_BlendSpaceAxisBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlendSpaceYawThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlendSpacePitchThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_PitchCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAttackLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultAttackLength;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStopAttackOnHitEnd;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttackParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AttackParticleComp;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackParticleAttachSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AttackHitParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AttackHitParticleComp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseLoopEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackHitParticleInterval;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_BlendSpaceSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_BlendSpaceSpeed_Start;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_AdjustBlendSpaceSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UCurveFloat* m_fBeginAnimAdjustBlendSpaceSpeedScaleCurve;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UCurveFloat* m_fLoopAnimAdjustBlendSpaceSpeedScaleCurve;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_AdjustBlendSpaceThreshold;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fBeginAnimBlendSpaceValueScale;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UCurveFloat* m_fBeginAnimBlendSpaceValueScaleCurve;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint32 m_bBoolArray[10];
    
    UTresAttack_e_he90y_Breath();
};

