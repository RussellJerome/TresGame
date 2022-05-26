#pragma once
#include "CoreMinimal.h"
#include "ETresDetectCollShape2D.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresDetectCollShapeAssetUnit2D.generated.h"

USTRUCT(BlueprintType)
struct FTresDetectCollShapeAssetUnit2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresDetectCollShape2D::Type> ShapeType;
    
    UPROPERTY(EditAnywhere)
    FVector Size;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRocation;
    
    TRESGAME_API FTresDetectCollShapeAssetUnit2D();
};

