#include "TresEnvQueryTest_ActorOverlap.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_ActorOverlap::UTresEnvQueryTest_ActorOverlap() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->bAddQuerierRadius = true;
    this->bUseGimmickObstacle = false;
}

