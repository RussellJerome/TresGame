#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerBaseMovementParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseMovementParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMinOfSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxOfSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedOfPitchUp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedOfPitchDown;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedOfYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedOfRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCoolDownTimeOfBoost;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDurationOfBoost;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fScaleOfBoost;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLimitOfPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedOfAutoHorizontalCorrection;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraDepthLagDestDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraDepthLagAccSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraDepthLagDecSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCameraDepthLagScale;
    
    TRESGAME_API FTresGumiShipPlayerBaseMovementParameter();
};

