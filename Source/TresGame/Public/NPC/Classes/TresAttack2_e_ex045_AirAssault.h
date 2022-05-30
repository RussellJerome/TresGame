#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex045_AirAssault.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex045_AirAssault : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fForwardVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAirTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotateVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVariance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack2_e_ex045_AirAssault();
};

