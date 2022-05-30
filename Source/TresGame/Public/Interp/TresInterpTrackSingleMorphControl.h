#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackSingleMorphControl.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackSingleMorphControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_TargetName;
    
    UTresInterpTrackSingleMorphControl();
};

