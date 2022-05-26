#include "TresEnvQueryTest_LineOfSightCheck.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_LineOfSightCheck::UTresEnvQueryTest_LineOfSightCheck() {
    this->TargetActorContext = UEnvQueryContext_Querier::StaticClass();
}

