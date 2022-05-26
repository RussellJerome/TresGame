#include "TresGumiShipEnemyGroupManager.h"

class ATresGumiShipEnemyPawnBase;

void UTresGumiShipEnemyGroupManager::SetSplineMoveSpeed(float Speed) {
}

void UTresGumiShipEnemyGroupManager::SetSplineMoveDeceleration(float Deceleration) {
}

void UTresGumiShipEnemyGroupManager::SetSplineMoveAcceleration(float Acceleration) {
}

void UTresGumiShipEnemyGroupManager::SetReverseSplineMove(bool bReverseMoveEnable) {
}

void UTresGumiShipEnemyGroupManager::SetMaxSplineMoveSpeed(float MaxSpeed) {
}

void UTresGumiShipEnemyGroupManager::SetLoopSplineMove(bool bLoopMoveEnable) {
}

void UTresGumiShipEnemyGroupManager::PauseSplineMove(bool bPauseEnable) {
}

bool UTresGumiShipEnemyGroupManager::IsReverseSplineMove() const {
    return false;
}

bool UTresGumiShipEnemyGroupManager::IsPauseSplineMove() const {
    return false;
}

bool UTresGumiShipEnemyGroupManager::IsLoopSplineMove() const {
    return false;
}

bool UTresGumiShipEnemyGroupManager::IsArrivedSplineEnd() const {
    return false;
}

float UTresGumiShipEnemyGroupManager::GetSplineMoveSpeed() const {
    return 0.0f;
}

float UTresGumiShipEnemyGroupManager::GetSplineMoveDeceleration() const {
    return 0.0f;
}

float UTresGumiShipEnemyGroupManager::GetSplineMoveAcceleration() const {
    return 0.0f;
}

float UTresGumiShipEnemyGroupManager::GetMaxSplineMoveSpeed() const {
    return 0.0f;
}

ATresGumiShipEnemyPawnBase* UTresGumiShipEnemyGroupManager::GetGroupMemberEnemyListTop() const {
    return NULL;
}

int32 UTresGumiShipEnemyGroupManager::GetCurrentMoveRouteSplineIndex() const {
    return 0;
}

bool UTresGumiShipEnemyGroupManager::ChangeEnemyGroupMoveRouteSpline(int32 NewMoveRouteSplineIndex) {
    return false;
}

void UTresGumiShipEnemyGroupManager::_OnSplinePathMoveEvent(ETresGumiShipSplineEventType eEventType) {
}

void UTresGumiShipEnemyGroupManager::_OnGroupMemberEnemyDead(ATresGumiShipEnemyPawnBase* pDeadEnemy) {
}

void UTresGumiShipEnemyGroupManager::_OnGroupMemberEnemyAppear(ATresGumiShipEnemyPawnBase* pAppearEnemy) {
}

UTresGumiShipEnemyGroupManager::UTresGumiShipEnemyGroupManager() {
}

