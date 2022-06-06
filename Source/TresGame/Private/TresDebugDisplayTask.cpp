#include "TresDebugDisplayTask.h"
#include "Templates/SubclassOf.h"

class UTresTaskExecutor;
class UTresDebugTask;

UTresTaskExecutor* UTresDebugDisplayTask::GetTresTaskExecutor() {
    return NULL;
}

TArray<FString> UTresDebugDisplayTask::GetArgs() {
    return TArray<FString>();
}

float UTresDebugDisplayTask::GetAppScale() {
    return 0.0f;
}

void UTresDebugDisplayTask::CreateDebugTask(TSubclassOf<UTresDebugTask> Class, UTresDebugTask*& Out) {
}

UTresDebugDisplayTask::UTresDebugDisplayTask() {
    this->InputManaer = NULL;
    this->m_pTaskExecuter = NULL;
}

