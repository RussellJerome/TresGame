#include "TresEnvQueryTest_DirectPath.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_DirectPath::UTresEnvQueryTest_DirectPath() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

