#include "TresEnvQueryTest_CanExecute.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTresEnvQueryTest_CanExecute::UTresEnvQueryTest_CanExecute() {
    this->Target = UEnvQueryContext_Querier::StaticClass();
}

