#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipEnemyTerritoryInfo.h"
#include "TresGumiShipEnemyTerritoryParameterDataTable.generated.h"

USTRUCT()
struct FTresGumiShipEnemyTerritoryParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGumiShipEnemyTerritoryInfo> m_Territory;
    
    TRESGAME_API FTresGumiShipEnemyTerritoryParameterDataTable();
};

