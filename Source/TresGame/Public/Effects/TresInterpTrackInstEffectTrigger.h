#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstEffectTrigger.generated.h"

UCLASS()
class TRESGAME_API UTresInterpTrackInstEffectTrigger : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstEffectTrigger();
};

