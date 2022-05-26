#include "TresMove2_e_ex042_Hook.h"

UTresMove2_e_ex042_Hook::UTresMove2_e_ex042_Hook() {
    this->m_fShotVelocity = 0.00f;
    this->m_fPullVelocity = 0.00f;
    this->m_fMinDistance = 0.00f;
    this->m_GoalType = Destination;
    this->m_fAnchorDestinationSearchMargin = 0.00f;
    this->m_fAnchorDestinationSearchDivision = 1;
    this->m_fMaxAngle = 45.00f;
    this->m_fMinAngle = 0.00f;
    this->m_bSkipEndMotion = false;
    this->m_SabelStompDefinition = NULL;
    this->m_fStompBeginHeight = 0.00f;
}

