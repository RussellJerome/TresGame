#include "TresBTDecorator_TeamMemberCount.h"

UTresBTDecorator_TeamMemberCount::UTresBTDecorator_TeamMemberCount() {
    this->m_team = ETeamAttitude::Hostile;
    this->ArithmeticOperation = EArithmeticKeyOperation::Equal;
    this->m_memberCount = 0;
}

