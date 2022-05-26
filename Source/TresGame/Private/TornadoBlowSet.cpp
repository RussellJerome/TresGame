#include "TornadoBlowSet.h"

FTornadoBlowSet::FTornadoBlowSet() {
    this->fMaxStartDistance = 0.00f;
    this->fEndDistance = 0.00f;
    this->fBlowTime = 0.00f;
    this->fEndHeight = 0.00f;
    this->bForceEndHeight = false;
    this->bSetFloatingMode = false;
    this->bBlowToDebrisOwnerDir = false;
}

