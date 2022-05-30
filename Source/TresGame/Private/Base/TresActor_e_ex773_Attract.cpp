#include "TresActor_e_ex773_Attract.h"
#include "Components/CapsuleComponent.h"

ATresActor_e_ex773_Attract::ATresActor_e_ex773_Attract() {
    this->MyAttractComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AttractCollision0"));
    this->m_AttractSplineClass = NULL;
}

