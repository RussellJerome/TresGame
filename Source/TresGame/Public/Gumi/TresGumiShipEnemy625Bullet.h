#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipEnemy625Bullet.generated.h"

UCLASS(Abstract)
class ATresGumiShipEnemy625Bullet : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxDeceleration;
    
public:
    ATresGumiShipEnemy625Bullet();
};

