#include "TresGumiShipRailSlideManager.h"

class ATresGumiShipPlayerControllerBase;

bool UTresGumiShipRailSlideManager::IsTracking() const {
    return false;
}

bool UTresGumiShipRailSlideManager::IsSpTracking() const {
    return false;
}

bool UTresGumiShipRailSlideManager::IsRouteRailSliding() const {
    return false;
}

bool UTresGumiShipRailSlideManager::IsRailSliding() const {
    return false;
}

void UTresGumiShipRailSlideManager::_OnReraisePlayer() {
}

void UTresGumiShipRailSlideManager::_OnFinishedRailSlideSub() {
}

void UTresGumiShipRailSlideManager::_OnFinishedRailSlideCoolDown() {
}

void UTresGumiShipRailSlideManager::_OnFinishedRailSlideByEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData) {
}

void UTresGumiShipRailSlideManager::_OnDeadPlayer() {
}

void UTresGumiShipRailSlideManager::_OnCheckCancelRailSlide(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController) {
}

UTresGumiShipRailSlideManager::UTresGumiShipRailSlideManager() {
}

