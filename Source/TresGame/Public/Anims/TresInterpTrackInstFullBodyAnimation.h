#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstFullBodyAnimation.generated.h"

UCLASS()
class TRESGAME_API UTresInterpTrackInstFullBodyAnimation : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float LastUpdatePosition;
    
    UPROPERTY(Transient)
    int32 LastKeyIndex;
    
    UPROPERTY(Transient)
    float InitialMeshScale;
    
    UPROPERTY(Transient)
    float LastMeshScale;
    
    UPROPERTY(Transient)
    int32 ForcedLOD;
    
    UPROPERTY(Transient)
    bool bEnableUpdateRateOptimizations;
    
    UTresInterpTrackInstFullBodyAnimation();
};

