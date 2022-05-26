#include "TresAICoordinator.h"
#include "TresNpcMetaAI.h"
#include "TresBattlePlayerEmotionManager.h"

class UObject;
class ATresAICoordinator;
class AActor;
class UTresCoopManager;

bool ATresAICoordinator::IsSelected() const {
    return false;
}

ATresAICoordinator* ATresAICoordinator::GetTresAICoordinator(UObject* WorldContext) {
    return NULL;
}

void ATresAICoordinator::GetTargetableActorsWithAffiliation(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const {
}

int32 ATresAICoordinator::GetPositionalRankingNotDuplicate(const AActor* inSourceActor, const AActor* inTargetedActor) const {
    return 0;
}

int32 ATresAICoordinator::GetPositionalRanking(const AActor* inSourceActor, const AActor* inTargetedActor) const {
    return 0;
}

void ATresAICoordinator::GetPlayerFaction(TArray<AActor*>& outResult) const {
}

void ATresAICoordinator::GetNeutralFaction(TArray<AActor*>& outResult) const {
}

int32 ATresAICoordinator::GetMemberCountWithAffiliation(const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, bool IncludingReserve) const {
    return 0;
}

UTresNpcMetaAI* ATresAICoordinator::GetFriendNpcMetaAI() const {
    return NULL;
}

FLinearColor ATresAICoordinator::GetFactionColor(AActor* InTarget) const {
    return FLinearColor{};
}

void ATresAICoordinator::GetEnemyFaction(TArray<AActor*>& outResult) const {
}

void ATresAICoordinator::GetDestinationsWithAffiliation(TArray<FVector>& outResult, AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const {
}

UTresCoopManager* ATresAICoordinator::GetCoopManager() const {
    return NULL;
}

UTresBattlePlayerEmotionManager* ATresAICoordinator::GetBattlePlayerEmotionManager() const {
    return NULL;
}

FLinearColor ATresAICoordinator::GetAttackGroupColor(AActor* inAttacker) const {
    return FLinearColor{};
}

float ATresAICoordinator::GetAssigmentCooldownRemainingTicket(const AActor* inTargetedActor, FGameplayTag AttackerGroup) {
    return 0.0f;
}

float ATresAICoordinator::GetAssigmentCooldownRemaining(const AActor* inTargetedActor, FGameplayTag AttackerGroup) {
    return 0.0f;
}

void ATresAICoordinator::GetAlliesInAttackGroup(TArray<AActor*>& outResult, const AActor* inSourceActor, FGameplayTag AttackerGroup) const {
}

void ATresAICoordinator::GetActorsWithTeamID(TArray<AActor*>& outResult, TEnumAsByte<ETresTeam::Type> inTeamID) const {
}

void ATresAICoordinator::GetActorsWithAffiliationAll(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const {
}

void ATresAICoordinator::GetActorsWithAffiliation(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const {
}

void ATresAICoordinator::BP_AssignAttackers(TArray<AActor*> inSourceActors) {
}

ATresAICoordinator::ATresAICoordinator() {
    this->PostAttackerAssignedCooldown = NULL;
    this->PostTargetAttackedCooldown = NULL;
    this->EnableDebugDraw = false;
    this->EnableCoopDebugDraw = false;
    this->FriendNpcMetaAIClass = UTresNpcMetaAI::StaticClass();
    this->BattlePlayerEmotionManagerClass = UTresBattlePlayerEmotionManager::StaticClass();
    this->m_CoopManager = NULL;
    this->m_FriendNpcMetaAI = NULL;
    this->m_BattlePlayerEmotionManager = NULL;
    this->GoalRankingQuery = NULL;
}

