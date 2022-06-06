#include "TresWinniePuzzlePoohController.h"

UTresWinniePuzzlePoohController::UTresWinniePuzzlePoohController() {
    this->HoneypotRef = NULL;
    this->IdlePlayTimesToChangeToHungryState = 0;
    this->EatingHoneyPlayTimesToChangeToEatEnd = 0;
    this->HoneypotMovementRateToChangeToEatHoneyState = 0.00f;
    this->m_pHoneypot = NULL;
}

