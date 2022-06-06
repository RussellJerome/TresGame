#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackActorVoiceKey.generated.h"

class UTresActorVoice;

USTRUCT(BlueprintType)
struct FTresInterpTrackActorVoiceKey {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    UTresActorVoice* m_ActorVoice;
    
    TRESGAME_API FTresInterpTrackActorVoiceKey();
};

