#include "TresAction7_e_ex035_CarriageShoot.h"

UTresAction7_e_ex035_CarriageShoot::UTresAction7_e_ex035_CarriageShoot() {
    this->m_iMaxShotCount = 1;
    this->m_AnimDataList[0] = NULL;
    this->m_AnimDataList[1] = NULL;
    this->m_AnimDataList[2] = NULL;
    this->m_bBeginWithTurn = true;
    this->m_bAttachEndMotion = false;
    this->m_fEndMotionEnableGravityTime = 0.00f;
}

