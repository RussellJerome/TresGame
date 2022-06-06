#include "TresEnvQueryTest_OverlapContext.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_OverlapContext::UTresEnvQueryTest_OverlapContext() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

