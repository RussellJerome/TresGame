#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack9_e_ex306_Revenge.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack9_e_ex306_Revenge : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditAnywhere)
    bool m_bAimTarget;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot;
    
    UTresAttack9_e_ex306_Revenge();
};

