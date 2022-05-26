#include "TresSkeletalMesh_e_ex721_Base.h"
#include "TresSkeletalMeshComponent.h"
#include "TresRootComponent.h"
#include "TresEffectAttachComponent.h"

ATresSkeletalMesh_e_ex721_Base::ATresSkeletalMesh_e_ex721_Base() {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCharMesh"));
    this->MyEffectAtt = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("TresEffectAttach"));
}

