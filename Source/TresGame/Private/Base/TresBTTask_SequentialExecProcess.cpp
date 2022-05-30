#include "TresBTTask_SequentialExecProcess.h"

UTresBTTask_SequentialExecProcess::UTresBTTask_SequentialExecProcess() {
    this->m_bViewNodeDetailed = false;
    this->m_bUseBlackboard = true;
    this->m_TargetSelectQueryInstance = NULL;
    this->m_pLogActor = NULL;
    this->m_pInterfaceLogActor = NULL;
    this->m_bWaitGetTarget = false;
    this->m_TableCount = 0;
}

