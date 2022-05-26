#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstEffectAttach.generated.h"

UCLASS()
class TRESGAME_API UTresInterpTrackInstEffectAttach : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstEffectAttach();
};

