#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresTreasureDataSet.generated.h"

class UDataTable;

UCLASS()
class TRESGAME_API UTresTreasureDataSet : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_TreasureDataTables[32];
    
    UTresTreasureDataSet();
};

