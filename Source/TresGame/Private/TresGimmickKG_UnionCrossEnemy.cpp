#include "TresGimmickKG_UnionCrossEnemy.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

class ATresGimmickKG_UnionCrossRide;

void ATresGimmickKG_UnionCrossEnemy::SetUnionCross(ATresGimmickKG_UnionCrossRide* NewUnionCross) {
}

void ATresGimmickKG_UnionCrossEnemy::NotifyHitPlayer() {
}

bool ATresGimmickKG_UnionCrossEnemy::IsDead() const {
    return false;
}

float ATresGimmickKG_UnionCrossEnemy::GetProgressLength() const {
    return 0.0f;
}

float ATresGimmickKG_UnionCrossEnemy::GetMoveTimeCount() const {
    return 0.0f;
}

int32 ATresGimmickKG_UnionCrossEnemy::GetFixedPlayerDamage() const {
    return 0;
}

FRotator ATresGimmickKG_UnionCrossEnemy::GetDirRotationToTarget() const {
    return FRotator{};
}

void ATresGimmickKG_UnionCrossEnemy::EmitterUpdate(float DeltaTime) {
}

void ATresGimmickKG_UnionCrossEnemy::DestroyEnemy() {
}

bool ATresGimmickKG_UnionCrossEnemy::CanHitToPlayer() const {
    return false;
}

FVector ATresGimmickKG_UnionCrossEnemy::CalcOffsetLocation_Implementation() const {
    return FVector{};
}

void ATresGimmickKG_UnionCrossEnemy::AddDamageData(float WaitTime, float Damage, bool LazerDamage) {
}

ATresGimmickKG_UnionCrossEnemy::ATresGimmickKG_UnionCrossEnemy() {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MySceneComponent"));
    this->MyParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MyParticleComponent"));
    this->MoveSpeed = 2500.00f;
    this->TargetOffsetSize = 0.00f;
    this->EnemySize = 20.00f;
    this->MaxHP = 50.00f;
    this->DamageMoveSpeedRatio = 0.50f;
    this->DamageSlowTime = 1.00f;
    this->UpdateProgressThreshold = 5000.00f;
    this->PlayerDamage = 1;
    this->PlayerDamageIntervalTime = 0.00f;
    this->DestroyEffect = NULL;
    this->OffsetLocationMinParam = 0.00f;
    this->HitEffect = NULL;
    this->BlowParam = 0.30f;
    this->MoveMode = EGimmickKG_UnionCrossEnemy_MoveMode::Progress;
    this->HitSheld = true;
    this->NoDamage = false;
    this->ShieldHitInterval = 1.00f;
}

