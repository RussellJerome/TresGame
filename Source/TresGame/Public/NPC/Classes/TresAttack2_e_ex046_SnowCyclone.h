#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex046_SnowCyclone.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack2_e_ex046_SnowCyclone : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CycloneProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CycloneSpawnEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallEndHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeedRightOnly;
    
public:
    UTresAttack2_e_ex046_SnowCyclone();
};

