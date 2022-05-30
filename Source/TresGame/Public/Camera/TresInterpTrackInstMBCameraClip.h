#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInstMove.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackInstMBCameraClip.generated.h"

UCLASS()
class UTresInterpTrackInstMBCameraClip : public UInterpTrackInstMove {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool m_Cached;
    
    UPROPERTY(Transient)
    float m_CachedTime;
    
    UPROPERTY(Transient)
    FMatrix m_CachedMatrix;
    
    UPROPERTY(Transient)
    float m_CachedRoll;
    
    UPROPERTY(Transient)
    float m_CachedFOV;
    
    UPROPERTY(Transient)
    int32 m_CachedClip;
    
    UTresInterpTrackInstMBCameraClip();
};

