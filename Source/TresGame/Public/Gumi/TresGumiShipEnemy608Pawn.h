#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "TresGumiShipEnemy608Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipEnemy608Pawn : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy608Pawn();
private:
    UFUNCTION(BlueprintCallable)
    void SetLaserAttackChargeTimer(float LaserChargeSeconds);
    
};

