#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex701_FlameBulletBase.h"
#include "TresProjectile_e_ex701_FlameBulletHop.generated.h"

UCLASS()
class ATresProjectile_e_ex701_FlameBulletHop : public ATresProjectile_e_ex701_FlameBulletBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_EnableHomingSpeed;
    
public:
    ATresProjectile_e_ex701_FlameBulletHop();
};

