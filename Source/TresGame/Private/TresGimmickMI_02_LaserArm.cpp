#include "TresGimmickMI_02_LaserArm.h"
#include "TresProjectileGenComponent.h"
#include "Components/SceneComponent.h"




void ATresGimmickMI_02_LaserArm::BP_SetArmLockAngle(ETresGimmickMI_02_LaserArmActionType Type, float Angle) {
}

void ATresGimmickMI_02_LaserArm::BP_SetActionType(ETresGimmickMI_02_LaserArmActionType Type) {
}

void ATresGimmickMI_02_LaserArm::BP_SetActionParamMinMax(ETresGimmickMI_02_LaserArmActionType Type, float Min, float Max) {
}

float ATresGimmickMI_02_LaserArm::BP_GetArmUpDownValue() const {
    return 0.0f;
}

float ATresGimmickMI_02_LaserArm::BP_GetArmRotationValue() const {
    return 0.0f;
}

ATresGimmickMI_02_LaserArm::ATresGimmickMI_02_LaserArm() {
    this->m_EffectLaserComponent = NULL;
    this->m_EffectLaserChargeComponent = NULL;
    this->m_EffectLaserHitComponent = NULL;
    this->m_EffectLaserOverHeatComponent = NULL;
    this->m_HitActor = NULL;
    this->m_OldHitActor = NULL;
    this->MyProjectile = CreateDefaultSubobject<UTresProjectileGenComponent>(TEXT("TresProjectile0"));
    this->WorkTarget = CreateDefaultSubobject<USceneComponent>(TEXT("WorkTarget0"));
    this->m_ArmActionType = ETresGimmickMI_02_LaserArmActionType::BarricadeY;
    this->m_ActionParams.AddDefaulted(3);
    this->m_DestroyRotateSpeed = 10.00f;
    this->m_DestroyUpDownSpeed = 10.00f;
    this->m_ArmBarricadeYLockAngle = 0.00f;
    this->m_ArmBarricadeXLockHeight = 0.60f;
    this->m_TargetSpline = NULL;
    this->m_ArmUpDownTargetSceneComp = NULL;
    this->m_ArmUpDownInterpCurve = NULL;
    this->m_ArmUpDownAngleMin = -100.00f;
    this->m_ArmUpDownAngleMax = 90.00f;
    this->m_ArmSpeedScale = 1.00f;
    this->m_ArmReturnWaitTime = 0.25f;
    this->m_LaserMaxLength = 2000.00f;
    this->m_LaserDamageInterval = 1.50f;
    this->m_LaserThickness = 150.00f;
    this->m_LaserProjectile = NULL;
    this->m_bEnableLaserLOD = true;
    this->m_LaserMaxLOD = 2;
    this->m_LaserMaxLODRange = 1500.00f;
    this->m_LaserLODBias = 2.00f;
    this->m_Effect_Laser = NULL;
    this->m_Effect_LaserCharge = NULL;
    this->m_Effect_LaserHit = NULL;
    this->m_Effect_LaserOverHeat = NULL;
}

