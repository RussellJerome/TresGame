#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovieSceneSequencePlayer.h"
#include "ActorSequenceComponent.generated.h"

class UActorSequence;
class UActorSequencePlayer;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ACTORSEQUENCE_API UActorSequenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(EditAnywhere, Instanced)
    UActorSequence* Sequence;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UActorSequencePlayer* SequencePlayer;
    
    UPROPERTY(EditAnywhere)
    bool bAutoPlay;
    
public:
    UActorSequenceComponent();
};

