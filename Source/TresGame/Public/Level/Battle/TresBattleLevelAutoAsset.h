#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresBattleLevelAutoData.h"
#include "TresBattleLevelAutoAsset.generated.h"

UCLASS()
class TRESGAME_API UTresBattleLevelAutoAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresBattleLevelAutoData> DataArray;
    
    UTresBattleLevelAutoAsset();
};

