#include "TresEnvQueryTest_Targeting.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_Targeting::UTresEnvQueryTest_Targeting() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->bPlayerTargetingCheck = false;
}

