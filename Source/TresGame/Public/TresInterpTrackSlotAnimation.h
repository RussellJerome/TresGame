#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresSlotAnimationTrackKey.h"
#include "TresInterpTrackSlotAnimation.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackSlotAnimation : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UPROPERTY(EditAnywhere)
    bool AnimStopWhenTerminated;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SkipAnimStopCheckSlots;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresSlotAnimationTrackKey> Keys;
    
    UTresInterpTrackSlotAnimation();
};

