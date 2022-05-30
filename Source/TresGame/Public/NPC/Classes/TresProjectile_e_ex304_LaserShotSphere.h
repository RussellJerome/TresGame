#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex304_LaserShotSphere.generated.h"

UCLASS(HideDropdown)
class ATresProjectile_e_ex304_LaserShotSphere : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LaserShotProjectileClass;
    
    ATresProjectile_e_ex304_LaserShotSphere();
};

