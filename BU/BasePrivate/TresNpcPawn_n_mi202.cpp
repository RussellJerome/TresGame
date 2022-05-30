#include "TresNpcPawn_n_mi202.h"

bool ATresNpcPawn_n_mi202::IsMikeAppealOn() {
    return false;
}

ATresNpcPawn_n_mi202::ATresNpcPawn_n_mi202() {
    this->m_FRMikeBowlingBP = NULL;
    this->m_MikeMoveTime = 20.00f;
    this->m_MikeMoveSpeed = 1200.00f;
    this->m_MikeSpeedDownTime = 0.00f;
    this->m_MikeTurnMoveSpeed = 1200.00f;
    this->m_MikeTurnMinYaw = 0.00f;
    this->m_MikeAccelTime = 1.00f;
    this->m_MikeAccelSpeed = 200.00f;
    this->m_MikeStunTime = 3.00f;
    this->m_MikeStraightTime = 0.00f;
    this->m_IntervalTime = 0.40f;
    this->m_TargetLockTime = 0.80f;
    this->m_HomingSpeed = 400.00f;
    this->m_HomingMaxAngle = 60.00f;
    this->m_AddNormalTarget = false;
    this->m_IsLinkMode = false;
}

