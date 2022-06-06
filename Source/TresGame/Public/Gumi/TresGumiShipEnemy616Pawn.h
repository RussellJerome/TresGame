#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy616Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipEnemy616Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool Damaged;
    
    UPROPERTY(BlueprintReadWrite)
    bool AppearEnd;
    
    ATresGumiShipEnemy616Pawn();
};

