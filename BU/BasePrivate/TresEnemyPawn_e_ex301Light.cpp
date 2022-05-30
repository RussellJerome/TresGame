#include "TresEnemyPawn_e_ex301Light.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/PointLightComponent.h"

ATresEnemyPawn_e_ex301Light::ATresEnemyPawn_e_ex301Light() {
    this->MyDirectionalLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("MyDirectionalLight"));
    this->MyPointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MyPointLight"));
    this->m_DirectionalIntensity = 500.00f;
    this->m_PointLightIntensity = 3000.00f;
    this->m_AllLightIntensity = 1.00f;
}

