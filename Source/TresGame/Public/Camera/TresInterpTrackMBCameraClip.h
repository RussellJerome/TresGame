#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackMove.h"
#include "TresInterpTrackMBCameraClip.generated.h"

class UTresMBCameraData;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackMBCameraClip : public UInterpTrackMove {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTresMBCameraData* m_CameraData;
    
    UPROPERTY(EditAnywhere)
    int32 m_ClipIndex;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableOffset;
    
    UPROPERTY(EditAnywhere)
    float m_FOVBias;
    
    UTresInterpTrackMBCameraClip();
};

