#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackMorphControlKey.h"
#include "TresInterpTrackMorphControl.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackMorphControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackMorphControlKey> m_Keys;
    
    UTresInterpTrackMorphControl();
};

