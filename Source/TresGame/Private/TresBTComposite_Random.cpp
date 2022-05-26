#include "TresBTComposite_Random.h"

UTresBTComposite_Random::UTresBTComposite_Random() {
    this->bFailOnAll = false;
    this->Distribution = ETresRandomDistributionType::Uniform;
    this->Randomness = ETresControlledRandomPeriod::PureRandom;
    this->bCustomPeriod = false;
    this->Period = -1.00f;
}

