#pragma once
#include "CoreMinimal.h"
#include "TresTimelineDataSection.h"
#include "TresActorVoiceSubtitleSection.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresActorVoiceSubtitleSection : public UTresTimelineDataSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_SubtitleKey;
    
    UTresActorVoiceSubtitleSection();
};

