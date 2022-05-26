#include "TresAttack_e_ex353_Base.h"

UTresAttack_e_ex353_Base::UTresAttack_e_ex353_Base() {
    this->m_BodyCollReactionType = ETresBodyCollReactionType::TRES_BODY_RT_NO_REACTION;
    this->m_bCanbeCancelAction = false;
    this->m_bSingleShotCancelToClearVelocity = true;
}

