#include "TresStateQueueComponent.h"

UTresStateQueueComponent::UTresStateQueueComponent() {
    this->MyStateAsset = NULL;
    this->MyDisableAutoMainProc = false;
    this->MyIsSetDefaultState = false;
    this->MySetDefaultState = TSID_STATE_EMPTY;
    this->m_CinematicStateClass = NULL;
    this->m_pCurrentState = NULL;
}

