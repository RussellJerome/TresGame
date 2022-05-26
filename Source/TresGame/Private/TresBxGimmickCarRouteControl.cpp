#include "TresBxGimmickCarRouteControl.h"
#include "Components/SceneComponent.h"

bool ATresBxGimmickCarRouteControl::IsOwnedByCar() const {
    return false;
}

ATresBxGimmickCarRouteControl::ATresBxGimmickCarRouteControl() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CollisionRadius = 100.00f;
}

