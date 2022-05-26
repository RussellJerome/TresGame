#include "TresProj_LaserTemplate.h"

ATresProj_LaserTemplate::ATresProj_LaserTemplate() {
    this->m_eEffectForward = X_FORWAED;
    this->m_fScaleTime = 0.00f;
    this->m_bIgnoreBodyCollision = true;
    this->m_bLifeOverIfTakeDamage = false;
}

