#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPawnBase.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.generated.h"

UCLASS(Abstract)
class ATresGumiShipSplinePathMoveTypeEnemyBase : public ATresGumiShipEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool OnBattle;
    
    UPROPERTY(BlueprintReadWrite)
    bool Locked;
    
    ATresGumiShipSplinePathMoveTypeEnemyBase();
};

