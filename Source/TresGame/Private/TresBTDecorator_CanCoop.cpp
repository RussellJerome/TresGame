#include "TresBTDecorator_CanCoop.h"

UTresBTDecorator_CanCoop::UTresBTDecorator_CanCoop() {
    this->CoopDefinition = NULL;
    this->Role = ETresCanCoopJoinRole::Follower;
    this->bRecruitment = false;
    this->bUseBlackboard = false;
    this->bEditRecruitment = false;
}

