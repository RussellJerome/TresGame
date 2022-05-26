#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstActorVoice.generated.h"

UCLASS()
class TRESGAME_API UTresInterpTrackInstActorVoice : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstActorVoice();
};

