#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresFaceAnimationTrackKey.h"
#include "TresInterpTrackFaceAnimation.generated.h"

class UTresAnimSet;
class UTresInterpTrackInstFaceAnimation;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFaceAnimation : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresFaceAnimationTrackKey> Keys;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTresAnimSet* Animations;
    
    UPROPERTY(Transient)
    UTresInterpTrackInstFaceAnimation* FaceTrackInst;
    
    UTresInterpTrackFaceAnimation();
};

