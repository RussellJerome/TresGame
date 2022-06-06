#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaRaycastResultDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MercunaRaycastProxy.generated.h"

class UObject;
class UMercunaRaycastProxy;

UCLASS(MinimalAPI)
class UMercunaRaycastProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaRaycastResult OnHit;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaRaycastResult OnNoHit;
    
    UMercunaRaycastProxy();
    UFUNCTION(BlueprintCallable)
    static UMercunaRaycastProxy* MercunaRaycast(UObject* WorldContextObject, FVector Start, FVector End, float NavigationRadius);
    
};

