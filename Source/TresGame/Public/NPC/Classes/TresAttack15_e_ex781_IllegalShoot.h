#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack15_e_ex781_IllegalShoot.generated.h"

class ATresProjectileBase;
class ATresProjectileGenerator_e_ex781_SlashWave;

UCLASS()
class UTresAttack15_e_ex781_IllegalShoot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex781_SlashWave> m_PatternSwordAttackState;
    
    UTresAttack15_e_ex781_IllegalShoot();
};

