#include "TresProjectile_e_ex773_Eclipse13.h"
#include "TresBodyCollPrimitive.h"


ATresProjectile_e_ex773_Eclipse13::ATresProjectile_e_ex773_Eclipse13() {
    this->NotifyBuildNavTime = 3.00f;
    this->CircleScaleSpeed = 1.00f;
    this->BaseShellSpeed = 2000.00f;
    this->MapObjHitSize = 500.00f;
    this->TresBodyCollPrimitive = CreateDefaultSubobject<UTresBodyCollPrimitive>(TEXT("TresBodyCollPrimitive"));
}

