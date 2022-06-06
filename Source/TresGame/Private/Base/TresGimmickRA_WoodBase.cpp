#include "TresGimmickRA_WoodBase.h"
#include "TresPoleComponent.h"

ATresGimmickRA_WoodBase::ATresGimmickRA_WoodBase() {
    this->MyPole = CreateDefaultSubobject<UTresPoleComponent>(TEXT("TresPoleComp0"));
}

