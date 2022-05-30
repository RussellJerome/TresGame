#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "EX359_BeamOnTimeInfoSet.h"
#include "TresAttack9_e_ex359_FinalBrake_BeamRush.generated.h"

class ATresProjectile_e_ex359_BeamSpawner;

UCLASS(HideDropdown)
class UTresAttack9_e_ex359_FinalBrake_BeamRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_BeamSpawner> m_ProjectileClass;
    
    UPROPERTY()
    ATresProjectile_e_ex359_BeamSpawner* m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamOnTimeInfoSet m_BeamOnTimeInfoSet;
    
    UTresAttack9_e_ex359_FinalBrake_BeamRush();
};

