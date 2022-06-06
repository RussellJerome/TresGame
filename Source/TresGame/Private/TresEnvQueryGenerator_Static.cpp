#include "TresEnvQueryGenerator_Static.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryGenerator_Static::UTresEnvQueryGenerator_Static() {
    this->center = UEnvQueryContext_Querier::StaticClass();
}

