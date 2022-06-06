#include "TresEnemyPawn_e_ex357_Bit.h"
#include "Components/SceneComponent.h"

ATresEnemyPawn_e_ex357_Bit::ATresEnemyPawn_e_ex357_Bit() {
    this->MyMzlLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyMzlLocationComponent"));
    this->m_SignParticleSystem = NULL;
    this->m_ShotDelayTime = 0.00f;
    this->m_ProjectileClass = NULL;
    this->m_AppearParticleSystem = NULL;
    this->m_DieParticleSystem = NULL;
    this->m_MoveParticleSystem = NULL;
    this->m_WaitRotationSpeed = 180.00f;
    this->m_MoveRotationSpeed = 1080.00f;
    this->m_ShotKnockbackDistance = 0.00f;
    this->m_ShotKnockbackTime = 0.00f;
    this->m_ShotKnockbackPow = 1.00f;
    this->m_bEnableChangeManualLockonOtherBit = true;
}

