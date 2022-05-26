#include "TresAnimNode_AnimSetEvaluator.h"

FTresAnimNode_AnimSetEvaluator::FTresAnimNode_AnimSetEvaluator() {
    this->m_ExplicitTime = 0.00f;
    this->m_X = 0.00f;
    this->m_Y = 0.00f;
    this->m_Z = 0.00f;
    this->m_Sequence = NULL;
    this->m_BlendSpace = NULL;
    this->m_Instance = NULL;
}

