#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack16_e_ex781_IllegalMagicWater.generated.h"

class ATresProjectileBase;

UCLASS()
class UTresAttack16_e_ex781_IllegalMagicWater : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fThrowAngle;
    
    UTresAttack16_e_ex781_IllegalMagicWater();
};

