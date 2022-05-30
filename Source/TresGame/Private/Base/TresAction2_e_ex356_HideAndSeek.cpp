#include "TresAction2_e_ex356_HideAndSeek.h"

UTresAction2_e_ex356_HideAndSeek::UTresAction2_e_ex356_HideAndSeek() {
    this->m_StunEndTime = 5.00f;
    this->m_OverrideAutoLockonRange = 900.00f;
    this->m_FailedTimeGageDamage = 1.00f;
    this->m_ExplodeCardAttackHitTimeGaugeDamage = 1.00f;
    this->m_ShuffleGatherRadius = 300.00f;
    this->m_ShuffleGatherLoopTime = 1.00f;
    this->m_ShuffleGatherMoveSpeed = 1200.00f;
    this->m_ShuffleRandomRange = 1000.00f;
    this->m_ShuffleTime = 0.00f;
    this->m_ShuffleMoveSpeed = 0.00f;
    this->m_ShuffleTurnSpeed = 0.00f;
    this->m_ShuffleTargetLocationNum = 5;
    this->m_ShuffleTime2 = 0.00f;
    this->m_ShuffleMoveSpeed2 = 0.00f;
    this->m_ShuffleTurnSpeed2 = 0.00f;
    this->m_ShuffleTargetLocationNum2 = 5;
    this->m_LoopTime = 0.00f;
    this->m_AllPlainCardDestroyAfterLoopTime = 8.00f;
    this->m_LuxordCardSubTurnSpeed = 0.00f;
    this->m_bEnableAllCardTurnToCameraLocation = true;
    this->m_ExplodeCardRate = 0.00f;
    this->m_PlainCardMax = 15;
    this->m_CardLocationDistance = 400.00f;
    this->m_CardLocationEnvQuery = NULL;
    this->m_bIsExplodeCardDistanceCheck = false;
    this->m_ExplodeCardExplodeDistance = 0.00f;
    this->m_ExplodeCardExplodeIntervalTime = 0.00f;
    this->m_ExplodeCardExplodeNum = 0;
    this->m_ExplodeCardTargetFollowSpeed = 2000.00f;
    this->m_ExplodeCardExplodeDelayTime = 0.50f;
}

