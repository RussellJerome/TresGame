#include "TresFRSnowCoverSwingTree.h"
#include "TresAtkCollComponent.h"

ATresFRSnowCoverSwingTree::ATresFRSnowCoverSwingTree() {
    this->m_NavModifierVolumeBP = NULL;
    this->MyAtkColl = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresAtkColl0"));
}

