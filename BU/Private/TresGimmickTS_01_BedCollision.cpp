#include "TresGimmickTS_01_BedCollision.h"
#include "Components/SceneComponent.h"
#include "TresStaticMeshComponent.h"

class UMaterialInterface;

void ATresGimmickTS_01_BedCollision::OnChangeBattleMode(bool bIsBattleMode) {
}

void ATresGimmickTS_01_BedCollision::BP_ChangeMaterialToMyMesh(int32 Index, UMaterialInterface* Material) {
}

ATresGimmickTS_01_BedCollision::ATresGimmickTS_01_BedCollision() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Scene0"));
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("Mesh0"));
    this->MyCollBound = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("CollBound0"));
    this->MyCollFlat = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("CollFlat0"));
    this->m_DynamicMaterialName = TEXT("BedDent_Switch");
}

