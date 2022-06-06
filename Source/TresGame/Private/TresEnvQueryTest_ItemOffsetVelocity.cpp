#include "TresEnvQueryTest_ItemOffsetVelocity.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_ItemOffsetVelocity::UTresEnvQueryTest_ItemOffsetVelocity() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->bEnableUseMovedVelocity = true;
}

