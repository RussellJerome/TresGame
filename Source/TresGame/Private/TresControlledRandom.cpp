#include "TresControlledRandom.h"

FTresControlledRandom::FTresControlledRandom() {
    this->Distribution = ETresRandomDistributionType::Uniform;
    this->Period = 0.00f;
}

