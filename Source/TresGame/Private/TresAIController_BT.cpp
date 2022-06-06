#include "TresAIController_BT.h"

bool ATresAIController_BT::SetAttackPermissionTicket(FGameplayTag RequiredAttackGroup, bool bCheckOnly) {
    return false;
}

bool ATresAIController_BT::SetAttackPermission(FGameplayTag RequiredAttackGroup) {
    return false;
}

void ATresAIController_BT::ResetAttackPermissionTicket() {
}

void ATresAIController_BT::ResetAttackPermission() {
}

bool ATresAIController_BT::HasAttackPermissionTicket() {
    return false;
}

bool ATresAIController_BT::HasAttackPermission() {
    return false;
}

float ATresAIController_BT::GetTimeSinceAIStarted() const {
    return 0.0f;
}

FGameplayTag ATresAIController_BT::GetCurrentAttackPermissionTicket() {
    return FGameplayTag{};
}

FGameplayTag ATresAIController_BT::GetCurrentAttackPermission() {
    return FGameplayTag{};
}

ATresAIController_BT::ATresAIController_BT() {
}

