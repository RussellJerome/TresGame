#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSplineTransformArray.generated.h"

USTRUCT(BlueprintType)
struct FTresSplineTransformArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator Rotator;
    
    TRESGAME_API FTresSplineTransformArray();
};

