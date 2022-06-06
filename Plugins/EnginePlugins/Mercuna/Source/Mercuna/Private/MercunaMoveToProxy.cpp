#include "MercunaMoveToProxy.h"

class UMercunaMoveToProxy;
class AActor;
class UObject;
class APawn;

void UMercunaMoveToProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercunaMoveToProxy* UMercunaMoveToProxy::MercunaMoveToLocation(UObject* WorldContextObject, APawn* Pawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}

UMercunaMoveToProxy* UMercunaMoveToProxy::MercunaMoveToActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}

UMercunaMoveToProxy::UMercunaMoveToProxy() {
}

