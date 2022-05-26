#include "ActorSequenceComponent.h"
#include "ActorSequence.h"

UActorSequenceComponent::UActorSequenceComponent() {
    this->Sequence = CreateDefaultSubobject<UActorSequence>(TEXT("Sequence"));
    this->SequencePlayer = NULL;
    this->bAutoPlay = false;
}

