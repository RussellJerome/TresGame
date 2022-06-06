#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresFoodstuffDropDataSet.generated.h"

class UDataTable;

UCLASS()
class TRESGAME_API UTresFoodstuffDropDataSet : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FoodstuffDropDataTables[32];
    
    UTresFoodstuffDropDataSet();
};

