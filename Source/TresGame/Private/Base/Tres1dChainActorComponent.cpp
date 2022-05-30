#include "Tres1dChainActorComponent.h"

class AActor;

void UTres1dChainActorComponent::SetPrev(AActor* Actor) {
}

void UTres1dChainActorComponent::SetNext(AActor* Actor) {
}

UTres1dChainActorComponent::UTres1dChainActorComponent() {
    this->NextActor = NULL;
    this->PrevActor = NULL;
}

