#include "TresDictionaryCharacterData.h"

FTresDictionaryCharacterData::FTresDictionaryCharacterData() {
    this->WorldCode = TRES_WCID_EX;
    this->UIPriority = 0;
    this->KeyItemID = ETresItemDefKeyItem::NOTHING;
    this->KHSWorldType = SQEX_CPP_KHS_WORLD_DEFAULT;
    this->Version = ETresUIDataVersion::None;
}

