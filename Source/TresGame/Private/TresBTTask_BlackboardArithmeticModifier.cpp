#include "TresBTTask_BlackboardArithmeticModifier.h"

UTresBTTask_BlackboardArithmeticModifier::UTresBTTask_BlackboardArithmeticModifier() {
    this->ValueTypeB = ETresArithmeticModifierSource::LiteralValue;
    this->bUseBlackboardB = false;
    this->bUsePropertyOrFunctionB = false;
    this->bUseLiteralB = true;
    this->LiteralValueB = 0.00f;
}

