#include "EX354_CreateArmWarpInfo.h"

FEX354_CreateArmWarpInfo::FEX354_CreateArmWarpInfo() {
    this->m_ArmWarpType = ETresEnemy_e_ex354_ArmWarpType::Random;
    this->m_PosType = ETresEnemy_e_ex354_ArmWarpPos::Target;
    this->m_DirType = EEX354_ArmSpawnDirType::EEX355_ArmSpawnDirType_Owner;
    this->m_fDistance = 0.00f;
    this->m_fPitch = 0.00f;
    this->m_fYaw = 0.00f;
    this->m_bPitchAdjustToCamera = false;
    this->m_fPitchAdjustToCamera_MaxPitchDiff = 0.00f;
    this->m_bReverseCameraPitch = false;
    this->m_fPitchAdjustToCamera_MaxPitch = 0.00f;
    this->m_fPitchAdjustToCamera_MinPitch = 0.00f;
    this->m_bPitchAdjustToCamera_DebugDisp = false;
    this->m_SpawnPosAdjustType = EEX354_ArmSpawnPosAdjustType::EEX354_ArmSpawnPosAdjustType_Pos;
    this->m_SpawnPosAdjustMaxAngle = 0.00f;
    this->m_fTargetVelocityAdjust_MaxVelocity = 0.00f;
    this->m_fTargetVelocityAdjustRate = 0.00f;
    this->m_bTargetVelocityAdjustDirectional = false;
    this->m_fTargetVelocityAdjustDirectionalYaw = 0.00f;
    this->m_fTargetVelocityAdjustDirectionalYawWidth = 0.00f;
    this->m_fTargetVelocityAdjustDirectionalScale = 0.00f;
    this->m_fMinHeight = 0.00f;
    this->m_AimDirType = EEX354_ArmAimDirType::EEX354_ArmAimDirType_ToTarget;
    this->m_fTargetVelocityRotAdjust_MaxVelocity = 0.00f;
    this->m_fTargetVelocityRotAdjustRate = 0.00f;
    this->m_fTargetVelocityRotAdjust_MaxPitch = 0.00f;
    this->m_fTargetVelocityRotAdjust_MaxYaw = 0.00f;
}

