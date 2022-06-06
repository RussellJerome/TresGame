#include "TresBxCarActor.h"
#include "SQEXSEADZeroOneSeComponent.h"
#include "TresStaticMeshComponent.h"
#include "TresGimmickObstacleComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

ATresBxCarActor::ATresBxCarActor() {
    this->CarMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
    this->DriverStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("DriverStaticMeshComponent"));
    this->GimmickObstacle = CreateDefaultSubobject<UTresGimmickObstacleComponent>(TEXT("GimmickObstacleComponent"));
    this->InstancedStaticMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshComponent"));
    this->TyreType = ETresGimmickBxCarTyreType::Basic;
    this->ColorTextureIndex = -1;
    this->BrakeSound = NULL;
    this->CarTravelSeComponent = CreateDefaultSubobject<USQEXSEADZeroOneSeComponent>(TEXT("SQEXSEADZeroOneSeComponent"));
}

