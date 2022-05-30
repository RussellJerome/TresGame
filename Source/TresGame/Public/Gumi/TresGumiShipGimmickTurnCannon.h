#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickTurnCannon.generated.h"

UCLASS()
class ATresGumiShipGimmickTurnCannon : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_PrizeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickTurnCannon();
};

