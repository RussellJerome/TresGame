#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy615Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipEnemy615Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 mode;
    
    ATresGumiShipEnemy615Pawn();
};

