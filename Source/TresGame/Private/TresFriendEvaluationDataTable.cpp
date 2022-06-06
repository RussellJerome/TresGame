#include "TresFriendEvaluationDataTable.h"

FTresFriendEvaluationDataTable::FTresFriendEvaluationDataTable() {
    this->m_CommandKind = TRES_CMD_KIND_NONE;
    this->m_BadStatEvaluation = 0;
    this->m_HitPointEvaluation = 0;
    this->m_MagicPointEvaluation = 0;
    this->m_FocusPointEvaluation = 0;
    this->m_AllCharaEvaluation = 0;
    this->m_SpecialCure = false;
    this->m_RecoveryPoint = 0;
}

