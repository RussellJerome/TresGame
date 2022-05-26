#include "TresPlayerPawnBase.h"
#include "TresFriendComponent.h"
#include "TresPlayerStateEventComponent.h"

class AActor;
class ATresCharPawnBase;
class UTresPlayerStateEvent;
class UTresUICommandInfoBase;

void ATresPlayerPawnBase::RequestEndCommandKind(TEnumAsByte<ETresCommandKind> inCommand, int32 InParam0) {
}

bool ATresPlayerPawnBase::RemotePlayerStateEvent(FName EventName, AActor* inActor) {
    return false;
}




void ATresPlayerPawnBase::NotifySpecificActionAccompanyPawn(int32 ID, int32 Param0, int32 Param1, int32 Param2) {
}

FVector ATresPlayerPawnBase::GetSpecificActionTargetPos(int32 ID) {
    return FVector{};
}

ATresCharPawnBase* ATresPlayerPawnBase::GetSpecificActionAccompanyPawn(int32 ID) const {
    return NULL;
}

UTresPlayerStateEvent* ATresPlayerPawnBase::GetPlayerStateEventByName(FName Name) {
    return NULL;
}

UTresPlayerStateEvent* ATresPlayerPawnBase::GetPlayerStateEvent(int32 Idx) {
    return NULL;
}

UTresFriendComponent* ATresPlayerPawnBase::GetFriendManager() {
    return NULL;
}

void ATresPlayerPawnBase::DebugWarpCheck(bool bEnable) {
}

void ATresPlayerPawnBase::DebugSetVikingShipParam(float fIdlePitch, float fIdlePow, float fIdleAcc, float fIdleBrk, float fAtkPitch, float fAtkPow, float fAtkAcc, float fAtkBrk) {
}

void ATresPlayerPawnBase::DebugSetTmpVector(int32 InSlot, float InX, float InY, float InZ) {
}

void ATresPlayerPawnBase::DebugSetRailSlideShotMax(int32 InMax) {
}

void ATresPlayerPawnBase::DebugSetRailSlideShotInterval(float InTime) {
}

void ATresPlayerPawnBase::DebugSetRailSlideCheckRange(float InRange, float InAirRange) {
}

void ATresPlayerPawnBase::DebugSetInputCancel(bool bEnable) {
}

void ATresPlayerPawnBase::DebugSetHitStopTime(int32 InMode, float Timer) {
}

void ATresPlayerPawnBase::DebugSetGuardMoveSpeed(float InSpeed) {
}

void ATresPlayerPawnBase::DebugSetGuardHoldTime(float InTime) {
}

void ATresPlayerPawnBase::DebugSetGuardEnableDisp(bool bEnable) {
}

void ATresPlayerPawnBase::DebugSetGlideParam(int32 bEnable, float InGravityScale, float InSpeed, float InTurnRate) {
}

void ATresPlayerPawnBase::DebugSetFriendComboFinishParam(float InRange, float InRangeHalf, float InRangeNear, int32 InAddRate, int32 InAddRateRange, int32 InAddRateRangeHalf, int32 InAddRateRangeNear) {
}

void ATresPlayerPawnBase::DebugSetFocusAspirRate(float fAspirLv1, float fAspirLv2, float fAspirLv3) {
}

void ATresPlayerPawnBase::DebugSetFloatingMode(bool bEnable, bool IsSpecial, float InGravityScale, float InSpeed) {
}

void ATresPlayerPawnBase::DebugSetDiveFallLockon(float InRangeXY, float InLimitZ) {
}

void ATresPlayerPawnBase::DebugSetCoverSlowParam(float InRate, float InTeme) {
}

void ATresPlayerPawnBase::DebugSetCoverMoveSpeed(float InSpeed) {
}

void ATresPlayerPawnBase::DebugSetCoverFindLimit(float InLimit) {
}

void ATresPlayerPawnBase::DebugSetComboTimeDisp(bool bEnable) {
}

void ATresPlayerPawnBase::DebugSetClimbingParam(int32 InVersion, float InRadius, float InFront, float InFrontF, float InFrontN, float InFinalSpace, float InBottom) {
}

void ATresPlayerPawnBase::DebugSetClimbingBodyOff() {
}

