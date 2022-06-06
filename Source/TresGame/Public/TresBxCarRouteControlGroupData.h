#pragma once
#include "CoreMinimal.h"
#include "TresBxCarRouteControlGroupData.generated.h"

class ATresBxCarGenerator;

USTRUCT(BlueprintType)
struct FTresBxCarRouteControlGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ATresBxCarGenerator*> Generators;
    
    TRESGAME_API FTresBxCarRouteControlGroupData();
};

