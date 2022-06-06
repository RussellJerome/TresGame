#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy601Pawn.generated.h"

class UTresGumiShipAtkCollisionSetCompo;

UCLASS(Abstract)
class ATresGumiShipEnemy601Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipAtkCollisionSetCompo* m_pRushAtkCollision;
    
    ATresGumiShipEnemy601Pawn();
};

