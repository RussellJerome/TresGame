#include "TresEnvQueryGenerator_SimpleGrid3D.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryGenerator_SimpleGrid3D::UTresEnvQueryGenerator_SimpleGrid3D() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

