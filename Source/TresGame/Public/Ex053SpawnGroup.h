#pragma once
#include "CoreMinimal.h"
#include "Ex053SpawnGroup.generated.h"

USTRUCT(BlueprintType)
struct FEx053SpawnGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> SpawnDataIndexArray;
    
    UPROPERTY(EditAnywhere)
    bool bCluster;
    
    TRESGAME_API FEx053SpawnGroup();
};

