#include "TresAIController.h"

class AActor;

void ATresAIController::SetMyTarget(AActor* inNewMyTarget) {
}

void ATresAIController::SetDestination(const FVector& inNewDestination) {
}

bool ATresAIController::IsElapsedTimeFromDamaged(float InTime, const AActor* InTarget) const {
    return false;
}

bool ATresAIController::IsActorRightSide(AActor* inOtherActor) const {
    return false;
}

float ATresAIController::GetVerticalDistanceToMyTarget(bool inCollision) const {
    return 0.0f;
}

float ATresAIController::GetVerticalDistanceToActor(AActor* inOtherActor, bool inCollision) const {
    return 0.0f;
}

AActor* ATresAIController::GetMyTarget() const {
    return NULL;
}

float ATresAIController::GetHorizontalDistanceToMyTarget(bool inCollision) const {
    return 0.0f;
}

float ATresAIController::GetHorizontalDistanceToActor(AActor* inOtherActor, bool inCollision) const {
    return 0.0f;
}

float ATresAIController::GetDistanceToMyTarget(bool inCollision) const {
    return 0.0f;
}

float ATresAIController::GetDistanceToActor(AActor* inOtherActor, bool inCollision) const {
    return 0.0f;
}

FVector ATresAIController::GetDestination() const {
    return FVector{};
}

int32 ATresAIController::GetCoopTeamMemberID() const {
    return 0;
}

int32 ATresAIController::GetCoopTeamID() const {
    return 0;
}

AActor* ATresAIController::FindMyTarget(bool inFindGimmick) {
    return NULL;
}

void ATresAIController::BP_SetHeadFocus(AActor* NewFocus) {
}

void ATresAIController::BP_SetHeadFocalPoint(FVector Fp) {
}

AActor* ATresAIController::BP_GetHeadFocusActor() const {
    return NULL;
}

FVector ATresAIController::BP_GetHeadFocalPoint() const {
    return FVector{};
}

void ATresAIController::BP_ClearHeadFocus() {
}

ATresAIController::ATresAIController() {
    this->m_CharInputType = TRES_CHAR_INPUT_AI;
}

