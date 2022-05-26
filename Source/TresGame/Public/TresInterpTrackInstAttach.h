#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstAttach.generated.h"

UCLASS()
class TRESGAME_API UTresInterpTrackInstAttach : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_CurrentKey;
    
    UTresInterpTrackInstAttach();
};

