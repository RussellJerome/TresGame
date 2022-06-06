#include "TresCharPawnBase.h"
#include "TresCharMovementComponent.h"
#include "TresSkeletalMeshComponent.h"
#include "TresAtkCollComponent.h"
#include "TresBodyCollComponent.h"
#include "TresEquipmentComponent.h"
#include "TresEffectAttachComponent.h"
#include "TresStateQueueComponent.h"

class USQEX_KBD_Component;
class UAnimMontage;
class AActor;
class UAnimSequenceBase;
class USQEX_DynamicBindAssetUserData;

void ATresCharPawnBase::SetStopAI(bool bStop) {
}

void ATresCharPawnBase::SetMoveMode(TEnumAsByte<EMovementMode> NewMovementMode, bool bClearVelocity) {
}

void ATresCharPawnBase::SetMaxWalkSpeed(float InMaxWalkSpeed) {
}

void ATresCharPawnBase::SetMaxSwimSpeed(float InMaxSwimSpeed) {
}

void ATresCharPawnBase::SetMaxFlySpeed(float InMaxFlySpeed) {
}

void ATresCharPawnBase::SetMaxAcceleration(float InAcceleration) {
}

void ATresCharPawnBase::SetMagicPoint(int32 InMP) {
}

void ATresCharPawnBase::SetIKinemaEnable(bool Enable, bool Force) {
}

void ATresCharPawnBase::SetHitPoint(int32 InHP) {
}

void ATresCharPawnBase::SetGravityScale(float InGravityScale) {
}

void ATresCharPawnBase::SetFocusPoint(int32 InFP) {
}

void ATresCharPawnBase::SetEnableGravityLock(bool InEnable) {
}

void ATresCharPawnBase::SetEnableGravity(bool InEnable) {
}

void ATresCharPawnBase::SetConditionNoHpDamage(bool InNoHpDamage) {
}

void ATresCharPawnBase::SetConditionNoDamageResponse(bool InNoDamageResponse) {
}

void ATresCharPawnBase::SetConditionInvincible(bool InInvincible) {
}

void ATresCharPawnBase::SetConditionHpLimitOneExceptPlayerAttack(bool InHpLimitOne) {
}

void ATresCharPawnBase::SetConditionHpLimitOne(bool InHpLimitOne) {
}

void ATresCharPawnBase::SetBuoyancy(float InBuoyancy) {
}

void ATresCharPawnBase::SetBodyCollReactionType(ETresBodyCollReactionType InType, FName InGroup) {
}

void ATresCharPawnBase::SetBattleMode(bool InEnable) {
}

void ATresCharPawnBase::ResetMaxWalkSpeed() {
}

void ATresCharPawnBase::ResetMaxSwimSpeed() {
}

void ATresCharPawnBase::ResetMaxFlySpeed() {
}

void ATresCharPawnBase::ResetMaxAcceleration() {
}

void ATresCharPawnBase::ResetGravityScale() {
}

void ATresCharPawnBase::ResetBuoyancy() {
}

void ATresCharPawnBase::ResetBodyCollReactionType(FName InGroup) {
}

void ATresCharPawnBase::RequestDirectMove(FVector refVelocity, bool bForceMaxSpeed) {
}








void ATresCharPawnBase::OnJumped_Implementation() {
}

bool ATresCharPawnBase::LaunchCharPawn(float Height, bool bForce, TEnumAsByte<ETresPlayerJumpModes> InJumpMode) {
    return false;
}

void ATresCharPawnBase::LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
}



bool ATresCharPawnBase::IsStopAI() const {
    return false;
}

bool ATresCharPawnBase::IsOnGround() const {
    return false;
}

bool ATresCharPawnBase::IsMoveModeWalking() const {
    return false;
}

bool ATresCharPawnBase::IsMoveModeSwimming() const {
    return false;
}

bool ATresCharPawnBase::IsMoveModeRailSlide() const {
    return false;
}

bool ATresCharPawnBase::IsMoveModeFlying() const {
    return false;
}

bool ATresCharPawnBase::IsMoveModeFalling() const {
    return false;
}

bool ATresCharPawnBase::IsLandAnimPose() const {
    return false;
}

bool ATresCharPawnBase::IsDisableAutoUpdateVelocity() const {
    return false;
}

