#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipBattleMissionIndividalParam.h"
#include "TresGumiShipBattleMissionIndividalParameterDataTable.generated.h"

USTRUCT()
struct FTresGumiShipBattleMissionIndividalParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipBattleMissionIndividalParam m_Individal;
    
    TRESGAME_API FTresGumiShipBattleMissionIndividalParameterDataTable();
};

