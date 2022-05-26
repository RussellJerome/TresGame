#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex360_KBRideShoot.generated.h"

class ATresEnemyPawn_e_ex360KBBoard;

UCLASS()
class ATresProjectile_e_ex360_KBRideShoot : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex360KBBoard* m_KBBoard;
    
public:
    ATresProjectile_e_ex360_KBRideShoot();
};