bool ATresCharPawnBase::IsConditionNoHpDamage() const {
    return false;
}

bool ATresCharPawnBase::IsConditionNoDamageResponse() const {
    return false;
}

bool ATresCharPawnBase::IsConditionInvincible() const {
    return false;
}

bool ATresCharPawnBase::IsConditionHpLimitOneExceptPlayerAttack() const {
    return false;
}

bool ATresCharPawnBase::IsConditionHpLimitOne() const {
    return false;
}

bool ATresCharPawnBase::IsCinematicEndAIRestart() const {
    return false;
}

bool ATresCharPawnBase::IsBattlePose() const {
    return false;
}

bool ATresCharPawnBase::IsBattleMode() const {
    return false;
}

float ATresCharPawnBase::GetVelocityZ() const {
    return 0.0f;
}

UTresCharMovementComponent* ATresCharPawnBase::GetTresCharMovementComponent() const {
    return NULL;
}

TEnumAsByte<ETresStateID> ATresCharPawnBase::GetStateID() const {
    return TSID_STATE_EMPTY;
}

float ATresCharPawnBase::GetMaxWalkSpeed() const {
    return 0.0f;
}

float ATresCharPawnBase::GetMaxSwimSpeed() const {
    return 0.0f;
}

int32 ATresCharPawnBase::GetMaxMagicPoint() const {
    return 0;
}

int32 ATresCharPawnBase::GetMaxHitPoint() const {
    return 0;
}

int32 ATresCharPawnBase::GetMaxFocusPoint() const {
    return 0;
}

float ATresCharPawnBase::GetMaxFlySpeed() const {
    return 0.0f;
}

int32 ATresCharPawnBase::GetMagicPoint() const {
    return 0;
}

USQEX_KBD_Component* ATresCharPawnBase::GetKBDComponent() const {
    return NULL;
}

float ATresCharPawnBase::GetHitPointRate() const {
    return 0.0f;
}

int32 ATresCharPawnBase::GetHitPointPer() const {
    return 0;
}

int32 ATresCharPawnBase::GetHitPoint() const {
    return 0;
}

float ATresCharPawnBase::GetGravityZ() const {
    return 0.0f;
}

int32 ATresCharPawnBase::GetFocusPoint() const {
    return 0;
}

float ATresCharPawnBase::GetDefaultMaxWalkSpeed() const {
    return 0.0f;
}

float ATresCharPawnBase::GetDefaultMaxSwimSpeed() const {
    return 0.0f;
}

float ATresCharPawnBase::GetDefaultMaxFlySpeed() const {
    return 0.0f;
}

float ATresCharPawnBase::GetDefaultBuoyancy() const {
    return 0.0f;
}

FVector ATresCharPawnBase::GetCurrentAcceleration() const {
    return FVector{};
}

int32 ATresCharPawnBase::GetChrLevel() const {
    return 0;
}

float ATresCharPawnBase::GetBuoyancy() const {
    return 0.0f;
}

ETresBodyCollReactionType ATresCharPawnBase::GetBodyCollReactionType(FName InGroup) const {
    return ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
}

void ATresCharPawnBase::DisableAutoUpdateVelocity(bool bInDisable) {
}

void ATresCharPawnBase::ClearVelocity() {
}

void ATresCharPawnBase::ClampVelocityZ(float Min, float Max) {
}

void ATresCharPawnBase::ClampVelocityXY(float Min, float Max) {
}

void ATresCharPawnBase::ClampVelocity(float Min, float Max) {
}

FVector ATresCharPawnBase::CalcJumpVector(const FVector& InTarget, float inAngle) {
    return FVector{};
}

void ATresCharPawnBase::BP_UseMagicPoint(int32 UseMP) {
}

void ATresCharPawnBase::BP_StartCinematicLookAt(AActor* TargetActor, FName SocketName, float BlendIn, EAlphaBlendOption InBlendOption) {
}

void ATresCharPawnBase::BP_SetWeaponVisible(bool bVisible, bool bAppearEffect, float InPlayRate) {
}

void ATresCharPawnBase::BP_SetWeaponRageformRate(float StartValue, float EndValue, float InterpTime) {
}

void ATresCharPawnBase::BP_SetVelocityXY(FVector refVector) {
}

void ATresCharPawnBase::BP_SetMovementInputXY(FVector WorldDirection, float ScaleValue, bool bForce) {
}

