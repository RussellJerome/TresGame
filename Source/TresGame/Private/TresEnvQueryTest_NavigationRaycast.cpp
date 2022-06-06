#include "TresEnvQueryTest_NavigationRaycast.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_NavigationRaycast::UTresEnvQueryTest_NavigationRaycast() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}

