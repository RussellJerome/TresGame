#include "TresRaAudienceActor.h"

ATresRaAudienceActor::ATresRaAudienceActor() {
    this->m_IdleAnimName = TEXT("idleN");
    this->m_BodyColType = 0;
    this->m_PoseGroupType = 0;
    this->m_ReactionType = -1;
    this->m_bDisableBodyCollision = true;
}

