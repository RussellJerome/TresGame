#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex360_ContinuousSlash.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex360_ContinuousSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Bullet3Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsAirMode;
    
public:
    UTresAttack1_e_ex360_ContinuousSlash();
};

