#include "TresLevelEntitySequenceAction_Spawn.h"

UTresLevelEntitySequenceAction_Spawn::UTresLevelEntitySequenceAction_Spawn() {
    this->m_DelaySpawning = false;
    this->m_AppearInfoNo = -1;
    this->m_AppearInfoNoIncrement = true;
    this->m_UserDataNo = -1;
    this->m_UserDataNoIncrement = true;
    this->m_ResetAndSpawn = false;
    this->m_SkipDrawAttractionFlowMarker = false;
}

