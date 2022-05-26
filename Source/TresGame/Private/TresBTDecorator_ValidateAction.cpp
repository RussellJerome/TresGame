#include "TresBTDecorator_ValidateAction.h"

UTresBTDecorator_ValidateAction::UTresBTDecorator_ValidateAction() {
    this->ActionDefinitionOverride = NULL;
    this->bUseBlackboardQuery = true;
    this->bValidateLocation = true;
    this->bValidateOrientation = true;
    this->bValidateExecution = true;
}

