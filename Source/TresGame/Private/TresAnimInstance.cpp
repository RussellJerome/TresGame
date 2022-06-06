#include "TresAnimInstance.h"

class ATresPawnBase;
class ATresGimmickSkeletalBase;
class UAnimMontage;
class ATresCharPawnBase;
class UAnimSequenceBase;
class UBlendSpaceBase;

ATresPawnBase* UTresAnimInstance::TryGetTresPawnOwner() {
    return NULL;
}

ATresGimmickSkeletalBase* UTresAnimInstance::TryGetTresGimmickSkeletalOwner() {
    return NULL;
}

ATresCharPawnBase* UTresAnimInstance::TryGetTresCharPawnOwner() {
    return NULL;
}

float UTresAnimInstance::SQEX_PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, bool InLoop, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ) {
    return 0.0f;
}

float UTresAnimInstance::SQEX_Montage_Play(UAnimMontage* MontageToPlay, float InBlendInTime, float InPlayRate, float InRootMoveScaleXY, float InRootMoveScaleZ) {
    return 0.0f;
}

bool UTresAnimInstance::SQEX_IsAnimLoop(FName InSlotName) const {
    return false;
}

bool UTresAnimInstance::SQEX_IsAnimEnd(FName InSlotName) const {
    return false;
}

void UTresAnimInstance::SQEX_FaceAnimStop(float InBlendOutTime) {
}

bool UTresAnimInstance::SQEX_FaceAnimSetEyeRot(const FRotator& InEyeRot, float InAlpha) {
    return false;
}

void UTresAnimInstance::SQEX_FaceAnimSetCurrentTime(float InTime) {
}

bool UTresAnimInstance::SQEX_FaceAnimSetBlendSpaceParam(const FVector& InBlendParam) {
    return false;
}

float UTresAnimInstance::SQEX_FaceAnimPlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority) {
    return 0.0f;
}

float UTresAnimInstance::SQEX_FaceAnimPlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority) {
    return 0.0f;
}

void UTresAnimInstance::SQEX_FaceAnimLipStop(float InBlendOutTime) {
}

void UTresAnimInstance::SQEX_FaceAnimLipSetCurrentTime(float InTime) {
}

bool UTresAnimInstance::SQEX_FaceAnimLipSetBlendSpaceParam(const FVector& InBlendParam) {
    return false;
}

float UTresAnimInstance::SQEX_FaceAnimLipPlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority) {
    return 0.0f;
}

float UTresAnimInstance::SQEX_FaceAnimLipPlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority) {
    return 0.0f;
}

void UTresAnimInstance::SQEX_FaceAnimEyeStop(float InBlendOutTime) {
}

void UTresAnimInstance::SQEX_FaceAnimEyeSetCurrentTime(float InTime) {
}

bool UTresAnimInstance::SQEX_FaceAnimEyeSetBlendSpaceParam(const FVector& InBlendParam) {
    return false;
}

float UTresAnimInstance::SQEX_FaceAnimEyePlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority) {
    return 0.0f;
}

float UTresAnimInstance::SQEX_FaceAnimEyePlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority) {
    return 0.0f;
}

float UTresAnimInstance::SQEX_BlendSpace_Play(UBlendSpaceBase* BlendSpaceToPlay, FName InSlotNodeName, float InBlendInTime, bool InLoop, const FVector InBlendParam, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ) {
    return 0.0f;
}

void UTresAnimInstance::SQEX_AnimStop(FName InSlotName, float InBlendOutTime) {
}

bool UTresAnimInstance::SQEX_AnimSetRootTransScale(FName InSlotName, float InXY, float InZ) {
    return false;
}

void UTresAnimInstance::SQEX_AnimSetCurrentTime(FName InSlotName, float InTime) {
}

void UTresAnimInstance::SQEX_AnimSetCurrentPlayRate(FName InSlotName, float InPlayRate) {
}

bool UTresAnimInstance::SQEX_AnimSetBlendSpaceParam(FName InSlotName, float InX, float InY, float InZ) {
    return false;
}

