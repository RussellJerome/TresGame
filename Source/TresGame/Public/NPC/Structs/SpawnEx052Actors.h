#pragma once
#include "CoreMinimal.h"
#include "SpawnEx052Actors.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnEx052Actors {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> wpActors;
    
    TRESGAME_API FSpawnEx052Actors();
};

