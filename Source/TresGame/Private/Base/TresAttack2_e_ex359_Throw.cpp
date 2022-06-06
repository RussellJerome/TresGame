#include "TresAttack2_e_ex359_Throw.h"

UTresAttack2_e_ex359_Throw::UTresAttack2_e_ex359_Throw() {
    this->m_ProjectileClass = NULL;
    this->m_Projectile = NULL;
    this->m_fMaxProjTargetPastDestroyTime = 0.00f;
    this->m_bDestroyProjOnPastTarget = false;
    this->m_fMinActionAbortTime = 0.00f;
    this->m_fActionAbortTimeAfterHit = 0.00f;
    this->m_bStartFromEnableChange = false;
    this->m_bStartFromEnableChangeOnFastMoveEnd = false;
}

