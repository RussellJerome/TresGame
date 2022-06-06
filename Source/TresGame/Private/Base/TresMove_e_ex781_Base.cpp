#include "TresMove_e_ex781_Base.h"

UTresMove_e_ex781_Base::UTresMove_e_ex781_Base() {
    this->m_bEnableOverrideBodyCollReactionType = false;
    this->m_OverrideBodyCollReactionType = ETresBodyCollReactionType::TRES_BODY_RT_GUARD;
    this->m_EndWarp = false;
    this->m_ForwardRunLoopTime = 0.00f;
}

