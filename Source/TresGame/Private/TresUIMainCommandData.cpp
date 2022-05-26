#include "TresUIMainCommandData.h"

FTresUIMainCommandData::FTresUIMainCommandData() {
    this->m_CommandKind = TRES_CMD_KIND_NONE;
    this->m_CommandExKind = ETresUIHudCommandExKind::None;
    this->m_TitleKind = ETresUIMainCommandTitleKind::None;
}

