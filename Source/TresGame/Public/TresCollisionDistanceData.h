#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCollisionDistanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresCollisionDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bExclusionMode;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> ClassArray;
    
    TRESGAME_API FTresCollisionDistanceData();
};

