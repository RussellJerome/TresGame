#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex004_WaterUpper.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex004_WaterUpper : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_AtkColStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AtkColEndTime;
    
    ATresProjectile_e_ex004_WaterUpper();
};

