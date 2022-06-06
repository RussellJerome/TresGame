#include "TresEnemyCommonParam.h"

UTresEnemyCommonParam::UTresEnemyCommonParam() {
    this->m_SmallDmgGravityScaleReinstateTime = 0.00f;
    this->m_BlowDmgWallHitSpeed = 50.00f;
    this->m_BlowDmgWallHitAngle = 30.00f;
    this->m_ReflectKnockBackPower = 550.00f;
    this->m_ReflectKnockBackBrake = 0.90f;
    this->m_ReflectKnockBackVelocityZ = 0.00f;
    this->m_AirReflectKnockBackPower = 550.00f;
    this->m_AirReflectKnockBackBrake = 0.90f;
    this->m_AirReflectKnockBackVelocityZ = 0.00f;
    this->m_pro_EnergyBurstAttractStZMaxMoveSpeed = 500.00f;
    this->m_pro_EnergyBurstAttractStRiseTime = 1.00f;
    this->m_pro_EnergyBurstAttractXYMaxMoveSpeed = 1500.00f;
    this->m_pro_EnergyBurstAttractZMaxMoveSpeed = 0.00f;
    this->m_pro_EnergyBurstAttractXYMoveMinRange = 200.00f;
    this->m_pro_EnergyBurstAttractXYMoveMaxRange = 800.00f;
    this->m_pro_EnergyBurstAttractZMoveMaxRange = 800.00f;
    this->m_pro_EnergyBurstAttractHeightOffset = 200.00f;
    this->m_pro_EnergyBurstAttractAirHeightOffset = 280.00f;
    this->m_pro_EnergyBurstAttractStZMoveSpeedRateCurve = NULL;
    this->m_pro_EnergyBurstAttractXYMoveSpeedRateCurve = NULL;
    this->m_pro_EnergyBurstAttractZMoveSpeedRateCurve = NULL;
    this->m_pro_EnergyBurstAttractBlowPowerScaleAddMin = 0.00f;
    this->m_pro_EnergyBurstAttractBlowPowerScaleAddMax = 0.00f;
    this->m_pro_AddReactionDisableTime = 0.00f;
    this->m_pro_SwirlUpEffData = NULL;
    this->m_pro_AIAttrResistLow = -1;
    this->m_pro_AIAttrResistNormal = 0;
    this->m_pro_AIAttrResistHigh = 99;
    this->m_pro_AIAttrResistInvalid = 100;
}

