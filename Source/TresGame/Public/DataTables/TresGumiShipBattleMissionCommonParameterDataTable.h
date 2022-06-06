#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipBattleMissionCommonParam.h"
#include "TresGumiShipBattleMissionCommonParameterDataTable.generated.h"

USTRUCT()
struct FTresGumiShipBattleMissionCommonParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipBattleMissionCommonParam m_Common;
    
    TRESGAME_API FTresGumiShipBattleMissionCommonParameterDataTable();
};

