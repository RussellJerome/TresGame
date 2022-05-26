#include "TresCoopManager.h"

class AActor;
class ATresAIPawnBase;

bool UTresCoopManager::IsValidMemberID(int32 TeamID, int32 MemberID) const {
    return false;
}

int32 UTresCoopManager::GetMaxMemberID(int32 TeamID) const {
    return 0;
}

void UTresCoopManager::GetLocationsForFormation(TArray<FVector>& outResult, AActor* inQuerier) const {
}

void UTresCoopManager::GetDestinations(TArray<FVector>& outResult, AActor* inQuerier) const {
}

ATresAIPawnBase* UTresCoopManager::GetAIPawnBase(int32 TeamID, int32 MemberID) const {
    return NULL;
}

void UTresCoopManager::GetActors(TArray<AActor*>& outResult, AActor* inQuerier) const {
}

void UTresCoopManager::Abort(int32 TeamID, int32 MemberID) {
}

UTresCoopManager::UTresCoopManager() {
}

