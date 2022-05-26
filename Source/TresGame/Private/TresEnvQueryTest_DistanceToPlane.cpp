#include "TresEnvQueryTest_DistanceToPlane.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_DistanceToPlane::UTresEnvQueryTest_DistanceToPlane() {
    this->TestMode = EEnvTestDistance::Distance3D;
    this->BasePoint = UEnvQueryContext_Querier::StaticClass();
}

