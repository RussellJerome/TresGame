#include "TresBTService_FindAttackLocation.h"

UTresBTService_FindAttackLocation::UTresBTService_FindAttackLocation() {
    this->AttackDefinitionOverride = NULL;
    this->bUseBlackboardQuery = true;
    this->RunMode = EEnvQueryRunMode::SingleResult;
}

