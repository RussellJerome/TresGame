#include "TresPhotoHologramDecoration.h"
#include "TresStaticMeshComponent.h"

void ATresPhotoHologramDecoration::RequestRemoveHologram() {
}

ATresPhotoHologramDecoration::ATresPhotoHologramDecoration() {
    this->MyStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("MyStaticMesh"));
}

