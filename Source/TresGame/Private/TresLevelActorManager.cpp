#include "TresLevelActorManager.h"
#include "Components/SceneComponent.h"

ATresLevelActorManager::ATresLevelActorManager() {
    this->TresRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}

