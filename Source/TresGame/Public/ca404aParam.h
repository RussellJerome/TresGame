#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ca404aParam.generated.h"

USTRUCT(BlueprintType)
struct Fca404aParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_DefaultSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxYawSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxYawSpeedForOwnerRot;
    
    UPROPERTY(EditAnywhere)
    float m_YawSpeedAccelForOwnerRot;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_YawSpeedRange;
    
    UPROPERTY(EditAnywhere)
    float m_Acceleration;
    
    UPROPERTY(EditAnywhere)
    float m_FrictionAcceleration;
    
    UPROPERTY(EditAnywhere)
    float m_Brake;
    
    UPROPERTY(EditAnywhere)
    float m_StartDashTime;
    
    UPROPERTY(EditAnywhere)
    float m_StartDashAccel;
    
    UPROPERTY(EditAnywhere)
    float m_SlowDownTime;
    
    UPROPERTY(EditAnywhere)
    float m_SlowDownSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_DownSpeedPerDamage;
    
    UPROPERTY(EditAnywhere)
    float m_MinSpeedByDamage;
    
    UPROPERTY(EditAnywhere)
    float m_TakeDamageWaitTime;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_DownSpeedRecoveryTime;
    
    UPROPERTY(EditAnywhere)
    float m_DamegeOscPitchRoll;
    
    UPROPERTY(EditAnywhere)
    float m_DamegeOscTime;
    
    UPROPERTY(EditAnywhere)
    float m_OscRecoverySpeed;
    
    UPROPERTY(EditAnywhere)
    float m_OscMaxLaneOffset;
    
    UPROPERTY(EditAnywhere)
    float m_OscYawSpeedPerTorqu;
    
    UPROPERTY(EditAnywhere)
    float m_OscYawMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_OscYawMaxAngle;
    
    UPROPERTY(EditAnywhere)
    float m_OscYawSpeedBrake;
    
    UPROPERTY(EditAnywhere)
    float m_OscYawMinTime;
    
    TRESGAME_API Fca404aParam();
};

