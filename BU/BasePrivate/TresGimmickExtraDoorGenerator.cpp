#include "TresGimmickExtraDoorGenerator.h"
#include "Components/SkeletalMeshComponent.h"
#include "TresInstancedStaticMeshComponent.h"

class USplineComponent;
class UStaticMesh;

void ATresGimmickExtraDoorGenerator::Setup(USplineComponent* SplineComponent, UStaticMesh* StaticMesh, int32 Num) {
}

void ATresGimmickExtraDoorGenerator::SetMoveType(ETresMI_04_DoorGeneratorMoveType Type) {
}

FVector ATresGimmickExtraDoorGenerator::GetAnotherMeshLocation() {
    return FVector{};
}

void ATresGimmickExtraDoorGenerator::ChangeDoor(FVector pos, bool Enable) {
}


ATresGimmickExtraDoorGenerator::ATresGimmickExtraDoorGenerator() {
    this->InstancedStaticMeshComponent = CreateDefaultSubobject<UTresInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshComponent"));
    this->m_SplineComponent = NULL;
    this->m_StaticMesh = NULL;
    this->MoveSpeed = 1000.00f;
    this->AnotherMesh = NULL;
    this->AnotherMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AnotherMeshComponent"));
    this->MoveType = ETresMI_04_DoorGeneratorMoveType::Lv0;
}

