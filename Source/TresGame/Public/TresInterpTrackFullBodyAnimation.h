#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresFullBodyAnimationTrackKey.h"
#include "TresInterpTrackFullBodyAnimation.generated.h"

class UTresAnimSet;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFullBodyAnimation : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresFullBodyAnimationTrackKey> Keys;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTresAnimSet* TresAnimSet;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTresAnimSet* Animations;
    
    UTresInterpTrackFullBodyAnimation();
};