void ATresPlayerPawnBase::DebugResetTmpVector() {
}

void ATresPlayerPawnBase::DebugPlayerFallIntoBottomlessPit(float Z) {
}

void ATresPlayerPawnBase::DebugEnableSkillCamera(bool bEnable) {
}

void ATresPlayerPawnBase::DebugEnableDamageAlwaysHeavy(bool bEnable) {
}

void ATresPlayerPawnBase::DebugEnableDamageAddVelocity(float InPow) {
}

void ATresPlayerPawnBase::DebugCuragan(bool bEnable) {
}

void ATresPlayerPawnBase::DebugChangeWeaponType(int32 InType) {
}

void ATresPlayerPawnBase::DebugChangePlayerWeaponEquip(int32 InSlotIndex, int32 InWeaponItemID) {
}

void ATresPlayerPawnBase::DebugBurnTest(bool bEnable) {
}

void ATresPlayerPawnBase::BP_SetWaterFlowAngle(float fWaterFlowAngle) {
}

void ATresPlayerPawnBase::BP_SetForceWalkSpeed(float fForceWalkSpeed) {
}

void ATresPlayerPawnBase::BP_SetEnableShootLockModeForRIKU(bool IsOn) {
}

void ATresPlayerPawnBase::BP_SetEnableGuardHitBackControl(bool IsOn) {
}

void ATresPlayerPawnBase::BP_SetDisableWallRunPointDispOff(bool inSw) {
}

void ATresPlayerPawnBase::BP_SetDisableWallRunPointDisp(bool inSw) {
}

void ATresPlayerPawnBase::BP_SetDisablePolePointDisp(bool inSw) {
}

void ATresPlayerPawnBase::BP_SetDisableHopPointDisp(bool inSw) {
}

void ATresPlayerPawnBase::BP_SetDisableFreeRunPointDisp(bool inSw) {
}

bool ATresPlayerPawnBase::BP_NotifyForcedStartSnowCurling(UTresUICommandInfoBase* pUICommandInfo) {
    return false;
}

bool ATresPlayerPawnBase::BP_NotifyForcedStartSnowChase(UTresUICommandInfoBase* pUICommandInfo) {
    return false;
}

bool ATresPlayerPawnBase::BP_NotifyForcedStartDiveFall() {
    return false;
}

