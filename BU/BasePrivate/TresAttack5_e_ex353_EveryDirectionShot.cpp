#include "TresAttack5_e_ex353_EveryDirectionShot.h"

UTresAttack5_e_ex353_EveryDirectionShot::UTresAttack5_e_ex353_EveryDirectionShot() {
    this->m_LaserShotFireAsset = NULL;
    this->m_IgnoreGuardLaserShotFireAsset = NULL;
    this->m_AppearTime = 2.00f;
    this->m_AppearHeight = 500.00f;
    this->m_AnimStartTime = 0.00f;
    this->m_DelayTime = 0.00f;
    this->m_LoopTime = 5.00f;
    this->m_IntervalTime = 0.05f;
    this->m_MissIntervalTime = 0.20f;
    this->m_EraseNum = 0;
    this->m_MissEraseNum = 2;
    this->m_MissMinDist = 200.00f;
    this->m_MissMaxDist = 250.00f;
    this->m_ProjectileSpeed = 6000.00f;
    this->m_EveryDirectionShotWaitTime = 2.00f;
    this->m_ChooseNum = 1;
    this->m_MissChooseNum = 1;
    this->m_bIsUseFlushEffect = false;
    this->m_SpawnFlushTime = 5.00f;
    this->m_ChooseRadius = 300.00f;
    this->m_IgnoreGuardProjectileSpeed = 6000.00f;
    this->m_IgnoreGuardDelayTime = 0.00f;
}

