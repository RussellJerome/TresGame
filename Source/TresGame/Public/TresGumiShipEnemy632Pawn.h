#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPawnBase.h"
#include "TresGumiShipEnemy632Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipEnemy632Pawn : public ATresGumiShipEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy632Pawn();
private:
    UFUNCTION(BlueprintCallable)
    void SetCannonShotCount(int32 ShotAttackCount);
    
};

