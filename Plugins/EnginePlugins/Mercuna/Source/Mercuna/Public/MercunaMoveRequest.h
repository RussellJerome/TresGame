#pragma once
#include "CoreMinimal.h"
#include "MercunaMoveRequest.generated.h"

class AActor;

USTRUCT()
struct MERCUNA_API FMercunaMoveRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* GoalActor;
    
    FMercunaMoveRequest();
};

