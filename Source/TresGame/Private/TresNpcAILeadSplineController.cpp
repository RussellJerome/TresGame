#include "TresNpcAILeadSplineController.h"

class AActor;
class ATresNpcAILeadSplineActor;
class ATresNpcPawnBase;

void UTresNpcAILeadSplineController::SetLeadSub(int32 InIndex, AActor* InLeader, ATresNpcAILeadSplineActor* InLeadSplineActor, FName InLeadID) {
}

void UTresNpcAILeadSplineController::SetLeadSplineActor(AActor* InLeadSplineActor, FName InLeadID, FName InCancelEventName) {
}

void UTresNpcAILeadSplineController::OnLeadSubFinishFunc(FName ID) {
}

void UTresNpcAILeadSplineController::OnLeadSubEndFunc(FName ID) {
}

bool UTresNpcAILeadSplineController::IsLeadSub() const {
    return false;
}

bool UTresNpcAILeadSplineController::IsLeaderWaiting() const {
    return false;
}

bool UTresNpcAILeadSplineController::HasLeadSplineActor() const {
    return false;
}

FVector UTresNpcAILeadSplineController::GetLeadSubOffset() const {
    return FVector{};
}

ATresNpcAILeadSplineActor* UTresNpcAILeadSplineController::GetLeadSplineActorGoal() const {
    return NULL;
}

ATresNpcAILeadSplineActor* UTresNpcAILeadSplineController::GetLeadSplineActor() const {
    return NULL;
}

ATresNpcPawnBase* UTresNpcAILeadSplineController::GetLeadLeader() const {
    return NULL;
}

FName UTresNpcAILeadSplineController::GetLeadID() const {
    return NAME_None;
}

FVector UTresNpcAILeadSplineController::GetCharaClosestLocation() const {
    return FVector{};
}

FRotator UTresNpcAILeadSplineController::GetBaseWayPointRotation() const {
    return FRotator{};
}

FVector UTresNpcAILeadSplineController::GetBaseWayPoint() const {
    return FVector{};
}

void UTresNpcAILeadSplineController::Cancel() {
}

UTresNpcAILeadSplineController::UTresNpcAILeadSplineController() {
}

