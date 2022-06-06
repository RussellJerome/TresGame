#include "TresEnvQueryTest_PlayerIsVehicleMode.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_PlayerIsVehicleMode::UTresEnvQueryTest_PlayerIsVehicleMode() {
    this->TargetActorContext = UEnvQueryContext_Querier::StaticClass();
}

