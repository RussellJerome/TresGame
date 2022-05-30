#pragma once
#include "CoreMinimal.h"
#include "TresRaPuddingPosition.generated.h"

class ATresRaPuddingSplineActor;

USTRUCT(BlueprintType)
struct FTresRaPuddingPosition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresRaPuddingSplineActor> TargetActor;
    
    TRESGAME_API FTresRaPuddingPosition();
};

