#include "TresGenerateNavMesh.h"
#include "Components/BoxComponent.h"

ATresGenerateNavMesh::ATresGenerateNavMesh() {
    this->m_BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
}

