#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMapSetStatics.generated.h"

UCLASS(BlueprintType)
class UTresMapSetStatics : public UObject {
    GENERATED_BODY()
public:
    UTresMapSetStatics();
    UFUNCTION(BlueprintCallable)
    static void TresOneFrameLoadMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableMapSet(bool Enable);
    
    UFUNCTION(BlueprintPure)
    static bool IsEnableMapSet();
    
};

