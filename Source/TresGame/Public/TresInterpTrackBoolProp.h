#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackBoolProp.h"
#include "ETresPropertyTrackTermnation.h"
#include "TresInterpTrackBoolProp.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackBoolProp : public UInterpTrackBoolProp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackBoolProp();
};

