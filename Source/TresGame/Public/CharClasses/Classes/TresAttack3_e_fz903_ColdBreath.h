#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack3_e_fz903_ColdBreath.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack3_e_fz903_ColdBreath : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FVector m_EffectScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BreathTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BreathPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BreathMaxYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BreathMaxYawTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BreathEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BreathEff;
    
public:
    UTresAttack3_e_fz903_ColdBreath();
};