ATresPlayerPawnBase::ATresPlayerPawnBase() {
    this->MyFrdMgr = CreateDefaultSubobject<UTresFriendComponent>(TEXT("TresFriendComponent0"));
    this->MyStateEvent = CreateDefaultSubobject<UTresPlayerStateEventComponent>(TEXT("UTresPlayerStateEventComponent0"));
    this->MySprintSpeed = 980.00f;
    this->MySprintDelay = 1.00f;
    this->MyForceWalkSpeed = 140.00f;
    this->MyWaterFlowAngle = 90.00f;
    this->MyHopRotateModeB = false;
    this->MyHopEffectRange = 2000.00f;
    this->MyPoleEffectRange = 2000.00f;
    this->m_bEnableClimbing = false;
    this->m_fClimbingRadius = 35.00f;
    this->m_fClimbingBottom = 44.00f;
    this->m_fClimbingFront = 150.00f;
    this->m_fClimbingFrontFar = 210.00f;
    this->m_fClimbingFrontNear = 120.00f;
    this->m_fClimbingFinalSpace = 59.50f;
    this->m_bEnableWallRun = false;
    this->MyWallRunSpeedScaleUp = 1.00f;
    this->MyWallRunSpeedScaleSide = 1.00f;
    this->MyJumpPowerNormal = 800.00f;
    this->MyJumpPowerHigh = 900.00f;
    this->MyJumpPowerHighLv2 = 950.00f;
    this->MyJumpPowerHighLv3 = 1000.00f;
    this->MyJumpPowerSuper = 1500.00f;
    this->MyJumpPowerDouble = 1000.00f;
    this->MyJump2ndEnableMinimumVelocityZ = -800.00f;
    this->MySmallJumpGravityScale = 3.00f;
    this->MyGlideGravityScale = 0.03f;
    this->MyGlideSpeed = 1200.00f;
    this->MyGlideTurnRate = 0.03f;
    this->MyFloatingSpeed = 680.00f;
    this->MyFloatingGravityScale = 0.30f;
    this->MyFloatingGravityScale2 = 0.30f;
    this->MyAttackRiseThreshold = 160.00f;
    this->MyAttackRiseRate = 3.50f;
    this->MyAttackFirstAirMoveRate = 1.50f;
    this->m_bEnableDiveFall = false;
    this->MyDiveFallStartHeight = 2000.00f;
    this->MyDiveFallRotateScale = 0.01f;
    this->MyDiveFallGravityScale = 0.25f;
    this->MyDiveFallMoveSpeed = 2000.00f;
    this->MyDiveFallLockonRangeXY = 1000.00f;
    this->MyDiveFallLockonLimitZ = 3500.00f;
    this->MyAirSlideSpeedScale = 0.67f;
    this->MyAirSlideSpeedScaleLv2 = 1.00f;
    this->MyAirSlideSpeedScaleLv3 = 1.33f;
    this->MySuperSlideTime = 1.00f;
    this->MySuperSlideTimeLv2 = 1.00f;
    this->MySuperSlideTimeLv3 = 1.00f;
    this->MySuperSlideSpeed = 2000.00f;
    this->m_SuperSlideMinSpeed = 2000.00f;
    this->MySuperSlideBreak = 2000.00f;
    this->MyPoleTurnRotMax = 4;
    this->MyRailSlideCheckRange = 50.00f;
    this->MyRailSlideCheckAirRange = 150.00f;
    this->MyRailSlideShotMax = 10;
    this->MyRailSlideShotInterval = 0.10f;
    this->MySlopeSlideSpeed = 680.00f;
    this->MySlopeSlideAccelTime = 0.00f;
    this->MySlopeSlideMinSpeed = 340.00f;
    this->MyWallRunSideSwitchAngle = 80.00f;
    this->MyWallRunDownSwitchAngle = 155.00f;
    this->MyWallRunSideMoveSpeed = 980.00f;
    this->MyCoverFindLimit = 1200.00f;
    this->MyCoverMoveSpeed = 340.00f;
    this->MyCoverSlideTime = 1.00f;
    this->MyCoverSlideSpeed = 2000.00f;
    this->m_CoverSlideMinSpeed = 2000.00f;
    this->MyCoverSlideBreak = 2000.00f;
    this->MyCoverSlideMutekiTime = 0.60f;
    this->MyCoverCommandRreadyTime = 0.20f;
    this->MyCoverSlideSlowRate = 0.15f;
    this->MyCoverSlideSlowTime = 0.10f;
    this->MyCoverShotSlideTime = 1.00f;
    this->MyCoverShotSlideSpeed = 2000.00f;
    this->m_CoverShotSlideMinSpeed = 2000.00f;
    this->MyCoverShotSlideBreak = 2000.00f;
    this->MyCoverShotMutekiTime = 0.13f;
    this->MyCoverShotSlideHomingRate = 0.05f;
    this->MyCoverShotLockonLimit = 3000.00f;
    this->MyCoverShotLockonSightMoveRate = 3.00f;
    this->MyCommandCoolDownTime = 0.60f;
    this->MyAirSlideCoolDownTime = 0.60f;
    this->MyAirGuardCoolDownTime = 0.33f;
    this->MyAntiFormCoolDownTime = 90.00f;
    this->MyReactionCoolDownTime = 1.00f;
    this->MyDamageEndCancelTime = 0.87f;
    this->MyGuardHoldTime = 10.00f;
    this->MyGuardMoveSpeed = 200.00f;
    this->MyAutoLockonLimit = 900.00f;
    this->MyAutoLockonNear = 150.00f;
    this->MyManualLockonLimit = 3500.00f;
    this->MyManualLockonOff = 4200.00f;
    this->MyShootLockonLimit = 5000.00f;
    this->MyAthleticLockonLimit = 15000.00f;
    this->MyAthleticLockonRange = 3750.00f;
    this->MySonicAttackModeB = true;
    this->MyStylePointMax = 100;
    this->MyStylePointAddRate = 1.00f;
    this->MyStylePointAddRateLv0 = 1.00f;
    this->MyStylePointAddRateLv1 = 0.80f;
    this->MyStylePointAddRateLv2 = 0.55f;
    this->MyAntiFormGenerate = false;
    this->CriticalModeStylePointAddRate = 1.00f;
    this->CriticalModeStylePointAddRateLv0 = 0.50f;
    this->CriticalModeStylePointAddRateLv1 = 0.80f;
    this->CriticalModeStylePointAddRateLv2 = 0.55f;
    this->CriticalModeAntiFormGenerateRate = 0.50f;
    this->CriticalModeJustGuardTime = 0.13f;
    this->CriticalChargeStylePointAddRate = 1.30f;
    this->MyStylePointAddWithoutHit = false;
    this->MyStylePointDecStartTime = 10.00f;
    this->MyStylePointDecInterval = 1.00f;
    this->MyStylePointDec = 10.00f;
    this->MyStyleFinishOffsetTime = 3.00f;
    this->MyStyleFinishOffsetTimeWeaponChange = 1.00f;
    this->MyFriendPointMax = 200;
    this->MyFriendPointTime = 30.00f;
    this->MyAttractionPointMax = 300;
    this->MyFocusPointAddHit = 0;
    this->MyFocusPointAddTime = 0;
    this->MyFocusPointAddInterval = 0.00f;
    this->MyFocusPointConvertRate = 0.05f;
    this->MyFocusPointNeedAF = 10;
    this->MyFocusAspirRateLv1 = 1.00f;
    this->MyFocusAspirRateLv2 = 1.20f;
    this->MyFocusAspirRateLv3 = 1.50f;
    this->MyFpChargeAddTime = 1;
    this->MyFpChargeInterval = 0.10f;
    this->MyAthleticSlideTime = 1.00f;
    this->MyAthleticSlideSpeed = 6000.00f;
    this->MyAthleticSlideKickAnim = 0.13f;
    this->MyAthleticAttackSlowRate = 0.25f;
    this->MyAthleticAttackSlowTime = 0.05f;
    this->MySwimSurfaceBuoyancy = 1.50f;
    this->MySwimSurfaceSpeed = 370.00f;
    this->MySwimDiveLowSpeed = 300.00f;
    this->MySwimDiveHighSpeed = 500.00f;
    this->MySwimDiveDiveSpeed = 500.00f;
    this->MySwimDiveRiseSpeed = 500.00f;
    this->MySwimDashSpeed = 1250.00f;
    this->MySwimDashTime = 3.00f;
    this->MySwimDiveOxygenTime = 0.00f;
    this->MySwimDiveDashOxygenConsumeRate = 0.00f;
    this->MySwimDiveDashDisableInputTime = 0.50f;
    this->MySwimDivingHighSpeedMoveRotSpeedYaw = 360.00f;
    this->MySwimDivingHighSpeedMoveRotSpeedPitch = 360.00f;
    this->m_pSwimDivingCamera = NULL;
    this->MyFlyMotion = TPF_GLIDE;
    this->MyJumpMotion = TPJ_NORMAL;
    this->bDispDebugInfo = false;
    this->bDispNetDebugInfo = false;
    this->bDebugDisableGameOver = false;
    this->m_bAlwaysEnableWallRun = false;
    this->m_bDebugWallRunStartOff = false;
    this->m_bDebugDisableFriend = false;
    this->m_bDebugShooterModeInputType = false;
    this->m_bWallTurnWithoutAnim = false;
    this->m_bDebugHighJump = 0;
    this->m_bDebug2ndJump = false;
    this->m_bDebugDodge = false;
    this->m_bDebugAirDodge = false;
    this->m_bDebugRiskDodge = false;
    this->m_bDebugSuperJump = false;
    this->m_bDebugSuperSlideLv = 0;
    this->m_bDebugPoleSpin = false;
    this->m_bDebugPoleSwing = false;
    this->m_bDebugWallKick = false;
    this->m_bDebugEnemyTurn = false;
    this->m_bDebugAirRecovery = false;
    this->m_bDebugBlowCounter = false;
    this->m_bDebugAirRecoveryInputChange = false;
    this->m_bDebugGuard = false;
    this->m_bDebugGuardCounter = false;
    this->m_bDebugRevengeImpact = false;
    this->m_bDebugRevengeDive = false;
    this->m_bDebugRevengeEx = false;
    this->m_bDebugDodgeCounter = false;
    this->m_bDebugComboMaster = false;
    this->m_bDebugComboPlus = 0;
    this->m_bDebugAirComboPlus = 0;
    this->m_bDebugFinTriple = false;
    this->m_bDebugFinThrust = false;
    this->m_bDebugFinFlash = false;
    this->m_bDebugFinDown = false;
    this->m_bDebugLaunchSpin = false;
    this->m_bDebugAirRollBeat = false;
    this->m_bDebugFinDonald1 = false;
    this->m_bDebugFinDonald2 = false;
    this->m_bDebugFinDonald3 = false;
    this->m_bDebugFinGoofy1 = false;
    this->m_bDebugFinGoofy2 = false;
    this->m_bDebugSonicSlash = false;
    this->m_bDebugSonicJump = false;
    this->m_bDebugSonicTurn = false;
    this->m_bDebugSonicWheel = false;
    this->m_bDebugAttractionVS = false;
    this->m_bDebugAttractionBM = false;
    this->m_bDebugAttractionSM = false;
    this->m_bDebugAttractionSC = false;
    this->m_bDebugAttractionMG = false;
    this->m_bDebugAttractionTC = false;
    this->m_bDebugAttractionAS = false;
    this->m_bDebugAttractionWS = false;
    this->m_bDebugAttractionFF = false;
    this->m_bDebugShieldAutoGrowUp = false;
    this->m_bDebugMpCharge = false;
    this->m_bDebugFpCharge = false;
    this->m_bDebugChargeBerserkTest = false;
    this->m_bDebugCuragan = false;
    this->m_fDebugAttackMoveLimit = 0.00f;
    this->m_bDebugForceUseSpawnPointVolume = false;
    this->m_bDebugDispNearSpawnPoint = false;
    this->m_nDebugTestMode = 0;
    this->m_AthleticRoot = NULL;
    this->m_bFriendDisableAutoCreate = false;
    this->m_FriendAIThinkType = ESQEX_AI_ThinkType::SQEX_AI_THINK_TYPE_NORMAL;
    this->m_LoadAsset = NULL;
    this->m_GameStartChrLevel = 0;
    this->m_bEnableWeaponChangeEquip = true;
    this->m_RestrictWeaponModeAnimSet = NULL;
    this->MyFriendComboFinishRange = 0.00f;
    this->MyFriendComboFinishRangeHalf = 0.00f;
    this->MyFriendComboFinishRangeNear = 0.00f;
    this->MyFriendComboFinishAddRate = 0;
    this->MyFriendComboFinishAddRateRange = 0;
    this->MyFriendComboFinishAddRateRangeHalf = 0;
    this->MyFriendComboFinishAddRateRangeNear = 0;
    this->m_pFireEffect = NULL;
    this->m_pHopEffect = NULL;
    this->m_pPoleEffect = NULL;
    this->m_pPoleEffectH = NULL;
    this->m_pWallRunEffect = NULL;
    this->m_pSprintEffect = NULL;
    this->m_pAthleticHitEffect = NULL;
    this->m_LensEffectClass = NULL;
    this->m_pFocusAspirEffect = NULL;
    this->m_pSwanDiveEffect = NULL;
    this->m_pGuardReflectEffect = NULL;
    this->m_pJustGuardEffect = NULL;
    this->m_pCriticalCounterHitEffect = NULL;
    this->m_pCoverShotDestroyEffect = NULL;
    this->m_AntiFormEffect = NULL;
    this->MyDarkScreenRate = 0.50f;
    this->m_bDebugHitStop = false;
    this->MyHitStopTimeSmall = 0.02f;
    this->MyHitStopTimeBig = 0.05f;
    this->m_pSpawnPointDistanceScorer = NULL;
    this->m_pSpawnPointFilter = NULL;
    this->m_PlayerUniqueID = ETresPlayerUniqueID::SORA_KH3;
    this->m_pDeathSentenceCountEffect = NULL;
}

