#include "TresGimmick_Ts03_CraneObject.h"
#include "TresBodyCollComponent.h"

class ATresGimmick_Ts03_Crane;

void ATresGimmick_Ts03_CraneObject::SetParentCrane(ATresGimmick_Ts03_Crane* pParent) {
}

void ATresGimmick_Ts03_CraneObject::CraneRemoveCollisionShape(const FName InTagName, bool bUpdate) {
}

void ATresGimmick_Ts03_CraneObject::CraneAppendCollisionShape(const FName InTagName, FVector InSize, FVector InRelativeLocaiton, FRotator InRelativeRotation, bool bUpdate) {
}

ATresGimmick_Ts03_CraneObject::ATresGimmick_Ts03_CraneObject() {
    this->BodyCollComponent = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("BodyCollComponent"));
}

