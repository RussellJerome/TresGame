#include "MercunaTrackActorProxy.h"

class AActor;
class UObject;
class UMercunaTrackActorProxy;
class APawn;

void UMercunaTrackActorProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercunaTrackActorProxy* UMercunaTrackActorProxy::MercunaTrackActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float Distance, float Speed) {
    return NULL;
}

UMercunaTrackActorProxy::UMercunaTrackActorProxy() {
}

