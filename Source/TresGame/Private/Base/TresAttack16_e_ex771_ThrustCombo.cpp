#include "TresAttack16_e_ex771_ThrustCombo.h"

UTresAttack16_e_ex771_ThrustCombo::UTresAttack16_e_ex771_ThrustCombo() {
    this->m_pro_FirstMoveSpeed = 5000.00f;
    this->m_pro_FirstMoveDist = 2000.00f;
    this->m_pro_FirstHomingSpeedYaw = 360.00f;
    this->m_pro_FirstHomingSpeedPitch = 360.00f;
    this->m_pro_FirstHomingDist = 500.00f;
    this->m_FirstWarpEQSQuery = NULL;
    this->m_pro_SecondWarpInTime = 0.15f;
    this->m_pro_SecondXXWarpInTime = 0.15f;
    this->m_pro_SecondMoveSpeed = 10000.00f;
    this->m_pro_SecondMoveDist = 2000.00f;
    this->m_pro_SecondHomingSpeedYaw = 360.00f;
    this->m_pro_SecondHomingSpeedPitch = 360.00f;
    this->m_pro_SecondHomingDist = 500.00f;
    this->m_pro_FinishWarpInTime = 0.15f;
    this->m_pro_FinishMoveSpeed = 5000.00f;
    this->m_pro_FinishMoveDist = 2000.00f;
    this->m_pro_FinishTgtDist = 300.00f;
    this->m_pro_FinishHomingSpeedYaw = 360.00f;
    this->m_pro_FinishHomingSpeedPitch = 360.00f;
    this->m_pro_FinishHomingDist = 500.00f;
    this->m_FinishWarpEQSQuery = NULL;
    this->m_pro_bDisableLockon = false;
}

