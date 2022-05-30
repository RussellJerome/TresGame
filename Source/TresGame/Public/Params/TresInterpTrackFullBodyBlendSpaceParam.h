#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBlendSpaceControl.h"
#include "TresInterpTrackFullBodyBlendSpaceParam.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFullBodyBlendSpaceParam : public UTresInterpTrackBlendSpaceControl {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SlotName;
    
    UTresInterpTrackFullBodyBlendSpaceParam();
};

