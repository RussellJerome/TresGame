#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASPerspectiveTransform.generated.h"

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FASPerspectiveTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector4 Row0;
    
    UPROPERTY(BlueprintReadWrite)
    FVector4 Row1;
    
    UPROPERTY(BlueprintReadWrite)
    FVector4 Row2;
    
    UPROPERTY(BlueprintReadWrite)
    FVector4 Row3;
    
    FASPerspectiveTransform();
};

