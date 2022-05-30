#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex363_DarkRush_Column.generated.h"

UCLASS()
class ATresProjectile_e_ex363_DarkRush_Column : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_AtkUpdateInterval;
    
    ATresProjectile_e_ex363_DarkRush_Column();
};

