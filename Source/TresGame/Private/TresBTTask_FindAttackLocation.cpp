#include "TresBTTask_FindAttackLocation.h"

UTresBTTask_FindAttackLocation::UTresBTTask_FindAttackLocation() {
    this->AttackDefinitionOverride = NULL;
    this->bUseBlackboardQuery = true;
    this->RunMode = EEnvQueryRunMode::SingleResult;
}

