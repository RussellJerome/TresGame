#pragma once
#include "CoreMinimal.h"
#include "TresTimelineDataSection.h"
#include "TresActorVoiceSoundSection.generated.h"

class USoundBase;

UCLASS(EditInlineNew)
class TRESGAME_API UTresActorVoiceSoundSection : public UTresTimelineDataSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* m_Sound;
    
    UPROPERTY(EditAnywhere)
    FName m_AttachSocket;
    
    UTresActorVoiceSoundSection();
};

