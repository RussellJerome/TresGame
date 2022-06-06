#pragma once
#include "CoreMinimal.h"
#include "DancePlayerAction.generated.h"

USTRUCT(BlueprintType)
struct FDancePlayerAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName NormalMotion;
    
    UPROPERTY(EditAnywhere)
    FName GreatMotion;
    
    UPROPERTY(EditAnywhere)
    FName BadMotion;
    
    TRESGAME_API FDancePlayerAction();
};

