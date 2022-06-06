#include "TresStateBase.h"

class ATresSceneManager;
class ATresPlayerPawnBase;
class ATresPlayerControllerBase;
class ATresAIController;
class ATresPawnBase;
class ATresCharPawnBase;
class APawn;
class AController;
class AActor;
class USQEX_ParticleAttachDataAsset;
class UAnimSequenceBase;

ATresSceneManager* UTresStateBase::GetTresSceneManager() const {
    return NULL;
}

ATresPlayerPawnBase* UTresStateBase::GetTresPlayerPawnBase() const {
    return NULL;
}

ATresPlayerControllerBase* UTresStateBase::GetTresPlayerController() const {
    return NULL;
}

ATresPawnBase* UTresStateBase::GetTresPawnBase() const {
    return NULL;
}

ATresCharPawnBase* UTresStateBase::GetTresCharPawnBase() const {
    return NULL;
}

ATresAIController* UTresStateBase::GetTresAIController() const {
    return NULL;
}

FName UTresStateBase::GetStateName() const {
    return NAME_None;
}

TEnumAsByte<ETresStateID> UTresStateBase::GetStateID() const {
    return TSID_STATE_EMPTY;
}

APawn* UTresStateBase::GetPawn() const {
    return NULL;
}

TEnumAsByte<ENetRole> UTresStateBase::GetOwnerRole() const {
    return ROLE_None;
}

TEnumAsByte<ENetRole> UTresStateBase::GetOwnerRemoteRole() const {
    return ROLE_None;
}

AController* UTresStateBase::GetController() const {
    return NULL;
}

AActor* UTresStateBase::GetActor() const {
    return NULL;
}

void UTresStateBase::DoRestartAgain() {
}

void UTresStateBase::DoRestart() {
}

void UTresStateBase::DoFinish() {
}

void UTresStateBase::DoChain() {
}

void UTresStateBase::DoAgain() {
}

void UTresStateBase::BP_SetEffectAttach(int32 InGroup) {
}

void UTresStateBase::BP_SetEffect(FName InAttachName, USQEX_ParticleAttachDataAsset* InAttachData, int32 InGroupID) {
}

bool UTresStateBase::BP_IsAnimEnd(FName InSlotName) const {
    return false;
}

void UTresStateBase::BP_EndEffect(int32 InGroupID, bool bEqual) {
}

void UTresStateBase::BP_AnimStop(FName InSlotName, float InBlendOutTime) {
}

bool UTresStateBase::BP_AnimSetBlendSpaceParam(FName InSlotName, float InX, float InY, float InZ) {
    return false;
}

float UTresStateBase::BP_AnimPlaySequence(UAnimSequenceBase* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, const FVector2D& InRootTransScale) {
    return 0.0f;
}

float UTresStateBase::BP_AnimPlay(FName InAnimName, float InBlendInTime, float InBlendOutTime, bool InLoop, bool InRootTrans, bool InRootRot, float InPlayRate) {
    return 0.0f;
}

FName UTresStateBase::BP_AnimGetUseSlotName(int32 InIndex) const {
    return NAME_None;
}

UTresStateBase::UTresStateBase() {
    this->MyStateID = TSID_STATE_EMPTY;
    this->m_bEnableRecycle = false;
    this->MyCharPawn = NULL;
    this->m_nSubStep = 0;
    this->m_TurnIndex = 0;
    this->m_TurnToTargetSpeed = 360.00f;
    this->m_bEnableChange = false;
    this->m_bReverseLeg = false;
    this->m_bEnableTraction = false;
    this->m_bEnableTurnToTarget = false;
    this->m_bFaceAt = false;
    this->m_bEnableInput = false;
}

