#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUIStatics.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresUIStatics : public UObject {
    GENERATED_BODY()
public:
    UTresUIStatics();
    UFUNCTION(BlueprintCallable)
    static int32 GetPercentUIF(float Point, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPercentUI(int32 Point, int32 Max, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPercentF(float Point, float Max, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPercent(int32 Point, int32 Max, int32 Range);
    
    UFUNCTION(BlueprintCallable)
    static int32 FloatToInt(float Num);
    
};

