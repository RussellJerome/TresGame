#include "TresGimmickMover.h"
#include "TresRootComponent.h"

ATresGimmickMover::ATresGimmickMover() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->m_bIsRotation = false;
    this->m_bIsRailSlideMove = false;
    this->m_bIsRailForwardDir = false;
    this->m_RailSlideSpeed = 400.00f;
    this->bIsRailSlideMoveStarted = false;
    this->bIsRailSlideMove = false;
    this->bIsRailSlideReverse = false;
    this->MyRailSlideActor = NULL;
    this->MyRailSlideComponent = NULL;
    this->MyRailSlideSpeed = 0.00f;
    this->MyRailSlideCurrentDistance = 0.00f;
    this->MyRailSlideMovePrevCurveLength = 0.00f;
}

