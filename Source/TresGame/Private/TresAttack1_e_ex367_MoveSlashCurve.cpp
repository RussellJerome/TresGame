#include "TresAttack1_e_ex367_MoveSlashCurve.h"

UTresAttack1_e_ex367_MoveSlashCurve::UTresAttack1_e_ex367_MoveSlashCurve() {
    this->m_PramMoveSlashType = TRES_ENEMY_EX367_MOVESLASH1;
    this->m_InitSpeed = 2500.00f;
    this->m_AccelSpeed = 2500.00f;
    this->m_MaxSpeed = 2500.00f;
    this->m_MoveTimeMin = 0.50f;
    this->m_MoveScaleCurve = NULL;
    this->m_AttackStartRot = 0.00f;
    this->m_DirectMoveDist = 500.00f;
    this->m_IsDamagedTeleportMode = true;
    this->m_StrongAttack = false;
    this->m_UseSwordWave = false;
    this->m_SlashEffectGroupID = 0;
    this->m_SlashRotOffset = 0.00f;
    this->m_MoveWide = 500.00f;
    this->m_MoveToTargetAddWide = 20.00f;
    this->m_OffsetZ = 0.00f;
    this->m_OffsetDist = 0.00f;
    this->m_AttackStartTime = 0.10f;
    this->m_WavePitchOffset = 0.00f;
}

