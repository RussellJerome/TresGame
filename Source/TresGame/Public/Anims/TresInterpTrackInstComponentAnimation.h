#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackInstSlotAnimation.h"
#include "TresInterpTrackInstComponentAnimation.generated.h"

class UTresSkeletalMeshComponent;

UCLASS()
class TRESGAME_API UTresInterpTrackInstComponentAnimation : public UTresInterpTrackInstSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UTresSkeletalMeshComponent* m_SkelComp;
    
    UTresInterpTrackInstComponentAnimation();
};

