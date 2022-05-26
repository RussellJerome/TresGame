#include "TresEnvQueryTest_DirectionToPath.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_DirectionToPath::UTresEnvQueryTest_DirectionToPath() {
    this->PathStart = UEnvQueryContext_Querier::StaticClass();
    this->PathEnd = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->DirectionA = ETresContextPathDirectionMode::PathToContextRelativeDirection;
    this->DirectionB = ETresItemPathDirectionMode::PathToItemRelativeDirection;
    this->TestMode = EEnvTestDot::Dot3D;
    this->bAbsoluteValue = false;
}

