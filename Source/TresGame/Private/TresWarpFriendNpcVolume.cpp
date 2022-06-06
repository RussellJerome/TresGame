#include "TresWarpFriendNpcVolume.h"

ATresWarpFriendNpcVolume::ATresWarpFriendNpcVolume() {
    this->m_bVolumeOutEnd = true;
    this->m_bUsedWarpPoint = false;
    this->m_DelayTime = 0.00f;
    this->m_WarpPointData.AddDefaulted(6);
    this->m_IntervalTime = 0.00f;
}

