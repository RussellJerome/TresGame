#include "TresGimmickCA_RunAwayShipPawn.h"
#include "TresSkeletalMeshComponent.h"

void ATresGimmickCA_RunAwayShipPawn::SetTurnRate(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetStopMovement(bool Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetShotRandamMoveDirectionFactor(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetShotRandamLength(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetShotRandamDistanceFactor(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetShotInterval(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetOffsetShotDistance(FVector Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetNumProjectilePerFrame(int32 Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMinShotYaw(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMinShotPitchAngle(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMinShotDistance(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMinSafeAreaYaw(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMaxYawSpeed(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMaxShotYaw(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMaxShotPitchDistance(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMaxShotPitchAngle(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMaxShotDistance(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetMaxSafeAreaYaw(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetFade(FName ParamName, float fromValue, float toValue, float Time) {
}

void ATresGimmickCA_RunAwayShipPawn::SetDefaultVelocity(float Value) {
}

void ATresGimmickCA_RunAwayShipPawn::SetCurrentRestTimer(float Value) {
}

bool ATresGimmickCA_RunAwayShipPawn::IsStopMovement() const {
    return false;
}

float ATresGimmickCA_RunAwayShipPawn::GetYawToPlayer2D() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetTurnRate() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetShotRandamMoveDirectionFactor() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetShotRandamLength() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetShotRandamDistanceFactor() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetShotInterval() const {
    return 0.0f;
}

FVector ATresGimmickCA_RunAwayShipPawn::GetOffsetShotDistance() const {
    return FVector{};
}

int32 ATresGimmickCA_RunAwayShipPawn::GetNumProjectilePerFrame() const {
    return 0;
}

float ATresGimmickCA_RunAwayShipPawn::GetMinShotYaw() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMinShotPitchAngle() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMinShotDistance() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMinSafeAreaYaw() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMaxYawSpeed() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMaxShotYaw() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMaxShotPitchDistance() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMaxShotPitchAngle() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMaxShotDistance() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetMaxSafeAreaYaw() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetDistanceToPlayer2D() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetDefaultVelocity() const {
    return 0.0f;
}

float ATresGimmickCA_RunAwayShipPawn::GetCannonRestTimer() const {
    return 0.0f;
}

ATresGimmickCA_RunAwayShipPawn::ATresGimmickCA_RunAwayShipPawn() {
    this->m_MastMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("GimmickCA_RunAwayShipPawn_SkeletalMastMesh"));
}

