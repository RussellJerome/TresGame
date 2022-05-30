#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstFaceAnimation.generated.h"

class UTresInterpTrackFaceAnimation;

UCLASS()
class TRESGAME_API UTresInterpTrackInstFaceAnimation : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float LastUpdatePosition;
    
    UPROPERTY(Transient)
    int32 LastKeyIndex;
    
    UPROPERTY(Transient)
    bool IsAnimPlaying;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UTresInterpTrackFaceAnimation>> OtherFaceTracks;
    
    UTresInterpTrackInstFaceAnimation();
};

