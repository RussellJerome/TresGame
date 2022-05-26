#include "TresComNpcSkeletalMeshActor.h"
#include "TresSkeletalMeshComponent.h"

ATresComNpcSkeletalMeshActor::ATresComNpcSkeletalMeshActor() {
    this->m_fNearCameraRange = 0.00f;
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresComNpcMesh0"));
}

