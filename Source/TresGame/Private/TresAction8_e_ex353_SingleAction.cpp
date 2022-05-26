#include "TresAction8_e_ex353_SingleAction.h"

UTresAction8_e_ex353_SingleAction::UTresAction8_e_ex353_SingleAction() {
    this->m_BodyCollReactionType = ETresBodyCollReactionType::TRES_BODY_RT_NO_REACTION;
    this->m_AnimData = NULL;
    this->m_FloatSpeedData = NULL;
    this->m_bHorizontalTurn = true;
    this->m_bClearVelocity = true;
    this->m_bWaitAIAbortTiming = false;
}

