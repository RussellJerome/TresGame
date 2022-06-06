#include "TresNpcAttackDefinitionMagic.h"

UTresNpcAttackDefinitionMagic::UTresNpcAttackDefinitionMagic() {
    this->m_AttackAnimData = NULL;
    this->m_CommandKind = TRES_CMD_KIND_FIRE;
    this->m_NumberOfAttacks = 1;
    this->m_FlyMagic = false;
    this->m_SwimMagic = false;
    this->m_LandPut = false;
}

