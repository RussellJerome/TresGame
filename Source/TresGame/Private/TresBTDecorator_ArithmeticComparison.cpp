#include "TresBTDecorator_ArithmeticComparison.h"

UTresBTDecorator_ArithmeticComparison::UTresBTDecorator_ArithmeticComparison() {
    this->ValueTypeA = ETresArithmeticComparisonSource::Blackboard;
    this->bUseBlackboardA = true;
    this->bUsePropertyOrFunctionA = false;
    this->bUseLiteralA = false;
    this->LiteralValueA = 0.00f;
    this->ArithmeticOperation = EArithmeticKeyOperation::Equal;
    this->ValueTypeB = ETresArithmeticComparisonSource::LiteralValue;
    this->bUseBlackboardB = false;
    this->bUsePropertyOrFunctionB = false;
    this->bUseLiteralB = true;
    this->LiteralValueB = 0.00f;
}

