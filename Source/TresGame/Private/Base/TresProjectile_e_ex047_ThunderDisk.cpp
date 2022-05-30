#include "TresProjectile_e_ex047_ThunderDisk.h"

ATresProjectile_e_ex047_ThunderDisk::ATresProjectile_e_ex047_ThunderDisk() {
    this->m_RotationSpeedMin = 600.00f;
    this->m_RotationSpeedMax = 2000.00f;
    this->m_MoveSpeedMin = 0.00f;
    this->m_MoveSpeedMax = 0.00f;
    this->m_IsAroundWait = false;
    this->m_HorminStartWaitTime = 0.50f;
    this->m_HomingFinishDist = 500.00f;
    this->m_HomingMaxAngle = 0.00f;
    this->m_HomingTurnMax = 0.00f;
}

