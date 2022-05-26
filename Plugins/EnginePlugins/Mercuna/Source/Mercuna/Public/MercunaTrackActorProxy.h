#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MercunaNavigationResultDelegate.h"
#include "AITypes.h"
#include "EMercunaMoveResult.h"
#include "MercunaTrackActorProxy.generated.h"

class UObject;
class AActor;
class APawn;
class UMercunaTrackActorProxy;

UCLASS(MinimalAPI)
class UMercunaTrackActorProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaNavigationResult OnFailure;
    
    UMercunaTrackActorProxy();
private:
    UFUNCTION()
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UMercunaTrackActorProxy* MercunaTrackActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float Distance, float Speed);
    
};

