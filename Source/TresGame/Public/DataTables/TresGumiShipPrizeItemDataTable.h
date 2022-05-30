#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "TresGumiShipPrizeDataTable.h"
#include "TresGumiShipPrizeItemDataTable.generated.h"

class ATresGumiShipDropPrize;

USTRUCT()
struct FTresGumiShipPrizeItemDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGumiShipDropPrize> m_SpawnClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipPrizeDataTable m_Parameters;
    
    TRESGAME_API FTresGumiShipPrizeItemDataTable();
};

