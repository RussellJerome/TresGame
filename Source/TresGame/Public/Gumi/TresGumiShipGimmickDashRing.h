#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickDashRing.generated.h"

UCLASS()
class ATresGumiShipGimmickDashRing : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickDashRing();
};

