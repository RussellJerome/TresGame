#include "TresNpcControllerBase.h"
#include "TresNpcAILeadSplineController.h"
#include "TresNpcAIBattleController.h"

class AActor;
class UBehaviorTree;
class ATresNpcAILeadSplineActor;
class UBlackboardComponent;

void ATresNpcControllerBase::StartNpcMode(ETresFNpcAINpcMode InNpcMode, FName InCancelEventName) {
}

void ATresNpcControllerBase::StartLeadSub(int32 InIndex, AActor* InLeader, ATresNpcAILeadSplineActor* InLeadSplineActor, FName InLeadID) {
}

void ATresNpcControllerBase::StartLead(AActor* InLeadSplineActor, FName InLeadID, FName InCancelEventName) {
}

void ATresNpcControllerBase::StartGimmickWaitAI() {
}

void ATresNpcControllerBase::SetNpcModeWalk(bool bWalk) {
}

bool ATresNpcControllerBase::RunBehaviorTree(UBehaviorTree* BTAsset) {
    return false;
}

void ATresNpcControllerBase::ResetCancelEventName() {
}

bool ATresNpcControllerBase::IsPlayerBeingAttackedByEnemy() const {
    return false;
}

bool ATresNpcControllerBase::IsNpcModeWalk() const {
    return false;
}

bool ATresNpcControllerBase::IsLeadSub() const {
    return false;
}

bool ATresNpcControllerBase::IsLeadMoveTypeToRun() const {
    return false;
}

bool ATresNpcControllerBase::IsLeadLeaderWaiting() const {
    return false;
}

bool ATresNpcControllerBase::IsLeadGoal() const {
    return false;
}

UTresNpcAILeadSplineController* ATresNpcControllerBase::GetLeadSplineController() const {
    return NULL;
}

ETresFNpcAINpcMode ATresNpcControllerBase::GetCurrentNpcModeType() const {
    return ETresFNpcAINpcMode::TRES_FNPC_AI_NPC_MODE_NONE;
}

UBlackboardComponent* ATresNpcControllerBase::GetBlackboardComponent() {
    return NULL;
}

UTresNpcAIBattleController* ATresNpcControllerBase::GetBattleController() const {
    return NULL;
}

void ATresNpcControllerBase::EndGimmickWaitAI() {
}

void ATresNpcControllerBase::DEBUG_SetNpcAIStyle_Battle(ETresFNpcAIStyle_Battle InNpcAIStyle_Battle) {
}

bool ATresNpcControllerBase::CanNpcMode() const {
    return false;
}

bool ATresNpcControllerBase::CanLeadWait() const {
    return false;
}

bool ATresNpcControllerBase::CanLead() const {
    return false;
}

void ATresNpcControllerBase::CancelNpcMode(bool bCallCancelEvent) {
}

void ATresNpcControllerBase::CancelLead() {
}

bool ATresNpcControllerBase::CanbeSwirlUpDamageReactionByEnemy() const {
    return false;
}

ATresNpcControllerBase::ATresNpcControllerBase() {
    this->m_ChrUniqueID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
    this->m_LeadSplineController = CreateDefaultSubobject<UTresNpcAILeadSplineController>(TEXT("LeadSplineController"));
    this->m_BattleController = CreateDefaultSubobject<UTresNpcAIBattleController>(TEXT("BattleController"));
}

