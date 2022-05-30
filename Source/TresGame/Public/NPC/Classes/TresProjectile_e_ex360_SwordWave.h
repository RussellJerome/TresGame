#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex360_SwordWave.generated.h"

UCLASS()
class ATresProjectile_e_ex360_SwordWave : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_RollSpeed;
    
    ATresProjectile_e_ex360_SwordWave();
};

