#include "TresLSIGameDriver.h"

FTresLSIGameDriver::FTresLSIGameDriver() {
    this->m_GameInstance = NULL;
    this->m_LSIGameMode = NULL;
    this->m_LSIGameActor = NULL;
    this->m_LSIGameCamera = NULL;
    this->m_LSIGamePlayerInput = NULL;
    this->m_LSIPostprocess = NULL;
    this->m_OriginalPC = NULL;
    this->m_OriginalViewTarget = NULL;
}

