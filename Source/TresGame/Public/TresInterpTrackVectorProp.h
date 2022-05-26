#pragma once
#include "CoreMinimal.h"
#include "ETresPropertyTrackTermnation.h"
#include "Matinee/InterpTrackVectorProp.h"
#include "TresInterpTrackVectorProp.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorProp : public UInterpTrackVectorProp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackVectorProp();
};

