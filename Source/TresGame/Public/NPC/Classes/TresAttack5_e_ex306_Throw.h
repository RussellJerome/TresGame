#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "DeviationShotInfo_e_ex306.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack5_e_ex306_Throw.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex306_Throw : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditAnywhere)
    bool m_bAimTarget;
    
    UPROPERTY(EditAnywhere)
    FDeviationShotInfo_e_ex306 m_DeviationShotInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot;
    
    UTresAttack5_e_ex306_Throw();
};

