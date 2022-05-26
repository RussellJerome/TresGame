#include "TresPoleActor.h"
#include "TresPoleComponent.h"

void ATresPoleActor::SetEnable(bool bEnable) {
}

bool ATresPoleActor::IsEnable() const {
    return false;
}

ATresPoleActor::ATresPoleActor() {
    this->MyRoot = CreateDefaultSubobject<UTresPoleComponent>(TEXT("TresRoot"));
}

