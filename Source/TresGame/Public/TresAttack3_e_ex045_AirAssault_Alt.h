#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex045_AirAssault_Alt.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex045_AirAssault_Alt : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fForwardVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotateVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTimeToShotFromJump;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVariance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fEndEffectTime;
    
    UTresAttack3_e_ex045_AirAssault_Alt();
};

