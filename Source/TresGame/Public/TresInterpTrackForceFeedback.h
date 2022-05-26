#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "ETresFadeTrack_TheaterMode.h"
#include "TresInterpTrackForceFeedback.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackForceFeedback : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bAffectsLeftLarge;
    
    UPROPERTY(EditAnywhere)
    bool m_bAffectsLeftSmall;
    
    UPROPERTY(EditAnywhere)
    bool m_bAffectsRightLarge;
    
    UPROPERTY(EditAnywhere)
    bool m_bAffectsRightSmall;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFadeTrack_TheaterMode> m_TheaterMode;
    
    UTresInterpTrackForceFeedback();
};

