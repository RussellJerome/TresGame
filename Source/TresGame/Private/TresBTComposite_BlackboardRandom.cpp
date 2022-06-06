#include "TresBTComposite_BlackboardRandom.h"

UTresBTComposite_BlackboardRandom::UTresBTComposite_BlackboardRandom() {
    this->bFailOnAll = false;
    this->Distribution = ETresRandomDistributionType::Uniform;
    this->Randomness = ETresControlledRandomPeriod::PureRandom;
    this->bCustomPeriod = false;
    this->Period = -1.00f;
}

