#include "TresLinkActor_e_ex202_Entry.h"
#include "Components/SplineComponent.h"

float ATresLinkActor_e_ex202_Entry::GetRadius() const {
    return 0.0f;
}

float ATresLinkActor_e_ex202_Entry::GetAngle() const {
    return 0.0f;
}

bool ATresLinkActor_e_ex202_Entry::CanUse() const {
    return false;
}

ATresLinkActor_e_ex202_Entry::ATresLinkActor_e_ex202_Entry() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->m_Radius = 200.00f;
    this->m_Angle = 360.00f;
}

