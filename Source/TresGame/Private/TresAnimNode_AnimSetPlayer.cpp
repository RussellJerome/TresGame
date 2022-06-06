#include "TresAnimNode_AnimSetPlayer.h"

FTresAnimNode_AnimSetPlayer::FTresAnimNode_AnimSetPlayer() {
    this->m_X = 0.00f;
    this->m_Y = 0.00f;
    this->m_Z = 0.00f;
    this->m_bLoopAnimation = false;
    this->m_PlayRate = 0.00f;
    this->m_GroupIndex = 0;
    this->m_GroupRole = EAnimGroupRole::CanBeLeader;
    this->m_Sequence = NULL;
    this->m_BlendSpace = NULL;
    this->m_Instance = NULL;
    this->m_InternalTimeAccumulator = 0.00f;
}

