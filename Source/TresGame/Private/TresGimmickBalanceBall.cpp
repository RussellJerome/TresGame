#include "TresGimmickBalanceBall.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/CapsuleComponent.h"

class ATresCharPawnBase;
class UPrimitiveComponent;
class AActor;

void ATresGimmickBalanceBall::SetSensorEnable(bool Enable) {
}

void ATresGimmickBalanceBall::SetIgnoreLanding(bool InIgnore) {
}

void ATresGimmickBalanceBall::SetFadeParam_Implementation(float Param) {
}

void ATresGimmickBalanceBall::SetEmphasis(bool Enable) {
}

void ATresGimmickBalanceBall::SetCurrentAttackName(FName AttackName) {
}

bool ATresGimmickBalanceBall::SetCollisionEnable_Implementation(bool bEnable) {
    return false;
}

void ATresGimmickBalanceBall::SetAttachmentComp(USceneComponent* pAttachComp) {
}

void ATresGimmickBalanceBall::OnReflectBalanceBall_Implementation(const FHitResult& Impact) {
}

void ATresGimmickBalanceBall::OnEndSensorOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresGimmickBalanceBall::OnBeginSensorOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATresGimmickBalanceBall::NotifyChangeGimmickPause(bool bPause) {
}

void ATresGimmickBalanceBall::NotifyChangeGimmickActionImpl(bool bShow) {
}

void ATresGimmickBalanceBall::NotifyChangeBallSpeed_Implementation(const FVector& Speed, float fRatio) {
}

void ATresGimmickBalanceBall::NotifyChangeBallEntried_Implementation(bool Entry) {
}

USphereComponent* ATresGimmickBalanceBall::GetEntrySensorComponent_Implementation() {
    return NULL;
}

float ATresGimmickBalanceBall::GetBalanceBallSize() {
    return 0.0f;
}

void ATresGimmickBalanceBall::EndOverlap_Implementation(ATresCharPawnBase* pPawn) {
}

void ATresGimmickBalanceBall::BeginOverlap_Implementation(ATresCharPawnBase* pPawn) {
}

void ATresGimmickBalanceBall::BalanceBallRemoveCollisionShape(const FName InTagName, bool bUpdate) {
}

void ATresGimmickBalanceBall::BalanceBallAppendCollisionShape(const FName InTagName, FVector InSize, FVector InRelativeLocaiton, FRotator InRelativeRotation, bool bUpdate) {
}

ATresGimmickBalanceBall::ATresGimmickBalanceBall() {
    this->BallRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BallRootComp"));
    this->SignEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SignEffectComp"));
    this->TickSensor = CreateDefaultSubobject<USphereComponent>(TEXT("TickSensor"));
    this->BlockCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BlockSphere"));
    this->m_ParamSpeedDumping = 100.00f;
    this->m_ParamAccelSpeed = 1000.00f;
    this->m_ParamReflection = 0.80f;
    this->m_ParamBallSize = 1.00f;
    this->m_ParamMoveThreshold = 0.00f;
    this->m_CanbePushed = true;
    this->m_PawnPushPower = 20.00f;
    this->m_AttackPushPower = 100.00f;
    this->ReturnToInitialWhenCutScenes = false;
    this->m_CheckSpawnPoint = false;
}

