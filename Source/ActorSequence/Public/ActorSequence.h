#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequence.h"
#include "ActorSequenceObjectReferenceMap.h"
#include "ActorSequence.generated.h"

class UMovieScene;

UCLASS(DefaultToInstanced)
class ACTORSEQUENCE_API UActorSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    FActorSequenceObjectReferenceMap ObjectReferences;
    
public:
    UActorSequence();
};

