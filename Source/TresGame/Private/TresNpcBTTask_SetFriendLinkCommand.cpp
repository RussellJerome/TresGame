#include "TresNpcBTTask_SetFriendLinkCommand.h"

UTresNpcBTTask_SetFriendLinkCommand::UTresNpcBTTask_SetFriendLinkCommand() {
    this->m_CommandSet = true;
    this->m_CommandKind = TRES_CMD_KIND_NONE;
    this->m_ReceptionTime = 20.00f;
    this->m_CommandAuto = true;
}

