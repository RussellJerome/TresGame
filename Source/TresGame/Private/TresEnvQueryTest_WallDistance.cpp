#include "TresEnvQueryTest_WallDistance.h"
#include "Navigation/NavFilter_AIControllerDefault.h"

UTresEnvQueryTest_WallDistance::UTresEnvQueryTest_WallDistance() {
    this->MaxDistance = 1000.00f;
    this->NavigationFilter = UNavFilter_AIControllerDefault::StaticClass();
}

