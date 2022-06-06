#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresShareStatics.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class UTresShareStatics : public UObject {
    GENERATED_BODY()
public:
    UTresShareStatics();
    UFUNCTION(BlueprintCallable)
    static void TresEnableSharePlayForDLCEdition(const bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void TresEnableSharePlay(const bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void TresEnableLiveStreamForDLCEdition(const bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void TresEnableLiveStream(const bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void TresDisableSharePlayForDLCEdition(const bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void TresDisableSharePlay(const bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void TresDisableLiveStreamForDLCEdition(const bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static void TresDisableLiveStream(const bool isHighPriority);
    
};

