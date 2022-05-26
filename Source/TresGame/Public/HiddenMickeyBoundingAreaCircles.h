#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HiddenMickeyBoundingAreaCircles.generated.h"

USTRUCT(BlueprintType)
struct FHiddenMickeyBoundingAreaCircles {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D Offset;
    
    UPROPERTY(EditAnywhere)
    float Size;
    
    TRESGAME_API FHiddenMickeyBoundingAreaCircles();
};

