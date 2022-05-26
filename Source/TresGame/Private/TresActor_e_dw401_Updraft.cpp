#include "TresActor_e_dw401_Updraft.h"
#include "Components/CapsuleComponent.h"

ATresActor_e_dw401_Updraft::ATresActor_e_dw401_Updraft() {
    this->MyUpdraftComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("UpdraftCollision0"));
    this->m_UpdraftSplineClass = NULL;
}

