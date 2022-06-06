#include "TresNpcPawnBase.h"
#include "Components/CapsuleComponent.h"
#include "TresReactorComponent.h"

class UBehaviorTree;
class AActor;

bool ATresNpcPawnBase::SetTargetFNPC(ETresChrUniqueID UniqueId, bool InTargetActor, bool InDestination) {
    return false;
}

void ATresNpcPawnBase::SetTalkEventName(FName EventName) {
}

void ATresNpcPawnBase::SetRailSlideAfterWarp(const AActor* inActor) {
}

void ATresNpcPawnBase::SetNpcActorExistence2(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon, bool Invincible, bool LockOn) {
}

void ATresNpcPawnBase::SetNpcActorExistence(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon) {
}

void ATresNpcPawnBase::SetLeaveFNPC(bool Leave) {
}

void ATresNpcPawnBase::SetEnableWarp(bool EnableWarp) {
}

void ATresNpcPawnBase::SetDisableBattleModeAI(bool InDisable) {
}

void ATresNpcPawnBase::SetDefaultBT() {
}

void ATresNpcPawnBase::SetBodyImmovable(bool InOnOff) {
}

bool ATresNpcPawnBase::SetBBLocation(FName InName, FVector InLocation) {
    return false;
}

bool ATresNpcPawnBase::SetBBActor(FName InName, AActor* inActor, bool InClear) {
    return false;
}

void ATresNpcPawnBase::SetBattleType(TEnumAsByte<ETresNpcActionOnType> Type) {
}

void ATresNpcPawnBase::SetActionTargetInfo() {
}

void ATresNpcPawnBase::SetActionTargetAndPoint(AActor* InActionTarget, AActor* InActionPoint) {
}

void ATresNpcPawnBase::SetActionPoint(AActor* InActionPoint) {
}

bool ATresNpcPawnBase::IsStateMoving() const {
    return false;
}

bool ATresNpcPawnBase::IsSituationBattle() const {
    return false;
}

bool ATresNpcPawnBase::IsSelfOnDamageFloor() const {
    return false;
}

bool ATresNpcPawnBase::IsSameTargetAsPlayer() const {
    return false;
}

bool ATresNpcPawnBase::IsPlayerRecoveryNow() const {
    return false;
}

bool ATresNpcPawnBase::IsPlayerIdlingNow() const {
    return false;
}

bool ATresNpcPawnBase::IsPlayerBeingAttackedByEnemy() const {
    return false;
}

bool ATresNpcPawnBase::IsPlayerAttackNow() const {
    return false;
}

bool ATresNpcPawnBase::IsOverlappedForce() const {
    return false;
}

bool ATresNpcPawnBase::IsLeadSub() const {
    return false;
}

bool ATresNpcPawnBase::IsLeadMoveTypeToRun() const {
    return false;
}

bool ATresNpcPawnBase::IsLeadLeaderWaiting() const {
    return false;
}

bool ATresNpcPawnBase::IsLeadGoal() const {
    return false;
}

bool ATresNpcPawnBase::IsHostileTarget() const {
    return false;
}

bool ATresNpcPawnBase::IsFriendPointMax() const {
    return false;
}

bool ATresNpcPawnBase::IsFriendLinkPointMax() {
    return false;
}

bool ATresNpcPawnBase::IsFriend(ETresChrUniqueID UniqueId) {
    return false;
}

bool ATresNpcPawnBase::IsEnableChatMode() const {
    return false;
}

bool ATresNpcPawnBase::IsBreakPoseNow() const {
    return false;
}

bool ATresNpcPawnBase::IsBattleType(TEnumAsByte<ETresNpcActionOnType> Type) {
    return false;
}

bool ATresNpcPawnBase::IsBattleFollowMode() const {
    return false;
}

bool ATresNpcPawnBase::IsBadStatus() {
    return false;
}

bool ATresNpcPawnBase::IsActionOff() {
    return false;
}

FName ATresNpcPawnBase::GetTalkEventName() {
    return NAME_None;
}

float ATresNpcPawnBase::GetFriendPoint() const {
    return 0.0f;
}

float ATresNpcPawnBase::GetActionTime() {
    return 0.0f;
}

