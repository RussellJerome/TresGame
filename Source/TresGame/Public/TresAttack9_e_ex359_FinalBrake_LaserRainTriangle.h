#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EX359_GuardBeamInfoSet.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_LaserOnTimeInfoSet.h"
#include "TresAttack9_e_ex359_FinalBrake_LaserRainTriangle.generated.h"

class ATresProjectile_e_ex359_GuardBeamSpawner;
class ATresProjectile_e_ex359_LaserSpawner;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_LaserRainTriangle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_LaserSpawner> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_LaserOnTimeInfoSet m_LaserOnTimeInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_GuardBeamSpawner> m_GuardBeamProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_GuardBeamInfoSet m_GuardBeamInfoSet;
    
protected:
    UPROPERTY()
    TArray<ATresProjectileBase*> m_GuardBeamArray;
    
public:
    UTresAttack9_e_ex359_FinalBrake_LaserRainTriangle();
};

