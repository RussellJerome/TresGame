// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPlayerControllerLowerBase.h"
#include "TresGame_StructsAndEnums.h"
#include "TresPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPlayerControllerBase : public ATresPlayerControllerLowerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugProjectileInfo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugShowPlayerCollisionCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugPlayerNoCheckAutoRun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugPlayerNoCheckUnWalkable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugShowPlayerClimbingCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugShowPlayerWallRunCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugShowPlayerSlopeSlideCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugShowPlayerHoppingCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugShowPlayerLockon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	bool m_bDebugShowPlayerExternalExposure;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	class ATresCameraShootFlow* m_CameraShootFlow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	class ATresCameraPreview* m_CameraPreview;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	class UTresUICommandInfoBase* m_pUICommandInfo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	class ATresCameraMultiLock* m_CameraMultiLock;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	class UTresLockonTargetComponent* m_pAthleticFlowStartPointDispComponent;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	class AActor* m_pAttackCameraTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerControllerBase")
	TArray<class ATresProjectileBase*> m_AvaterProjList;


	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void SimulateKeypress(const FKey& Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void NotifyStartActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void NotifySetDlcChallengeCodeEnable(ETresDlcChallengeCode InCode) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	bool NotifySetDiveAttackCommand(class UTresLockonTargetComponent* InTarget) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void NotifySetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, class UTresUICommandInfoBase* pUICommandInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void NotifyResetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void NotifyEndActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugWallKick(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugUseMP0() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugTestMode(int32 InMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSuperSlideLv(int32 InLv) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSuperJump(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugStartPlayerWarpMode() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSituationTimerInfinity(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowStyleInfo(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowProjectileInfo(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerWallRunCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerSlopeSlideCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerLockon() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerHUD(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerHoppingCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerExternalExposure() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerCollisionCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerClimbingCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowPlayerAnimationInfo(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowNetPlayerHUD(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugShowFriend(bool disp) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetWarpDelayCamera(float InRate, float InLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetWandanyanParam(float InSpeed, float InCamAimZ, float InCamDist, float InCamPitch, float InCamAngle) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetWandanyanJumpRate(float InLv1, float InLv2, float InLv3, float InLv4, float InLv5) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetWallTurnWithoutAnim(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetWallRunParam(float fSideAngle, float fDownAngle, float fSideMoveSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetStyleTimeLimit(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetStylePointAddWithoutHit(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetStylePoint(int inSP, int inAttrP, int inAttrF, int inAttrB, int inAttrT, int inAttrW, int inAttrA, int inAttrD, int inAttrN) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetStyleFix(int inStyle) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetStyleCommandEntryTime(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetStyleChangeChargeEffect(int InLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetSprintMode(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetSonicAttackMode(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetSmallJumpGravityScale(float fGravityScale) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetShootLockSlowRate(float InRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetShootFlow(int inShootFlowId) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetShooterModeInputType(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetShieldAutoGrowup(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetRiseAttackParam(float fThreshold, float fRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetPlayerSlopeSlideParam(float MaxSpeed, float AccTime, float MinSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetPlayerPos(float InX, float InY, float InZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetPlayerExternalExposureColor(float InR, float InG, float InB, float InA) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetIgnoreShootLockModeTimer(bool InIgnore) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetHPPer(int HP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetHP(int HP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetHopRotateMode(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetGlobalGameSpeed(float InSpeed, float InInterpTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetFriendHP(int Index, int HP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetFriend(int inIdx, const FName& inNpcName) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetFocusPoint(int InFP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetFinishAutoPopup(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetFinish(int32 InId, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetEnableDiveFall(bool bEnable, float inPitch, float inDist, float inAngle, float InOffset) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetDiveFallStartHeight(float fHeight) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetDiveFallMovement(float inRotateScale, float InGravityScale, float inMoveSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetDarkScreenRate(float InRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetDamageEndChancelTime(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetComboPlus(int InGround, int InAir) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAttraction(int32 InId, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAttackMoveLimit(float fDist) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAttackFirstAirMoveRate(float fRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAttackCollType(const FName& InName) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAthleticVersion(int32 InVersion, float inRootSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAthleticSlideParam(float InTime, float InSpeed, float inKickAnim) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAthleticLockonRange(float InRange) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAthleticLockonLimit(float InLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAthleticDelayCamera(float InRate, float InLimit, int InMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAthleticAttackParam(float inSlowRate, float inSlowTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetAllFriendFinish(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugSet2ndJumpParam(float fEnableMinVZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugRiskDodge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugRevengeImpact(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugRevengeEx(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugRevengeDive(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugResetPlayerLocation() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugProjectileLimitOff() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPoleSwing(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPoleSpin(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPlayerWarpToTaggedPlayerStart(const FName& InTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPlayerWallRunStartOff(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPlayerPad(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPlayerNoCheckUnWalkable() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPlayerNoCheckAutoRun() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPlayerForceL1Cancel(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugPlayerControllerStop() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugMpCharge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugModePlayerClimbing() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugInfinityJump(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugHighJump(int32 InLv) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugGuardCounter(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugGuard(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugGlide(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugFriendsWarp() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugFpCharge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugFPAutoRecovery() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugForceUseSpawnPointVolume(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnemyTurn(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnableWaterMagic(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnableShootLockonMax() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerWallRun(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerNoHpDamage(bool bNoHpDamage) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerNoDamageResponse(bool bNoDamageResponse) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerLookAt(int InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerInvincible(bool bInvincible) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerIK(int InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerControl(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnablePlayerClimbing(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnableHighQualityScreenShot(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnableFestivalDanceCmd(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugEnableCommandMenu(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDodgeCounter(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDodge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDispPrizeRange(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDispNearSpawnPoint(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDisableGameOver(bool bDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDisableDarkScreen(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDeleteFriendAll() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugDamageBlowTest() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugCreateRollerCoaster() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugCreateFriend() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugComboMaster(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugChargeBerserkTest(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugChangeWearform(int InForm) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugChangeNextWeaponForm() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugChangeNextProjectile() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugChangeFriendPadControl(int Index, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugChangeDecoParts(int InPartIdx, int InItemID) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugBlowCounter(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugAirRecoveryInputChange(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugAirRecovery(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugAirDodge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugAddStylePoint(float inAddPoint, int inAttr) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void DebugAddFriendPoint(float inAddPoint) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void Debug2ndJump(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_TresCinematicDelayRunWalkStop(float fDelayRunStop, float fDelayWalkStop, float fForceYawRate, float fForceYaw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_TresCinematicDelayRunStop(float fDelayRunStop, bool bForceYaw, float fForceYaw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetShootLockonLimit(float InShootLockonLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictWeapon(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictStyle(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictSituation(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictShootLock(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictRun(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictMagic(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictLink(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictJump(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictItem(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictGuard(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictFriend(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictDiveFall(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictAttraction(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictAttack(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetRestrictAntiForm(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetNearTargetSingle(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetManualLockonLimit(float InManualLockonLimit, float InManualLockonOff) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetLookAtActor(class AActor* inActor) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetForceEnemyHpKeep(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetDisableRestrictVolumeDetect(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetDisableManualLockon(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetDisableGimmickLockon(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetDisableAutoLockon(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityWallRun(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityStyleChange(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityShortCutMenu(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityShootFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityMagic(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityFreeFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityAttractionFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityAttack(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityAthleticFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbilityAirSlide(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_SetAbility2ndJump(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_ResetShootLockonLimit() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_ResetManualLockonLimit() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_ResetLookAtActor() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	bool BP_NotifyStartSpecialAntiForm() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifySetSpecialAction(bool inSw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifySetFloatingMode(bool IsOn, bool IsSpecial) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifySetAntiFormCommand() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifySetActionCommand1(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, class AActor* inActor, class UPrimitiveComponent* InComponent) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifyResetSpecialCommand() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifyRegisterEnemyGaugeTarget(class ATresCharPawnBase* InTarget) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifyPauseSituationTimer(bool IsOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifyPauseActionCommandTimer(bool IsOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerLowerBase")
	bool BP_IsNowNoSpeak() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerLowerBase")
	bool BP_IsNowAntiForm() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerLowerBase")
	bool BP_IsDisableManualLockon() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerLowerBase")
	bool BP_IsDisableAutoLockon() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerLowerBase")
	class AActor* BP_GetShootFlowTargetActor_AvatarRush() { return nullptr; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerLowerBase")
	TEnumAsByte<ETresShootFlowKind> BP_GetPlayShootFlow() { return TEnumAsByte<ETresShootFlowKind>(); };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerLowerBase")
	TEnumAsByte<ETresCommandKind> BP_GetPlayActionCommand() { return TEnumAsByte<ETresCommandKind>(); };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_EndManualLockon() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerLowerBase")
	void BP_DebugAbilityEnable(bool InEnable) {};
};
