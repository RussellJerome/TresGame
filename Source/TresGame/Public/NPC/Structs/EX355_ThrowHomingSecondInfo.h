#pragma once
#include "CoreMinimal.h"
#include "EX355_ThrowHomingSecondInfo.generated.h"

USTRUCT()
struct FEX355_ThrowHomingSecondInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitHomingRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingRotateAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingAngleIgnoreTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableGrabityOnDisablingHomingToLandTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGravityScale;
    
    TRESGAME_API FEX355_ThrowHomingSecondInfo();
};