void ATresCharPawnBase::BP_SetMovementInput(FVector WorldDirection, float ScaleValue, bool bForce) {
}

void ATresCharPawnBase::BP_SetAccelerationDirXY(FVector refAcceleration) {
}

void ATresCharPawnBase::BP_SetAccelerationDir(FVector refAcceleration) {
}

void ATresCharPawnBase::BP_RequestDirectVelocityZ(float InVelocityZ) {
}

void ATresCharPawnBase::BP_RequestDirectVelocityXY(FVector refVelocity) {
}

void ATresCharPawnBase::BP_RequestDirectVelocity(FVector refVelocity) {
}

bool ATresCharPawnBase::BP_IsRailSlideGoForword() const {
    return false;
}

bool ATresCharPawnBase::BP_IsInnerWaterCurrent() const {
    return false;
}

bool ATresCharPawnBase::BP_IsInnerWater() const {
    return false;
}

bool ATresCharPawnBase::BP_IsConditionCheered() const {
    return false;
}

bool ATresCharPawnBase::BP_IsAbilityEnable(ETresAbilityKind InAbilityKind) const {
    return false;
}

FVector ATresCharPawnBase::BP_GetWaterCurrentForce() const {
    return FVector{};
}

TEnumAsByte<ETresStateID> ATresCharPawnBase::BP_GetTransitionStateID() const {
    return TSID_STATE_EMPTY;
}

int32 ATresCharPawnBase::BP_GetRailSlideID() const {
    return 0;
}

FVector ATresCharPawnBase::BP_GetLastTakeDamageHitLocation() const {
    return FVector{};
}

FVector ATresCharPawnBase::BP_GetLastAttackHitLocation() const {
    return FVector{};
}

TEnumAsByte<ETresWeaponType> ATresCharPawnBase::BP_GetEquipWeaponType() const {
    return TRES_WEAPON_TYPE_NONE;
}

ETresItemDefWeapon ATresCharPawnBase::BP_GetEquipWeaponID() const {
    return ETresItemDefWeapon::WEP_NOEQUIP;
}

TEnumAsByte<ETresDamageKind> ATresCharPawnBase::BP_GetDamageStateDamageKind() const {
    return TRES_DMG_KIND_NONE;
}

void ATresCharPawnBase::BP_EndCinematicLookAt(float BlendOut, EAlphaBlendOption InBlendOption) {
}

void ATresCharPawnBase::BP_DisableSwimFluctuation(bool bDisable, float InInterpTime) {
}

void ATresCharPawnBase::BP_DebugChangeWearform(ETresCharWearForm InForm, float InWearChangeTime) {
}

void ATresCharPawnBase::BP_DebugAllAbilitySetDebugWork(int32 InLevel) {
}

void ATresCharPawnBase::BP_DebugAbilitySetDebugWork(ETresAbilityKind InAbilityKind, int32 InLevel) {
}

void ATresCharPawnBase::BP_CopyRootMotionVelocityToVelocity() {
}

void ATresCharPawnBase::BP_AnimStop(float InBlendOut, FName InSlotName) {
}

void ATresCharPawnBase::BP_AnimPlaySequence(UAnimSequenceBase* InAsset, FName InSlotNodeName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ) {
}

void ATresCharPawnBase::BP_AnimPlayMontage(UAnimMontage* InAsset, int32 InEffectGroup, float InPlayRate, float InRootTransScaleXY, float InRootTransScaleZ) {
}

void ATresCharPawnBase::BP_AnimPlayAnimset(FName InAnimName, FName InSlotNodeName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ, bool InSameCheck) {
}

FName ATresCharPawnBase::BP_AnimGetLastPlayAnimName(FName InSlotName) const {
    return NAME_None;
}

bool ATresCharPawnBase::BP_AbilityRemove(ETresAbilityKind InAbilityKind) {
    return false;
}

int32 ATresCharPawnBase::BP_AbilityGetLevel(ETresAbilityKind InAbilityKind) const {
    return 0;
}

int32 ATresCharPawnBase::BP_AbilityGetEquipNum(ETresAbilityKind InAbilityKind) const {
    return 0;
}

bool ATresCharPawnBase::BP_AbilityAdd(ETresAbilityKind InAbilityKind, bool bEquip) {
    return false;
}

