#pragma once
#include "CoreMinimal.h"
#include "ESQEX_ScreenFadeLayer.h"
#include "ETresFadeTrack_TheaterMode.h"
#include "Matinee/InterpTrackFade.h"
#include "TresInterpTrackFadeKey.h"
#include "TresInterpTrackFade.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFade : public UInterpTrackFade {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFadeTrack_TheaterMode> m_TheaterMode;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackFadeKey> m_Keys;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_ScreenFadeLayer> m_FadeLayer;
    
    UTresInterpTrackFade();
};

