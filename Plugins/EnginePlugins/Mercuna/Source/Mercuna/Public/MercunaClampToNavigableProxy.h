#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "MercunaClampToNavigableResultDelegate.h"
#include "MercunaClampToNavigableProxy.generated.h"

class UObject;
class UMercunaClampToNavigableProxy;

UCLASS(MinimalAPI)
class UMercunaClampToNavigableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaClampToNavigableResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaClampToNavigableResult OnFailure;
    
    UMercunaClampToNavigableProxy();
    UFUNCTION(BlueprintCallable)
    static UMercunaClampToNavigableProxy* MercunaClampToNavigable(UObject* WorldContextObject, FVector Position, float NavigationRadius, float SearchRadius);
    
};

