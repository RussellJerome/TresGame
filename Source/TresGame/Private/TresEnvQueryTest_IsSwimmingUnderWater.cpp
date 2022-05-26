#include "TresEnvQueryTest_IsSwimmingUnderWater.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_IsSwimmingUnderWater::UTresEnvQueryTest_IsSwimmingUnderWater() {
    this->bQuerierCheck = false;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

