#include "TresSpawnActorManagerComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class UTresChildActorComponent;

void UTresSpawnActorManagerComponent::SpawnFinalize() {
}

AActor* UTresSpawnActorManagerComponent::SpawnActor(TSubclassOf<AActor> Class, const FTransform& Transform, bool isStatic, UTresChildActorComponent*& retEditorOnlyChildComponent) {
    return NULL;
}

void UTresSpawnActorManagerComponent::DestroyActor() {
}

UTresSpawnActorManagerComponent::UTresSpawnActorManagerComponent() {
}

