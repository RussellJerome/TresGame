#include "TresBTService_RunEQSQuery.h"

UTresBTService_RunEQSQuery::UTresBTService_RunEQSQuery() {
    this->EQSQueryOverride = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->bInvalidateBlackboardKeyOnFailure = false;
    this->bUseBlackboardQuery = true;
}

