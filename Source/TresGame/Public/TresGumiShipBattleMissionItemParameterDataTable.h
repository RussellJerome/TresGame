#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipDropPrizeData.h"
#include "TresGumiShipBattleMissionItemParameterDataTable.generated.h"

USTRUCT()
struct FTresGumiShipBattleMissionItemParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipDropPrizeData m_Compensations[3];
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipDropPrizeData m_CompensationForFirstTime;
    
    TRESGAME_API FTresGumiShipBattleMissionItemParameterDataTable();
};

