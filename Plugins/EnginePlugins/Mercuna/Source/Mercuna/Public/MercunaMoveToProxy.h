#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaNavigationResultDelegate.h"
#include "AITypes.h"
#include "EMercunaMoveResult.h"
#include "UObject/NoExportTypes.h"
#include "MercunaMoveToProxy.generated.h"

class UObject;
class UMercunaMoveToProxy;
class AActor;
class APawn;

UCLASS(MinimalAPI)
class UMercunaMoveToProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnFailure;
    
    UMercunaMoveToProxy();
private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UMercunaMoveToProxy* MercunaMoveToLocation(UObject* WorldContextObject, APawn* Pawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    static UMercunaMoveToProxy* MercunaMoveToActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
    
};