int32 ATresNpcPawnBase::GetActionOnType() {
    return 0;
}

void ATresNpcPawnBase::ClearActionTargetInfo() {
}

void ATresNpcPawnBase::ChangeBT(UBehaviorTree* InBehaviorTree) {
}

bool ATresNpcPawnBase::CanSetActionPoint(int32 InType) const {
    return false;
}

bool ATresNpcPawnBase::CanNpcMode() const {
    return false;
}

bool ATresNpcPawnBase::CanLeadWait() const {
    return false;
}

bool ATresNpcPawnBase::CanLeadAvoidanceMove() const {
    return false;
}

bool ATresNpcPawnBase::CanLead() const {
    return false;
}

bool ATresNpcPawnBase::CanFriendLinkBring() {
    return false;
}

bool ATresNpcPawnBase::CanbeSwirlUpDamageReactionByEnemy() const {
    return false;
}

bool ATresNpcPawnBase::CanBattle() const {
    return false;
}

void ATresNpcPawnBase::BP_StartTalkEndReTurn() {
}

void ATresNpcPawnBase::BP_SetTalkEndReTurnInfo(float InTime, AActor* inActor, FVector InLocation) {
}

void ATresNpcPawnBase::BP_SetFriendLinkPointDisable(bool Disable) {
}

bool ATresNpcPawnBase::BP_SetFriendLinkCommand(TEnumAsByte<ETresCommandKind> inCommand, float InReceptionTime, bool InAuto) {
    return false;
}

void ATresNpcPawnBase::BP_SetCinematicStateFNPC() {
}

void ATresNpcPawnBase::BP_NpcUseItem(AActor* InTargetActor, TEnumAsByte<ETresCommandKind> InItemCmd) {
}

bool ATresNpcPawnBase::BP_MethdNpcMotionStop() {
    return false;
}

bool ATresNpcPawnBase::BP_MethdNpcMotionPlay(int32 MotionLoopMax, const FName StartName, const FName LoopName, const FName EndName, bool ReTurnEndAnim) {
    return false;
}

bool ATresNpcPawnBase::BP_MethdAnnihilationCatch(bool InCanbeCheck) {
    return false;
}

bool ATresNpcPawnBase::BP_IsNpcMotionPlay() {
    return false;
}

void ATresNpcPawnBase::BP_InitTalkEnd() {
}

void ATresNpcPawnBase::BP_GetUsableBattleItem() {
}

bool ATresNpcPawnBase::BP_EndAnnihilationCatch() {
    return false;
}

void ATresNpcPawnBase::BP_DelTalkEndReTurnInfo() {
}

void ATresNpcPawnBase::BP_ClearStateFNPC(bool CinematicClear) {
}

ATresNpcPawnBase::ATresNpcPawnBase() {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresNpcReactor0"));
    this->MyJumpPowerNormal = 800.00f;
    this->m_JumpRotRate = 1.00f;
    this->m_JumpSpeedRate = 0.90f;
    this->m_JumpDownBlendInTime = 0.20f;
    this->m_SuperSlideSpeed = 1500.00f;
    this->m_GripHeight = 500.00f;
    this->m_FriendLinkPointMax = 100.00f;
    this->m_FriendLinkPointInterval = 3.00f;
    this->m_bDispDebugInfo = false;
    this->m_bDispDebugAnimSet = false;
    this->m_bDispDebugAnimInfo = false;
    this->m_bDispDebugLineAndSphere = false;
    this->m_bDispDebugSmartphoneCamera = false;
    this->m_SlopeSlide = NULL;
    this->m_Swimming = NULL;
    this->m_FollowPlayerEQSQuery = NULL;
    this->m_Walk = NULL;
    this->MyPhysObjHitComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PhysObjHitCollision"));
    this->m_pFriendMan = NULL;
    this->m_pActionTarget = NULL;
    this->m_pActionPoint = NULL;
    this->m_fCloudIntervalTime = 0.50f;
    this->m_fSneezeIntervalTime = 0.10f;
    this->m_SoundAssets_Damage = NULL;
    this->m_FaceEyeBlinkMinTimer = 3.00f;
    this->m_FaceEyeBlinkMaxTimer = 4.00f;
    this->m_pVoiceCompo = NULL;
}

