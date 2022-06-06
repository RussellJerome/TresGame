#include "TresGameHelpDataTable.h"

FTresGameHelpDataTable::FTresGameHelpDataTable() {
    this->ID = ETresGameHelp::Help_00100;
    this->Category = ETresGameHelpCategory::None;
    this->UIPriority = 0;
    this->Version = ETresUIDataVersion::None;
    this->WinImageUseKeyboardMouse = false;
    this->WinKeyboardHighlights = false;
}

