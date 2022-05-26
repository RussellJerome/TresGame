#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresSignProjectileAttackStartDelayParam_e_ex357.h"
#include "TresSignProjectile_e_ex357_Base.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract)
class ATresSignProjectile_e_ex357_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle2;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SignParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DoFireDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresSignProjectileAttackStartDelayParam_e_ex357> m_AttackStartDelayParamList;
    
public:
    ATresSignProjectile_e_ex357_Base();
};

