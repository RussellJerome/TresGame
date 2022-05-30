#include "TresMove_e_ex359_FastMove.h"

UTresMove_e_ex359_FastMove::UTresMove_e_ex359_FastMove() {
    this->m_fWarpDisappearTime = 0.00f;
    this->m_fMaxMoveTime = 0.00f;
    this->m_VelocityType = EEX359_SplineMoveVelocityType_Constant;
    this->m_fVelocityExp = 1.00f;
    this->m_EQS_Move = NULL;
    this->m_bKeepRelativeLocationBetweenDestinationAndTarget = false;
    this->m_bKeepRelativeLocationOnlyTargetDamage = true;
    this->m_bForRevenge = false;
    this->m_fRayStartHeightOffset = 100.00f;
    this->m_fRayLength = 3000.00f;
    this->m_fWallAvoidMargin = 200.00f;
}

