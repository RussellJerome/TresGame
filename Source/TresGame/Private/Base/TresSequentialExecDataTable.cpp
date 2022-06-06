#include "TresSequentialExecDataTable.h"

FTresSequentialExecDataTable::FTresSequentialExecDataTable() {
    this->m_taskMode = SEQUENTIAL_EXEC_TASK_MODE::None;
    this->m_skipSequence = 0;
    this->m_QueryInstance = NULL;
    this->m_bQueryFirstRun = false;
    this->m_TimeLimit = 0.00f;
    this->m_RunMode = EEnvQueryRunMode::SingleResult;
    this->m_UpdateTime = 0.00f;
    this->m_UpdateTimeRandomDeviation = 0.00f;
    this->m_LocomotionDefinition = NULL;
    this->m_AcceptanceRadius = 0.00f;
    this->m_AvoidanceWeight = 0.00f;
    this->m_bPreciseArrival = false;
    this->m_bFastAbort = false;
    this->m_bFailOnDamageReaction = false;
}

