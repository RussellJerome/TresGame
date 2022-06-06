#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTinyShipPlanDataTableSet.generated.h"

class UDataTable;

UCLASS()
class UTresTinyShipPlanDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> m_pTinyPlanData;
    
public:
    UTresTinyShipPlanDataTableSet();
};

