#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresAchievementAsset.generated.h"

UCLASS()
class TRESGAME_API UTresAchievementAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> DataArray;
    
    UTresAchievementAsset();
};

