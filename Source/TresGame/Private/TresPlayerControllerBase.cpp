#include "TresPlayerControllerBase.h"

class UTresUICommandInfoBase;
class AActor;
class UTresLockonTargetComponent;
class UPrimitiveComponent;
class ATresCharPawnBase;

void ATresPlayerControllerBase::SimulateKeypress(FKey Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad) {
}

void ATresPlayerControllerBase::NotifyStartActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {
}

void ATresPlayerControllerBase::NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {
}

void ATresPlayerControllerBase::NotifySetDlcChallengeCodeEnable(ETresDlcChallengeCode InCode) {
}

bool ATresPlayerControllerBase::NotifySetDiveAttackCommand(UTresLockonTargetComponent* InTarget) {
    return false;
}

void ATresPlayerControllerBase::NotifySetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, UTresUICommandInfoBase* pUICommandInfo) {
}

void ATresPlayerControllerBase::NotifyResetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {
}

void ATresPlayerControllerBase::NotifyEndActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {
}

void ATresPlayerControllerBase::NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {
}

void ATresPlayerControllerBase::DebugWallKick(bool bEnable) {
}

void ATresPlayerControllerBase::DebugUseMP0() {
}

void ATresPlayerControllerBase::DebugTestMode(uint32 InMode) {
}

void ATresPlayerControllerBase::DebugSuperSlideLv(uint32 InLv) {
}

void ATresPlayerControllerBase::DebugSuperJump(bool bEnable) {
}

void ATresPlayerControllerBase::DebugStartPlayerWarpMode() {
}

void ATresPlayerControllerBase::DebugSituationTimerInfinity(bool bEnable) {
}

void ATresPlayerControllerBase::DebugShowStyleInfo(bool bDispEnable) {
}

void ATresPlayerControllerBase::DebugShowProjectileInfo(bool bDispEnable) {
}

void ATresPlayerControllerBase::DebugShowPlayerWallRunCheck() {
}

void ATresPlayerControllerBase::DebugShowPlayerSlopeSlideCheck() {
}

void ATresPlayerControllerBase::DebugShowPlayerLockon() {
}

void ATresPlayerControllerBase::DebugShowPlayerHUD(bool bDispEnable) {
}

void ATresPlayerControllerBase::DebugShowPlayerHoppingCheck() {
}

void ATresPlayerControllerBase::DebugShowPlayerExternalExposure() {
}

void ATresPlayerControllerBase::DebugShowPlayerCollisionCheck() {
}

void ATresPlayerControllerBase::DebugShowPlayerClimbingCheck() {
}

void ATresPlayerControllerBase::DebugShowPlayerAnimationInfo(bool bDispEnable) {
}

void ATresPlayerControllerBase::DebugShowNetPlayerHUD(bool bDispEnable) {
}

void ATresPlayerControllerBase::DebugShowFriend(bool disp) {
}

void ATresPlayerControllerBase::DebugSetWarpDelayCamera(float InRate, float InLimit) {
}

void ATresPlayerControllerBase::DebugSetWandanyanParam(float InSpeed, float InCamAimZ, float InCamDist, float InCamPitch, float InCamAngle) {
}

void ATresPlayerControllerBase::DebugSetWandanyanJumpRate(float InLv1, float InLv2, float InLv3, float InLv4, float InLv5) {
}

