#include "TresAttack1_e_ex325_SonicImpact.h"

UTresAttack1_e_ex325_SonicImpact::UTresAttack1_e_ex325_SonicImpact() {
    this->m_OneceAttack = false;
    this->m_CancelAttack = false;
    this->m_InitMoveSpeed = 100.00f;
    this->m_CancelBrakeMoveSpeed = 1000.00f;
    this->m_AtkEndBrakeMoveSpeed = 5000.00f;
    this->m_EndClearVelocity = false;
    this->m_CancelARotateSpeed = 0.30f;
    this->m_AttackCollisionIntervalTime = 0.00f;
    this->m_WallReflectionLimitRotation = 30.00f;
    this->m_AtkHitSEAsset = NULL;
    this->TurnToVelRotation = 0.40f;
}

