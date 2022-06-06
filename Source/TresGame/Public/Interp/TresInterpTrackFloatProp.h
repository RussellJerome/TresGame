#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatProp.h"
#include "ETresPropertyTrackTermnation.h"
#include "TresInterpTrackFloatProp.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatProp : public UInterpTrackFloatProp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackFloatProp();
};

