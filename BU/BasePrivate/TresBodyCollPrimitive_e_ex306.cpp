#include "TresBodyCollPrimitive_e_ex306.h"

ETresBodyCollReactionType UTresBodyCollPrimitive_e_ex306::GetDefaultBodyReactionType() {
    return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

ETresBodyCollReactionType UTresBodyCollPrimitive_e_ex306::GetBodyReactionType_Normal() {
    return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

ETresBodyCollReactionType UTresBodyCollPrimitive_e_ex306::GetBodyReactionType_BB() {
    return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

UTresBodyCollPrimitive_e_ex306::UTresBodyCollPrimitive_e_ex306() {
    this->m_BodyReactionType_BB = ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

