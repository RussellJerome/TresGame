#include "TresPatternActor_e_dw407b_PillarLight.h"
#include "Components/SplineComponent.h"
#include "Components/SceneComponent.h"

ATresPatternActor_e_dw407b_PillarLight::ATresPatternActor_e_dw407b_PillarLight() {
    this->m_bIsAimTarget = false;
    this->m_bHaveVariability = false;
    this->m_VariabilityMinTime = 0.30f;
    this->m_VariabilityMaxTime = 0.50f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

