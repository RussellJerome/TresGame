#include "TresRandomPlaceBase.h"
#include "TresSpawnActorManagerComponent.h"

void ATresRandomPlaceBase::spawn() {
}

void ATresRandomPlaceBase::DestroyAndSpawn() {
}


ATresRandomPlaceBase::ATresRandomPlaceBase() {
    this->GeneratedRule = NULL;
    this->SpawnActorManager = CreateDefaultSubobject<UTresSpawnActorManagerComponent>(TEXT("SpawnActorManager"));
}

