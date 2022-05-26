#include "TresDictionaryEnemyData.h"

FTresDictionaryEnemyData::FTresDictionaryEnemyData() {
    this->Category = ETresUIDictionaryEnemyCategory::Heartless;
    this->UIPriority = 0;
    this->bHideKillCount = false;
    this->MainEnemyID = ETresEnemyUniqueID::TRES_ENEMY_UID_UNKNOWN;
    this->KHSWorldType = SQEX_CPP_KHS_WORLD_DEFAULT;
    this->Version = ETresUIDataVersion::None;
}

