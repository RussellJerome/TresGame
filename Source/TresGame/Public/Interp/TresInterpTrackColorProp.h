#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackColorProp.h"
#include "ETresPropertyTrackTermnation.h"
#include "TresInterpTrackColorProp.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackColorProp : public UInterpTrackColorProp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackColorProp();
};

