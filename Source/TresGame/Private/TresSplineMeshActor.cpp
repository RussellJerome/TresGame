#include "TresSplineMeshActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineMeshComponent.h"

ATresSplineMeshActor::ATresSplineMeshActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SplineMeshComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMesh"));
}

