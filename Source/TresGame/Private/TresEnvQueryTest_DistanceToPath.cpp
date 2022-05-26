#include "TresEnvQueryTest_DistanceToPath.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_DistanceToPath::UTresEnvQueryTest_DistanceToPath() {
    this->PathStart = UEnvQueryContext_Querier::StaticClass();
    this->PathEnd = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}

