#pragma once
#include "CoreMinimal.h"
#include "TresVector2DInt.generated.h"

USTRUCT(BlueprintType)
struct FTresVector2DInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Y;
    
    TRESGAME_API FTresVector2DInt();
};

