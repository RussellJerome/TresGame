#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GUMI_SHIP_DROPITEM_RARITY.h"
#include "TresGumiShipDropPrizeData.h"
#include "TresGumiShipItemlotteryDataTable.generated.h"

USTRUCT()
struct FTresGumiShipItemlotteryDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipDropPrizeData m_Itemlottery;
    
    UPROPERTY(EditDefaultsOnly)
    GUMI_SHIP_DROPITEM_RARITY m_Rarity;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ApperProb;
    
    TRESGAME_API FTresGumiShipItemlotteryDataTable();
};

