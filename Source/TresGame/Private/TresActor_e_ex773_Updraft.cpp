#include "TresActor_e_ex773_Updraft.h"
#include "Components/CapsuleComponent.h"

ATresActor_e_ex773_Updraft::ATresActor_e_ex773_Updraft() {
    this->m_ForceRateCurve = NULL;
    this->m_Projectile = NULL;
    this->MyUpdraftComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("UpdraftCollision0"));
    this->m_UpdraftSplineClass = NULL;
}

