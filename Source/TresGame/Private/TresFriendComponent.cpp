#include "TresFriendComponent.h"

class ATresNpcPawnBase;
class AActor;

bool UTresFriendComponent::SetFriendByIDName(FName inNpcName) {
    return false;
}

void UTresFriendComponent::SetFriendAreaID(ETresFriendAreaID inAreaID) {
}

void UTresFriendComponent::SetFriendAll(FName inNpcName0, FName inNpcName1, FName inNpcName2, FName inNpcName3, FName inGuestName4, FName inGuestName5, bool bSetFriendClass) {
}

bool UTresFriendComponent::SetFriend(int32 inIdx, FName inNpcName) {
    return false;
}

void UTresFriendComponent::SetDisableFriendWarpHome(bool DisableON) {
}

void UTresFriendComponent::SetCinematicStateAllFNPC() {
}

void UTresFriendComponent::SetBodyPaintFriendAll(float InScalar) {
}

void UTresFriendComponent::SetBodyPaintFriend(ETresChrUniqueID uid, float InScalar) {
}

void UTresFriendComponent::SetBodyImmovableFriendAll(bool InOnOff) {
}

void UTresFriendComponent::SetBodyImmovableFriend(ETresChrUniqueID uid, bool InOnOff) {
}

void UTresFriendComponent::SetAllFriendLinkPointDisable(bool Disable) {
}

void UTresFriendComponent::PlayVoiceFriendLink(TEnumAsByte<ETresCommandKind> Command, ETresChrUniqueID uid) {
}

bool UTresFriendComponent::IsExistGoofy() const {
    return false;
}

bool UTresFriendComponent::IsExistDonald() const {
    return false;
}

bool UTresFriendComponent::IsExistDonaGoo() const {
    return false;
}

bool UTresFriendComponent::IsExistChar(ETresChrUniqueID uid) const {
    return false;
}

bool UTresFriendComponent::IsExeLink() const {
    return false;
}

bool UTresFriendComponent::IsDisableFriendWarpHome() {
    return false;
}

bool UTresFriendComponent::IsCameraTargetActorEnable() {
    return false;
}

bool UTresFriendComponent::IsCameraShortAnime() {
    return false;
}

FVector UTresFriendComponent::GetHomePos(ATresNpcPawnBase* pNpcPawn) {
    return FVector{};
}

AActor* UTresFriendComponent::GetCameraTargetActor() {
    return NULL;
}

bool UTresFriendComponent::DeleteFriendByUniqueID(ETresChrUniqueID uid) {
    return false;
}

void UTresFriendComponent::DeleteFriendAll() {
}

bool UTresFriendComponent::DeleteFriend(int32 inIdx) {
    return false;
}

void UTresFriendComponent::DeleteAllCmd(bool FriendLink, bool AttractionFlow) {
}

void UTresFriendComponent::ClearStateAllFNPC(bool InCinematicClear) {
}

void UTresFriendComponent::CheckDisableFriendLinkCmd() {
}

ATresNpcPawnBase* UTresFriendComponent::BP_GetFriendPawnByUniqueID(ETresChrUniqueID uid) {
    return NULL;
}

void UTresFriendComponent::AnimStopFriend(bool InEnableGuest) {
}

void UTresFriendComponent::AnimPlayFriend(FName InAnimName, bool InLoop, bool InEnableGuest) {
}

UTresFriendComponent::UTresFriendComponent() {
    this->m_pController = NULL;
    this->m_FriendPawnBPDefault[0] = NULL;
    this->m_FriendPawnBPDefault[1] = NULL;
    this->m_FriendPawnBPDefault[2] = NULL;
    this->m_FriendPawnBPDefault[3] = NULL;
    this->m_FriendPawnBPDefault[4] = NULL;
    this->m_FriendPawnBPDefault[5] = NULL;
    this->m_FriendPawnBP[0] = NULL;
    this->m_FriendPawnBP[1] = NULL;
    this->m_FriendPawnBP[2] = NULL;
    this->m_FriendPawnBP[3] = NULL;
    this->m_FriendPawnBP[4] = NULL;
    this->m_FriendPawnBP[5] = NULL;
    this->m_bDispDebugInfo = false;
    this->m_bDispDebugLine = false;
}

