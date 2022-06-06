#include "TresLevelEntitySequenceConditionalAction.h"

FTresLevelEntitySequenceConditionalAction::FTresLevelEntitySequenceConditionalAction() {
    this->m_Condition = NULL;
    this->m_Action = NULL;
    this->m_Abandonable = false;
    this->m_AbandonCondition = NULL;
}

