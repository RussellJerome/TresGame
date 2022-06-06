#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackSlotAnimation.h"
#include "TresInterpTrackComponentAnimation.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackComponentAnimation : public UTresInterpTrackSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ComponentTag;
    
    UPROPERTY(EditAnywhere)
    bool m_IncludeChildActors;
    
    UTresInterpTrackComponentAnimation();
};

