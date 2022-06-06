#include "TresEnvQueryTest_IsTargetingContext.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_IsTargetingContext::UTresEnvQueryTest_IsTargetingContext() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