float UTresAnimInstance::SQEX_AnimPlayAnimset(FName InAnimName, FName InSlotNodeName, float InBlendInTime, bool InLoop, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ) {
    return 0.0f;
}

bool UTresAnimInstance::SQEX_AnimJumpToSection(FName InSlotName, const FName InSectionName, bool bJumpToSectionEnd) {
    return false;
}

float UTresAnimInstance::SQEX_AnimGetCurrentTime(FName InSlotName) const {
    return 0.0f;
}

FName UTresAnimInstance::SQEX_AnimGetCurrentSectionName(FName InSlotName) const {
    return NAME_None;
}

float UTresAnimInstance::SQEX_AnimGetCurrentPlayRate(FName InSlotName) const {
    return 0.0f;
}

float UTresAnimInstance::SQEX_AnimGetCurrentLength(FName InSlotName) const {
    return 0.0f;
}

bool UTresAnimInstance::SQEX_AnimGetCurrentBlendParamMinMax(FName InSlotName, FVector& OutParamMin, FVector& OutParamMax) const {
    return false;
}

bool UTresAnimInstance::SQEX_AnimGetBlendParamMinMax(const FName InAnimName, FVector& OutParamMin, FVector& OutParamMax) const {
    return false;
}

float UTresAnimInstance::SQEX_AnimGetAnimSequenceLength(const FName InAnimName) const {
    return 0.0f;
}

float UTresAnimInstance::SQEX_AnimGetAnimLength(const FName InAnimName) const {
    return 0.0f;
}


void UTresAnimInstance::NotifyStartTurnToTarget(int32 InIndex, float inTurnSpeed) {
}

void UTresAnimInstance::NotifyStartTraction() {
}

void UTresAnimInstance::NotifyStartReverseLeg() {
}

void UTresAnimInstance::NotifyStartLookAt(float InInterpTime) {
}

void UTresAnimInstance::NotifyStartIK(float InInterpTime, float InTargetAlpha) {
}

void UTresAnimInstance::NotifyStartFootStep(const FName InSocketName, const FVector& InLocationOffset) {
}

void UTresAnimInstance::NotifyShot(FName InProjectileName, FName InSocketName, int32 InLocationIndex) {
}

void UTresAnimInstance::NotifyLandStateEnded() {
}

void UTresAnimInstance::NotifyJumpStart() {
}

void UTresAnimInstance::NotifyFaceAt() {
}

void UTresAnimInstance::NotifyEndTurnToTarget() {
}

void UTresAnimInstance::NotifyEndTraction() {
}

void UTresAnimInstance::NotifyEndReverseLeg() {
}

void UTresAnimInstance::NotifyEndLookAt(float InInterpTime) {
}

void UTresAnimInstance::NotifyEndIK(float InInterpTime) {
}

void UTresAnimInstance::NotifyEndFootStep(const FName InSocketName, const FVector& InLocationOffset) {
}

void UTresAnimInstance::NotifyEnableInput() {
}

void UTresAnimInstance::NotifyEnableChange() {
}

void UTresAnimInstance::NotifyDamageCaution(TEnumAsByte<ETresRiskDodgeType> InDodgeType, float InTime, float inAngle) {
}

UTresAnimInstance::UTresAnimInstance() {
    this->m_bDefaultAnimAlwaysLoopPlay = false;
    this->m_bDefaultAnimCheckSame = false;
    this->m_bAnimStopIfAnimAssetIsNone = false;
    this->AnimPlayUseSlotNodeName = TEXT("FullBody");
    this->m_FaceAnimSlotName = TEXT("Face");
    this->m_LipAnimSlotName = TEXT("Mouth");
    this->m_bAutoPlayFaceAnim = false;
    this->m_AutoPlayFaceAnimType = NORMAL_AUTO;
    this->m_AutoPlayFaceAnimInterpTime = 0.00f;
    this->m_bAutoPlayFaceAnimLoop = true;
    this->m_bKeepAnimMorphTargetCurveValue = false;
}

