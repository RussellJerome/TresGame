#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "TresGumiShipEnemy612Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipEnemy612Pawn : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Gravity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ProjectileMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PitchVelocity;
    
    ATresGumiShipEnemy612Pawn();
};