void ATresPlayerControllerBase::DebugSetWallTurnWithoutAnim(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetWallRunParam(float fSideAngle, float fDownAngle, float fSideMoveSpeed) {
}

void ATresPlayerControllerBase::DebugSetStyleTimeLimit(float InTime) {
}

void ATresPlayerControllerBase::DebugSetStylePointAddWithoutHit(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetStylePoint(int32 inSP, int32 inAttrP, int32 inAttrF, int32 inAttrB, int32 inAttrT, int32 inAttrW, int32 inAttrA, int32 inAttrD, int32 inAttrN) {
}

void ATresPlayerControllerBase::DebugSetStyleFix(int32 inStyle) {
}

void ATresPlayerControllerBase::DebugSetStyleCommandEntryTime(float InTime) {
}

void ATresPlayerControllerBase::DebugSetStyleChangeChargeEffect(int32 InLevel) {
}

void ATresPlayerControllerBase::DebugSetSprintMode(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetSonicAttackMode(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetSmallJumpGravityScale(float fGravityScale) {
}

void ATresPlayerControllerBase::DebugSetShootLockSlowRate(float InRate) {
}

void ATresPlayerControllerBase::DebugSetShootFlow(int32 inShootFlowId) {
}

void ATresPlayerControllerBase::DebugSetShooterModeInputType(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetShieldAutoGrowup(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetRiseAttackParam(float fThreshold, float fRate) {
}

void ATresPlayerControllerBase::DebugSetPlayerSlopeSlideParam(float MaxSpeed, float AccTime, float MinSpeed) {
}

void ATresPlayerControllerBase::DebugSetPlayerPos(float InX, float InY, float InZ) {
}

void ATresPlayerControllerBase::DebugSetPlayerExternalExposureColor(uint8 InR, uint8 InG, uint8 InB, uint8 InA) {
}

void ATresPlayerControllerBase::DebugSetIgnoreShootLockModeTimer(bool InIgnore) {
}

void ATresPlayerControllerBase::DebugSetHPPer(int32 HP) {
}

void ATresPlayerControllerBase::DebugSetHP(int32 HP) {
}

void ATresPlayerControllerBase::DebugSetHopRotateMode(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetGlobalGameSpeed(float InSpeed, float InInterpTime) {
}

void ATresPlayerControllerBase::DebugSetFriendHP(int32 Index, int32 HP) {
}

void ATresPlayerControllerBase::DebugSetFriend(int32 inIdx, FName inNpcName) {
}

void ATresPlayerControllerBase::DebugSetFocusPoint(int32 InFP) {
}

void ATresPlayerControllerBase::DebugSetFinishAutoPopup(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetFinish(uint32 InId, bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetEnableDiveFall(bool bEnable, float inPitch, float inDist, float inAngle, float InOffset) {
}

void ATresPlayerControllerBase::DebugSetDiveFallStartHeight(float fHeight) {
}

void ATresPlayerControllerBase::DebugSetDiveFallMovement(float inRotateScale, float InGravityScale, float inMoveSpeed) {
}

void ATresPlayerControllerBase::DebugSetDarkScreenRate(float InRate) {
}

void ATresPlayerControllerBase::DebugSetDamageEndChancelTime(float InTime) {
}

void ATresPlayerControllerBase::DebugSetComboPlus(int32 InGround, int32 InAir) {
}

void ATresPlayerControllerBase::DebugSetAttraction(uint32 InId, bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetAttackMoveLimit(float fDist) {
}

void ATresPlayerControllerBase::DebugSetAttackFirstAirMoveRate(float fRate) {
}

void ATresPlayerControllerBase::DebugSetAttackCollType(FName InName) {
}

void ATresPlayerControllerBase::DebugSetAthleticVersion(uint32 InVersion, float inRootSpeed) {
}

void ATresPlayerControllerBase::DebugSetAthleticSlideParam(float InTime, float InSpeed, float inKickAnim) {
}

void ATresPlayerControllerBase::DebugSetAthleticLockonRange(float InRange) {
}

void ATresPlayerControllerBase::DebugSetAthleticLockonLimit(float InLimit) {
}

void ATresPlayerControllerBase::DebugSetAthleticDelayCamera(float InRate, float InLimit, int32 InMode) {
}

void ATresPlayerControllerBase::DebugSetAthleticAttackParam(float inSlowRate, float inSlowTime) {
}

void ATresPlayerControllerBase::DebugSetAllFriendFinish(bool bEnable) {
}

void ATresPlayerControllerBase::DebugSetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer) {
}

void ATresPlayerControllerBase::DebugSet2ndJumpParam(float fEnableMinVZ) {
}

void ATresPlayerControllerBase::DebugRiskDodge(bool bEnable) {
}

void ATresPlayerControllerBase::DebugRevengeImpact(bool bEnable) {
}

void ATresPlayerControllerBase::DebugRevengeEx(bool bEnable) {
}

void ATresPlayerControllerBase::DebugRevengeDive(bool bEnable) {
}

void ATresPlayerControllerBase::DebugResetPlayerLocation() {
}

void ATresPlayerControllerBase::DebugProjectileLimitOff() {
}

void ATresPlayerControllerBase::DebugPoleSwing(bool bEnable) {
}

void ATresPlayerControllerBase::DebugPoleSpin(bool bEnable) {
}

void ATresPlayerControllerBase::DebugPlayerWarpToTaggedPlayerStart(FName InTag) {
}

void ATresPlayerControllerBase::DebugPlayerWallRunStartOff(bool bEnable) {
}

void ATresPlayerControllerBase::DebugPlayerPad(bool bEnable) {
}

void ATresPlayerControllerBase::DebugPlayerNoCheckUnWalkable() {
}

void ATresPlayerControllerBase::DebugPlayerNoCheckAutoRun() {
}

void ATresPlayerControllerBase::DebugPlayerForceL1Cancel(bool bEnable) {
}

void ATresPlayerControllerBase::DebugPlayerControllerStop() {
}

void ATresPlayerControllerBase::DebugMpCharge(bool bEnable) {
}

void ATresPlayerControllerBase::DebugModePlayerClimbing() {
}

void ATresPlayerControllerBase::DebugInfinityJump(bool bEnable) {
}

void ATresPlayerControllerBase::DebugHighJump(uint32 InLv) {
}

void ATresPlayerControllerBase::DebugGuardCounter(bool bEnable) {
}

void ATresPlayerControllerBase::DebugGuard(bool bEnable) {
}

void ATresPlayerControllerBase::DebugGlide(bool bEnable) {
}

void ATresPlayerControllerBase::DebugFriendsWarp() {
}

void ATresPlayerControllerBase::DebugFpCharge(bool bEnable) {
}

void ATresPlayerControllerBase::DebugFPAutoRecovery() {
}

void ATresPlayerControllerBase::DebugForceUseSpawnPointVolume(bool bEnable) {
}

void ATresPlayerControllerBase::DebugEnemyTurn(bool bEnable) {
}

void ATresPlayerControllerBase::DebugEnableWaterMagic(bool InEnable) {
}

void ATresPlayerControllerBase::DebugEnableShootLockonMax() {
}

void ATresPlayerControllerBase::DebugEnablePlayerWallRun(bool bEnable) {
}

void ATresPlayerControllerBase::DebugEnablePlayerNoHpDamage(bool bNoHpDamage) {
}

void ATresPlayerControllerBase::DebugEnablePlayerNoDamageResponse(bool bNoDamageResponse) {
}

void ATresPlayerControllerBase::DebugEnablePlayerLookAt(int32 InEnable) {
}

void ATresPlayerControllerBase::DebugEnablePlayerInvincible(bool bInvincible) {
}

void ATresPlayerControllerBase::DebugEnablePlayerIK(int32 InEnable) {
}

void ATresPlayerControllerBase::DebugEnablePlayerControl(bool bEnable) {
}

void ATresPlayerControllerBase::DebugEnablePlayerClimbing(bool bEnable) {
}

void ATresPlayerControllerBase::DebugEnableHighQualityScreenShot(bool bEnable) {
}

void ATresPlayerControllerBase::DebugEnableFestivalDanceCmd(bool bEnable) {
}

void ATresPlayerControllerBase::DebugEnableCommandMenu(bool bEnable) {
}

void ATresPlayerControllerBase::DebugDodgeCounter(bool bEnable) {
}

void ATresPlayerControllerBase::DebugDodge(bool bEnable) {
}

void ATresPlayerControllerBase::DebugDispPrizeRange(bool bEnable) {
}

void ATresPlayerControllerBase::DebugDispNearSpawnPoint(bool bEnable) {
}

void ATresPlayerControllerBase::DebugDisableGameOver(bool bDisable) {
}

void ATresPlayerControllerBase::DebugDisableDarkScreen(bool bEnable) {
}

void ATresPlayerControllerBase::DebugDeleteFriendAll() {
}

void ATresPlayerControllerBase::DebugDamageBlowTest() {
}

void ATresPlayerControllerBase::DebugCreateRollerCoaster() {
}

void ATresPlayerControllerBase::DebugCreateFriend() {
}

void ATresPlayerControllerBase::DebugComboMaster(bool bEnable) {
}

void ATresPlayerControllerBase::DebugChargeBerserkTest(bool bEnable) {
}

void ATresPlayerControllerBase::DebugChangeWearform(int32 InForm) {
}

void ATresPlayerControllerBase::DebugChangeNextWeaponForm() {
}

void ATresPlayerControllerBase::DebugChangeNextProjectile() {
}

void ATresPlayerControllerBase::DebugChangeFriendPadControl(int32 Index, bool bEnable) {
}

void ATresPlayerControllerBase::DebugChangeDecoParts(int32 InPartIdx, int32 InItemID) {
}

void ATresPlayerControllerBase::DebugBlowCounter(bool bEnable) {
}

void ATresPlayerControllerBase::DebugAirRecoveryInputChange(bool bEnable) {
}

void ATresPlayerControllerBase::DebugAirRecovery(bool bEnable) {
}

void ATresPlayerControllerBase::DebugAirDodge(bool bEnable) {
}

void ATresPlayerControllerBase::DebugAddStylePoint(float inAddPoint, int32 inAttr) {
}

void ATresPlayerControllerBase::DebugAddFriendPoint(float inAddPoint) {
}

void ATresPlayerControllerBase::Debug2ndJump(bool bEnable) {
}

void ATresPlayerControllerBase::BP_TresCinematicDelayRunWalkStop(float fDelayRunStop, float fDelayWalkStop, float fForceYawRate, float fForceYaw) {
}

void ATresPlayerControllerBase::BP_TresCinematicDelayRunStop(float fDelayRunStop, bool bForceYaw, float fForceYaw) {
}

void ATresPlayerControllerBase::BP_SetShootLockonLimit(float InShootLockonLimit) {
}

void ATresPlayerControllerBase::BP_SetRestrictWeapon(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictStyle(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictSituation(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictShootLock(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictRun(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictMagic(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictLink(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictJump(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictItem(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictGuard(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictFriend(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictDiveFall(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictAttraction(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictAttack(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetRestrictAntiForm(bool bRestrict) {
}

void ATresPlayerControllerBase::BP_SetNearTargetSingle(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetManualLockonLimit(float InManualLockonLimit, float InManualLockonOff) {
}

void ATresPlayerControllerBase::BP_SetLookAtActor(AActor* inActor) {
}

void ATresPlayerControllerBase::BP_SetForceEnemyHpKeep(bool bEnable) {
}

void ATresPlayerControllerBase::BP_SetDisableRestrictVolumeDetect(bool InDisable) {
}

void ATresPlayerControllerBase::BP_SetDisableManualLockon(bool InDisable) {
}

void ATresPlayerControllerBase::BP_SetDisableGimmickLockon(bool InDisable) {
}

void ATresPlayerControllerBase::BP_SetDisableAutoLockon(bool InDisable) {
}

void ATresPlayerControllerBase::BP_SetAbilityWallRun(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityStyleChange(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityShortCutMenu(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityShootFlow(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityMagic(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityFreeFlow(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityAttractionFlow(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityAttack(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityAthleticFlow(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbilityAirSlide(bool InEnable) {
}

void ATresPlayerControllerBase::BP_SetAbility2ndJump(bool InEnable) {
}

void ATresPlayerControllerBase::BP_ResetShootLockonLimit() {
}

void ATresPlayerControllerBase::BP_ResetManualLockonLimit() {
}

void ATresPlayerControllerBase::BP_ResetLookAtActor() {
}

bool ATresPlayerControllerBase::BP_NotifyStartSpecialAntiForm() {
    return false;
}

void ATresPlayerControllerBase::BP_NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {
}

void ATresPlayerControllerBase::BP_NotifySetSpecialAction(bool inSw) {
}

void ATresPlayerControllerBase::BP_NotifySetFloatingMode(bool IsOn, bool IsSpecial) {
}

void ATresPlayerControllerBase::BP_NotifySetAntiFormCommand() {
}

void ATresPlayerControllerBase::BP_NotifySetActionCommand1(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, AActor* inActor, UPrimitiveComponent* InComponent) {
}

void ATresPlayerControllerBase::BP_NotifyResetSpecialCommand() {
}

void ATresPlayerControllerBase::BP_NotifyRegisterEnemyGaugeTarget(ATresCharPawnBase* InTarget) {
}

void ATresPlayerControllerBase::BP_NotifyPauseSituationTimer(bool IsOn) {
}

void ATresPlayerControllerBase::BP_NotifyPauseActionCommandTimer(bool IsOn) {
}

void ATresPlayerControllerBase::BP_NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {
}

bool ATresPlayerControllerBase::BP_IsNowNoSpeak() const {
    return false;
}

bool ATresPlayerControllerBase::BP_IsNowAntiForm() const {
    return false;
}

bool ATresPlayerControllerBase::BP_IsDisableManualLockon() const {
    return false;
}

bool ATresPlayerControllerBase::BP_IsDisableAutoLockon() const {
    return false;
}

AActor* ATresPlayerControllerBase::BP_GetShootFlowTargetActor_AvatarRush() {
    return NULL;
}

TEnumAsByte<ETresShootFlowKind> ATresPlayerControllerBase::BP_GetPlayShootFlow() {
    return TRES_SF_KIND_NONE;
}

TEnumAsByte<ETresCommandKind> ATresPlayerControllerBase::BP_GetPlayActionCommand() {
    return TRES_CMD_KIND_NONE;
}

void ATresPlayerControllerBase::BP_EndManualLockon() {
}

void ATresPlayerControllerBase::BP_DebugAbilityEnable(bool InEnable) {
}

ATresPlayerControllerBase::ATresPlayerControllerBase() {
    this->m_bDebugProjectileInfo = false;
    this->m_bDebugShowPlayerCollisionCheck = false;
    this->m_bDebugPlayerNoCheckAutoRun = false;
    this->m_bDebugPlayerNoCheckUnWalkable = false;
    this->m_bDebugShowPlayerClimbingCheck = false;
    this->m_bDebugShowPlayerWallRunCheck = false;
    this->m_bDebugShowPlayerSlopeSlideCheck = false;
    this->m_bDebugShowPlayerHoppingCheck = false;
    this->m_bDebugShowPlayerLockon = false;
    this->m_bDebugShowPlayerExternalExposure = false;
    this->m_CameraShootFlow = NULL;
    this->m_CameraPreview = NULL;
    this->m_pUICommandInfo = NULL;
    this->m_CameraMultiLock = NULL;
    this->m_pAthleticFlowStartPointDispComponent = NULL;
    this->m_pAttackCameraTarget = NULL;
}

