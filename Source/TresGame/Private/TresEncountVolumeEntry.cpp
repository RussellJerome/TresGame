#include "TresEncountVolumeEntry.h"

FTresEncountVolumeEntry::FTresEncountVolumeEntry() {
    this->m_WorldOffsetZ = false;
    this->m_TryCount = 0;
    this->m_EscapeDistance = 0.00f;
    this->m_LotteryWeight = 0;
    this->m_bSkipNextTime = false;
    this->m_Troops = NULL;
}

