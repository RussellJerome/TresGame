#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresEffectTriggerTrackKey.h"
#include "TresInterpTrackEffectTrigger.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackEffectTrigger : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresEffectTriggerTrackKey> m_Keys;
    
    UTresInterpTrackEffectTrigger();
};

