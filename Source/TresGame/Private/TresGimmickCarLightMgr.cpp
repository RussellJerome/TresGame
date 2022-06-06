#include "TresGimmickCarLightMgr.h"
#include "Components/SceneComponent.h"

ATresGimmickCarLightMgr::ATresGimmickCarLightMgr() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MgrRootComponent"));
    this->SpotLightComponents.AddDefaulted(16);
}

