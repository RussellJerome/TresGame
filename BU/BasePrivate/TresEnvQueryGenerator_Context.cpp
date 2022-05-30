#include "TresEnvQueryGenerator_Context.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UTresEnvQueryGenerator_Context::UTresEnvQueryGenerator_Context() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->ContextItemType = UEnvQueryItemType_Point::StaticClass();
}

