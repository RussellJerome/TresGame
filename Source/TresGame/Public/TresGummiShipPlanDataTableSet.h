#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGummiShipPlanDataTableSet.generated.h"

class UDataTable;

UCLASS()
class UTresGummiShipPlanDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataTable*> m_pGummiPlanData;
    
public:
    UTresGummiShipPlanDataTableSet();
};

