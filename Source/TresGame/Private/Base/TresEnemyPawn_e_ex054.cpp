#include "TresEnemyPawn_e_ex054.h"
#include "TresSkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"

void ATresEnemyPawn_e_ex054::OnChangeGimmickPause(bool bPause) {
}

bool ATresEnemyPawn_e_ex054::IsOnbuilding() {
    return false;
}

bool ATresEnemyPawn_e_ex054::IsJump() {
    return false;
}

bool ATresEnemyPawn_e_ex054::isBattleStyle(TEnumAsByte<ETresEnemy_e_ex054_BattleStyle> Style) {
    return false;
}

bool ATresEnemyPawn_e_ex054::IsArmorBreakStun() {
    return false;
}

FRotator ATresEnemyPawn_e_ex054::GetNeckAimOffsetRot() const {
    return FRotator{};
}

float ATresEnemyPawn_e_ex054::GetNeckAimOffsetAlpha() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex054::GetNeckAimOffset() const {
    return 0.0f;
}

float ATresEnemyPawn_e_ex054::GetAddMotionAlpha() {
    return 0.0f;
}

ATresEnemyPawn_e_ex054::ATresEnemyPawn_e_ex054() {
    this->m_EffDataAsset = NULL;
    this->m_VolcanoEff = NULL;
    this->m_pro_VolcanoEffData = NULL;
    this->m_AfroEff = NULL;
    this->m_pro_AfroHoudenSmcLightCurve = NULL;
    this->m_pro_BreathSmcLightCurve = NULL;
    this->MyCollMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCollMesh0"));
    this->MyBlowOffWindComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BlowOffWindCollision0"));
    this->m_pro_FireNum = 5;
    this->m_pro_FireDistMin = 2000.00f;
    this->m_pro_FireDistMax = 3000.00f;
    this->m_pro_FireAngle = 45.00f;
    this->m_pro_FireAngle2 = 8.00f;
    this->m_pro_FirePitchMin = 45.00f;
    this->m_pro_FirePitchMax = 55.00f;
    this->m_pro_GravityScaleMin = 3.00f;
    this->m_pro_GravityScaleMax = 5.00f;
    this->m_pro_AtkCollTime = 3.00f;
    this->m_pro_BurnOmenEffData = NULL;
}

