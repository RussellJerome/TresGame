#include "TresGumiShipEnemyMoveRouteSpline.h"
#include "Components/SplineComponent.h"

ATresGumiShipEnemyMoveRouteSpline::ATresGumiShipEnemyMoveRouteSpline() {
    this->m_pEnemyMoveRouteSpline = CreateDefaultSubobject<USplineComponent>(TEXT("spline"));
}

