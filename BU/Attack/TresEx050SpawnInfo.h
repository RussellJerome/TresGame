#pragma once
#include "CoreMinimal.h"
#include "TresEx050SpawnInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresEx050SpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> wpSpawn;
    
    TRESGAME_API FTresEx050SpawnInfo();
};

