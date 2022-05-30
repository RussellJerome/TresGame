#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackKHSBlendVolumeControl.generated.h"

class ATresKHSBlendVolume;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackKHSBlendVolumeControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<ATresKHSBlendVolume> m_KHSBlendVolume;
    
    UTresInterpTrackKHSBlendVolumeControl();
};

