#include "TresNpcPawn_n_ra201_RollHair.h"
#include "TresSkeletalMeshComponent.h"

ATresNpcPawn_n_ra201_RollHair::ATresNpcPawn_n_ra201_RollHair() {
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresPawnRollHairSkeletalMesh0"));
}

