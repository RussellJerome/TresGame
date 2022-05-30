#include "TresActor_e_ex773_Descent.h"
#include "Components/CapsuleComponent.h"

ATresActor_e_ex773_Descent::ATresActor_e_ex773_Descent() {
    this->m_ForceRateCurve = NULL;
    this->MyDescentComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DescentCollision0"));
    this->m_DescentSplineClass = NULL;
}

