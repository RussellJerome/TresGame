#include "TresFriendLinkPawnJackSpin.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void ATresFriendLinkPawnJackSpin::OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATresFriendLinkPawnJackSpin::OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATresFriendLinkPawnJackSpin::ATresFriendLinkPawnJackSpin() {
    this->m_Camera = NULL;
    this->m_FinishAnimeProjectile = NULL;
    this->m_JackSpinProj = NULL;
    this->m_FinishProjectile = NULL;
    this->m_BomeAtkProjectile = NULL;
    this->m_fTargetMaxLength = 1000.00f;
    this->m_fTargetMinLength = 0.00f;
    this->m_fTargetYawRange = 45.00f;
    this->m_Param_CamTargetOfsZ = 150.00f;
    this->m_Param_CamDistanceNormal = 500.00f;
    this->m_Param_CamDistanceLeftRight = 600.00f;
    this->m_Param_CamTurningPower = 1.20f;
    this->m_fYawSpeed = 200.00f;
    this->m_fOffsetHigh = 100.00f;
    this->m_fBoundMinZ = 10.00f;
    this->m_fBoundSpeed = 300.00f;
    this->m_bAttackJumpMoveXY = false;
    this->m_bAttackJumpMoveZ = false;
    this->m_fyRootCollChangeTime = 0.40f;
    this->m_fAttackFloatWaitTime = 0.40f;
    this->m_fAttackMoveWaitTime = 0.00f;
    this->m_fAttackMoveMinSpeed = 200.00f;
    this->m_fAttackMoveMaxSpeed = 3000.00f;
    this->m_fAttackMoveReduceSpeed = 70.00f;
    this->m_bAttackMoveHoming = true;
    this->m_bAttackMoveZHoming = true;
    this->m_GoalDistance = 100.00f;
    this->m_fAttackFloatInitSpeed = 1.00f;
    this->m_fAttackFloatSpeed = 0.10f;
    this->m_fAttackFloatTime = 0.20f;
    this->m_fGravity = 0.40f;
    this->m_fLastFloatWaitTime = 0.40f;
    this->m_fLastAtkFloatInitSpeed = 0.10f;
    this->m_fLastAtkFloatSpeed = 0.05f;
    this->m_fLastAtkFloatTime = 2.50f;
    this->m_bIsAttackSpinControl = true;
    this->m_fAttackmotReduceSpeed = 0.03f;
    this->m_fAttackmotMinSpeed = 0.20f;
    this->m_fAttackEndJumpMotTime = 0.20f;
    this->m_MoveBrake = 0.98f;
    this->m_AttackMoveDir = 40.00f;
    this->MySuctionWindComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SuctionWindCollision0"));
    this->m_WindForce = 0.00f;
    this->m_NotWindRange = 0.00f;
}

