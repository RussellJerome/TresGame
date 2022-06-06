#pragma once
#include "CoreMinimal.h"
#include "ETresPropertyTrackTermnation.h"
#include "Matinee/InterpTrackLinearColorProp.h"
#include "TresInterpTrackLinearColorProp.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackLinearColorProp : public UInterpTrackLinearColorProp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackLinearColorProp();
};

