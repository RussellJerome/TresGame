#include "TresAttack1_e_ex367_MoveSlash.h"

UTresAttack1_e_ex367_MoveSlash::UTresAttack1_e_ex367_MoveSlash() {
    this->m_PramMoveSlashType = TRES_ENEMY_EX367_MOVESLASH1;
    this->m_InitSpeedZ = 0.00f;
    this->m_IsCheckHigh = true;
    this->m_OffsetTargetHigh = 0.00f;
    this->m_OffsetTargetHighKey = 2.00f;
    this->m_NotMoveZRange = 0.00f;
    this->m_InitSpeed = 1000.00f;
    this->m_AccelSpeed = 2000.00f;
    this->m_MaxSpeed = 4000.00f;
    this->m_MinSpeed = 300.00f;
    this->m_rRotationSpeed = 1.00f;
    this->m_BrakeDistance = 50.00f;
    this->m_BrakeSpeed = 7000.00f;
    this->m_IsHoldAtkDistance = true;
    this->m_HoldAtkDistance = 10.00f;
    this->m_MoveMaxTime = 3.00f;
    this->m_WarpTime = 0.00f;
    this->m_IsAttackCancel = false;
    this->m_IsDamagedTeleportMode = true;
    this->m_StrongAttack = false;
    this->m_UseSwordWave = true;
    this->m_WarpRange = 0.00f;
    this->m_IsMoveOnly = false;
    this->m_SlashEffectGroupID = 0;
    this->m_SlashRotOffset = -20.00f;
    this->m_WavePitchOffset = 0.00f;
}

