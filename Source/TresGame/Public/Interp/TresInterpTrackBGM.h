#pragma once
#include "CoreMinimal.h"
#include "ETresFadeTrack_TheaterMode.h"
#include "SQEXSEADInterpTrackBGM.h"
#include "TresInterpTrackBGM.generated.h"

UCLASS(CollapseCategories)
class UTresInterpTrackBGM : public USQEXSEADInterpTrackBGM {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFadeTrack_TheaterMode> m_TheaterMode;
    
    UTresInterpTrackBGM();
};