void ATresCharPawnBase::ApplyKBD(USQEX_DynamicBindAssetUserData* KBDAssetUserData, FName ElementName, bool bIsReset, bool bIsResetPose, int32 PreRoll, bool KeepReferences) {
}

ATresCharPawnBase::ATresCharPawnBase() {
    this->MyMovement = CreateDefaultSubobject<UTresCharMovementComponent>(TEXT("TresCharMovement0"));
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCharMesh0"));
    this->MyAtkColl = CreateDefaultSubobject<UTresAtkCollComponent>(TEXT("TresAtkColl0"));
    this->MyBodyColl = CreateDefaultSubobject<UTresBodyCollComponent>(TEXT("TresBodyColl0"));
    this->MyEquipment = CreateDefaultSubobject<UTresEquipmentComponent>(TEXT("TresEquipment0"));
    this->MyStateComp = CreateDefaultSubobject<UTresStateQueueComponent>(TEXT("TresStateQueue0"));
    this->MyEffectAtt = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("TresEffectAttach0"));
    this->bPressedJump = false;
    this->JumpKeyHoldTime = 0.00f;
    this->JumpMaxHoldTime = 0.00f;
    this->m_ChrUniqueID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
    this->DebugLevel = 0;
    this->MaxHitPoint = 0;
    this->m_HitPoint = 0;
    this->MaxMagicPoint = 0;
    this->m_MagicPoint = 0;
    this->m_bAppearMsgSended = false;
    this->MyMpChargeTime = 0.00f;
    this->MaxFocusPoint = 0;
    this->m_FocusPoint = 0;
    this->m_DefaultBodyCollReactionType = ETresBodyCollReactionType::TRES_BODY_RT_DEFAULT;
    this->m_bEnableAttractionFlowHitPoint = false;
    this->m_bEnableAttractionFlowMarkerProc = false;
    this->m_AttractionHP = 0;
    this->m_AttractionMarkerCommandID = TRES_CMD_KIND_NONE;
    this->m_AttractionMarkerRestTime = 0.00f;
    this->m_bRootTransCalcRootSpace = true;
    this->bIsBattleMode = false;
    this->m_bIsInvincible = false;
    this->m_bIsNoDamageResponse = false;
    this->m_bNoHpDamage = false;
    this->m_bIsHpLimitOne = false;
    this->m_bIsHpLimitOneExceptPlayerAttack = false;
    this->m_bIsNeedAttachAttackHitEffect = false;
    this->m_bDisableInvincibleInCinematicMode = false;
    this->m_ControlAnalogInputModifier = 1.00f;
    this->MyRailSlideSpeed = 2000.00f;
    this->m_RailSlideJumpInertialVelocity = 200.00f;
    this->m_RailSlideJumpInertialBrake = 0.92f;
    this->m_bEquipmentAutoSpawn = false;
    this->m_LastHitPoleComponent = NULL;
    this->m_LastHitHopComponent = NULL;
    this->m_NoActionCounter = 0.00f;
    this->m_LastWaterOuterEffect = NULL;
    this->m_bCameraLookPosToMesh = false;
    this->m_pUIDataStatus = NULL;
    this->MySkelCtrl_IkDisableFlag = false;
    this->MySkelCtrl_IkInitValue = 0.00f;
    this->m_bApplyWetnessMaterial = true;
    this->m_bApplyOceanWetnessMaterial = false;
    this->m_ApplyOceanWetnessMaterialMinHeight = 600.00f;
    this->m_ApplyOceanWetnessMaterialMaxHeight = 2500.00f;
    this->m_pBadStatAdhereActor = NULL;
    this->m_FlowTarget = NULL;
    this->m_AttractionFlowMarker = NULL;
    this->m_pSwimRing = NULL;
    this->MyTeam = ETresTeam::Unknown;
    this->m_CmnAuraEffect = NULL;
    this->m_CmnMagicCastEffect = NULL;
    this->m_CmnBadStatesEffect = NULL;
    this->m_CmnAppearEffect = NULL;
    this->m_bEnableRegistFootStepEffectGen = true;
    this->m_bEnableWaterRippleEffect = false;
    this->m_RippleLocationShiftScale = 0.00f;
    this->m_AutoSeAssets = NULL;
    this->MyAutoSe = NULL;
    this->MyAutoSeCallback = NULL;
}

