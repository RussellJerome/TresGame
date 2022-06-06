#include "TresNpcMetaAI.h"

class ATresNpcAILeadSplineActor;
class AActor;

bool UTresNpcMetaAI::StartPrecedeMovement(ETresChrUniqueID InApplyChrID, AActor* InDestination, float InGridSize, float InSpaceBetween) {
    return false;
}

void UTresNpcMetaAI::StartNpcMode(ETresChrUniqueID InApplyChrID, ETresFNpcAINpcMode InNpcMode, FName InCancelEventName) {
}

void UTresNpcMetaAI::StartLead(FName InLeadID, ETresChrUniqueID InApplyChrID, ATresNpcAILeadSplineActor* InLeadSplineActor, TArray<ETresChrUniqueID> InSubLeadCharaSlotList, FName InCancelEventName) {
}

void UTresNpcMetaAI::GetLeadWayPointList(TArray<FVector>& outResult, const AActor* inSourceActor) {
}

void UTresNpcMetaAI::CancelPrecedeMovement(ETresChrUniqueID InApplyChrID) {
}

void UTresNpcMetaAI::CancelNpcMode(ETresChrUniqueID InApplyChrID) {
}

void UTresNpcMetaAI::CancelLead(ETresChrUniqueID InApplyChrID) {
}

void UTresNpcMetaAI::CancelAIModeAll(ETresChrUniqueID InApplyChrID) {
}

UTresNpcMetaAI::UTresNpcMetaAI() {
}

