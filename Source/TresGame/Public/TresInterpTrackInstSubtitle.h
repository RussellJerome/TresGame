#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstSubtitle.generated.h"

UCLASS()
class TRESGAME_API UTresInterpTrackInstSubtitle : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 m_WindowHandle;
    
    UPROPERTY()
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstSubtitle();
};

