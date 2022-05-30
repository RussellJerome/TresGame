#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDamageCommonParam.generated.h"

UCLASS(Abstract, Const)
class UTresDamageCommonParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_SmallDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SmallDamageBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SmallDamageStartFallingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirSmallDamageVelocityZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowDamageVelocityZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowDamageBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirBlowDamageVelocityZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirBlowDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirBlowDamageBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirBlowDamageStartBrakeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowDamageStartFallingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TossDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TossDamageFlightDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TossDamageFallGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaunchDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaunchDamageFlightDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaunchDamageFallGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeatDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeatDamageRebound;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeatDamageReboundGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MerrygoroundDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ParabolaDamagePower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ParabolaDamageAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ParabolaDamageBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ParabolaDamageLimitBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwirlUpPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwirlUpPowerRand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwirlUpFlightDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwirlUpFallGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatBurnMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatBurnGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatBurnJumpHeightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatBurnJumpHeightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VikingShipPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VikingShipTargetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VikingShipCorrectPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VikingShipBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VikingShipLimitBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatCloudInputLight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatCloudInputLightInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatCloudInputHeavy;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BadStatCloudInputHeavyInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GuardHitBackPowerLv1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GuardHitBackPowerLv2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GuardHitBackPowerLv3;
    
    UTresDamageCommonParam();
};

