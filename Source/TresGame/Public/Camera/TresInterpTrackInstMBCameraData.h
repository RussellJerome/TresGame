#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstMBCameraData.generated.h"

UCLASS()
class UTresInterpTrackInstMBCameraData : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 m_LastKey;
    
    UPROPERTY(Transient)
    int32 m_LastClip;
    
    UTresInterpTrackInstMBCameraData();
};

