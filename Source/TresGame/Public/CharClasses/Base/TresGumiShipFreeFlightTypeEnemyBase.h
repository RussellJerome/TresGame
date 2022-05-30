#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.generated.h"

UCLASS(Abstract)
class ATresGumiShipFreeFlightTypeEnemyBase : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator LimitRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TurnAdvanced;
    
    ATresGumiShipFreeFlightTypeEnemyBase();
};

