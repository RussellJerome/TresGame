#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstKHSBlendVolumeControl.generated.h"

class ATresKHSBlendVolume;

UCLASS()
class TRESGAME_API UTresInterpTrackInstKHSBlendVolumeControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresKHSBlendVolume* m_KHSBlendVolume;
    
    UPROPERTY()
    TArray<ATresKHSBlendVolume*> m_KHSBlendVolumes;
    
    UTresInterpTrackInstKHSBlendVolumeControl();
};

