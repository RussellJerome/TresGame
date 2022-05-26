#include "TresGimmickCA_Jellyfish.h"
#include "TresStaticMeshComponent.h"
#include "TresAtkCollComponent.h"
#include "Components/SceneComponent.h"



ATresGimmickCA_Jellyfish::ATresGimmickCA_Jellyfish() {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickCA_Jellyfish_StaticMesh"));
    this->MyAtkColl_Jelly = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresGimmickCA_Jellyfish_MyAtkColl"));
    this->MyCollBase = CreateDefaultSubobject<USceneComponent>(TEXT("TresGimmickCA_Jellyfish_MyCollBase"));
}

