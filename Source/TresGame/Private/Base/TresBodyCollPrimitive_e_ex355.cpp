#include "TresBodyCollPrimitive_e_ex355.h"

ETresBodyCollReactionType UTresBodyCollPrimitive_e_ex355::GetDefaultBodyReactionType() {
    return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

ETresBodyCollReactionType UTresBodyCollPrimitive_e_ex355::GetBodyReactionType_Normal() {
    return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

ETresBodyCollReactionType UTresBodyCollPrimitive_e_ex355::GetBodyReactionType_BB() {
    return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

UTresBodyCollPrimitive_e_ex355::UTresBodyCollPrimitive_e_ex355() {
    this->m_BodyReactionType_BB = ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

