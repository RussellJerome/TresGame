#include "TresNpcBTTask_SetFriendTarget.h"

UTresNpcBTTask_SetFriendTarget::UTresNpcBTTask_SetFriendTarget() {
    this->m_ChrUniqueID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
    this->m_isTargetActor = true;
    this->m_isDestination = false;
}

