#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackActorVoiceKey.h"
#include "TresInterpTrackActorVoice.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackActorVoice : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackActorVoiceKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    bool m_StopActorVoiceWhenTerminate;
    
    UTresInterpTrackActorVoice();
};

