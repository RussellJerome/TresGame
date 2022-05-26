#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "UObject/NoExportTypes.h"
#include "MaterialExpressionManaMovieFormatSwitch.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Inputs[2];
    
    UMaterialExpressionManaMovieFormatSwitch();
};

