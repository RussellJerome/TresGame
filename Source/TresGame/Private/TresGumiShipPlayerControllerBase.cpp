#include "TresGumiShipPlayerControllerBase.h"
#include "TresGumiShipPlayerInputWorker.h"

void ATresGumiShipPlayerControllerBase::ToggleDebugSpeedInfoDraw() {
}

void ATresGumiShipPlayerControllerBase::ToggleDebugInputDraw() {
}

void ATresGumiShipPlayerControllerBase::ToggleDebugGMKeyConfigTest() {
}

void ATresGumiShipPlayerControllerBase::ToggleDebugChannelInputDraw() {
}

ATresGumiShipPlayerControllerBase::ATresGumiShipPlayerControllerBase() {
    this->m_pWorker = CreateDefaultSubobject<UTresGumiShipPlayerInputWorker>(TEXT("Worker"));
}

