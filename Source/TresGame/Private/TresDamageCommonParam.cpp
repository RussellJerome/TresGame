#include "TresDamageCommonParam.h"

UTresDamageCommonParam::UTresDamageCommonParam() {
    this->m_SmallDamagePower = 450.00f;
    this->m_SmallDamageBrake = 0.95f;
    this->m_SmallDamageStartFallingSpeed = 100.00f;
    this->m_AirSmallDamageVelocityZ = 0.00f;
    this->m_BlowDamageVelocityZ = 125.00f;
    this->m_BlowDamagePower = 5000.00f;
    this->m_BlowDamageBrake = 0.85f;
    this->m_AirBlowDamageVelocityZ = 125.00f;
    this->m_AirBlowDamagePower = 2000.00f;
    this->m_AirBlowDamageBrake = 0.85f;
    this->m_AirBlowDamageStartBrakeTime = 0.00f;
    this->m_BlowDamageStartFallingSpeed = 100.00f;
    this->m_TossDamagePower = 1500.00f;
    this->m_TossDamageFlightDuration = 1.00f;
    this->m_TossDamageFallGravityScale = 1.00f;
    this->m_LaunchDamagePower = 0.00f;
    this->m_LaunchDamageFlightDuration = 0.00f;
    this->m_LaunchDamageFallGravityScale = 0.00f;
    this->m_BeatDamagePower = 1500.00f;
    this->m_BeatDamageRebound = 1500.00f;
    this->m_BeatDamageReboundGravityScale = 3.00f;
    this->m_MerrygoroundDamagePower = 700.00f;
    this->m_ParabolaDamagePower = 1500.00f;
    this->m_ParabolaDamageAngle = 45.00f;
    this->m_ParabolaDamageBrake = 0.98f;
    this->m_ParabolaDamageLimitBrake = 300.00f;
    this->m_SwirlUpPower = 1300.00f;
    this->m_SwirlUpPowerRand = 0.00f;
    this->m_SwirlUpFlightDuration = 1.00f;
    this->m_SwirlUpFallGravityScale = 1.00f;
    this->m_BadStatBurnMoveSpeed = 480.00f;
    this->m_BadStatBurnGravityScale = 5.00f;
    this->m_BadStatBurnJumpHeightMax = 350.00f;
    this->m_BadStatBurnJumpHeightMin = 50.00f;
    this->m_VikingShipPower = 1500.00f;
    this->m_VikingShipTargetHeight = 300.00f;
    this->m_VikingShipCorrectPower = 1.00f;
    this->m_VikingShipBrake = 0.98f;
    this->m_VikingShipLimitBrake = 300.00f;
    this->m_BadStatCloudInputLight = 0.50f;
    this->m_BadStatCloudInputLightInterval = 2.00f;
    this->m_BadStatCloudInputHeavy = 0.20f;
    this->m_BadStatCloudInputHeavyInterval = 0.40f;
    this->m_GuardHitBackPowerLv1 = 300.00f;
    this->m_GuardHitBackPowerLv2 = 1000.00f;
    this->m_GuardHitBackPowerLv3 = 3000.00f;
}

