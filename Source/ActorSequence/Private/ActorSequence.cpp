#include "ActorSequence.h"
#include "MovieScene.h"

UActorSequence::UActorSequence() {
    this->MovieScene = CreateDefaultSubobject<UMovieScene>(TEXT("MovieScene"));
}

