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

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void SimulateKeypress(const FKey& Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void NotifyStartActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void NotifySetDlcChallengeCodeEnable(ETresDlcChallengeCode InCode) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	bool NotifySetDiveAttackCommand(class UTresLockonTargetComponent* InTarget) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void NotifySetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, class UTresUICommandInfoBase* pUICommandInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void NotifyResetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void NotifyEndActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugWallKick(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugUseMP0() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugTestMode(int32 InMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSuperSlideLv(int32 InLv) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSuperJump(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugStartPlayerWarpMode() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSituationTimerInfinity(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowStyleInfo(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowProjectileInfo(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerWallRunCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerSlopeSlideCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerLockon() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerHUD(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerHoppingCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerExternalExposure() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerCollisionCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerClimbingCheck() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowPlayerAnimationInfo(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowNetPlayerHUD(bool bDispEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugShowFriend(bool disp) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetWarpDelayCamera(float InRate, float InLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetWandanyanParam(float InSpeed, float InCamAimZ, float InCamDist, float InCamPitch, float InCamAngle) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetWandanyanJumpRate(float InLv1, float InLv2, float InLv3, float InLv4, float InLv5) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetWallTurnWithoutAnim(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetWallRunParam(float fSideAngle, float fDownAngle, float fSideMoveSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetStyleTimeLimit(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetStylePointAddWithoutHit(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetStylePoint(int inSP, int inAttrP, int inAttrF, int inAttrB, int inAttrT, int inAttrW, int inAttrA, int inAttrD, int inAttrN) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetStyleFix(int inStyle) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetStyleCommandEntryTime(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetStyleChangeChargeEffect(int InLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetSprintMode(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetSonicAttackMode(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetSmallJumpGravityScale(float fGravityScale) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetShootLockSlowRate(float InRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetShootFlow(int inShootFlowId) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetShooterModeInputType(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetShieldAutoGrowup(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetRiseAttackParam(float fThreshold, float fRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetPlayerSlopeSlideParam(float MaxSpeed, float AccTime, float MinSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetPlayerPos(float InX, float InY, float InZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetPlayerExternalExposureColor(float InR, float InG, float InB, float InA) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetIgnoreShootLockModeTimer(bool InIgnore) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetHPPer(int HP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetHP(int HP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetHopRotateMode(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetGlobalGameSpeed(float InSpeed, float InInterpTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetFriendHP(int Index, int HP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetFriend(int inIdx, const FName& inNpcName) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetFocusPoint(int InFP) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetFinishAutoPopup(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetFinish(int32 InId, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetEnableDiveFall(bool bEnable, float inPitch, float inDist, float inAngle, float InOffset) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetDiveFallStartHeight(float fHeight) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetDiveFallMovement(float inRotateScale, float InGravityScale, float inMoveSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetDarkScreenRate(float InRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetDamageEndChancelTime(float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetComboPlus(int InGround, int InAir) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAttraction(int32 InId, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAttackMoveLimit(float fDist) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAttackFirstAirMoveRate(float fRate) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAttackCollType(const FName& InName) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAthleticVersion(int32 InVersion, float inRootSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAthleticSlideParam(float InTime, float InSpeed, float inKickAnim) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAthleticLockonRange(float InRange) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAthleticLockonLimit(float InLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAthleticDelayCamera(float InRate, float InLimit, int InMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAthleticAttackParam(float inSlowRate, float inSlowTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetAllFriendFinish(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugSet2ndJumpParam(float fEnableMinVZ) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugRiskDodge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugRevengeImpact(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugRevengeEx(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugRevengeDive(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugResetPlayerLocation() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugProjectileLimitOff() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPoleSwing(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPoleSpin(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPlayerWarpToTaggedPlayerStart(const FName& InTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPlayerWallRunStartOff(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPlayerPad(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPlayerNoCheckUnWalkable() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPlayerNoCheckAutoRun() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPlayerForceL1Cancel(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugPlayerControllerStop() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugMpCharge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugModePlayerClimbing() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugInfinityJump(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugHighJump(int32 InLv) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugGuardCounter(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugGuard(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugGlide(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugFriendsWarp() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugFpCharge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugFPAutoRecovery() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugForceUseSpawnPointVolume(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnemyTurn(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnableWaterMagic(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnableShootLockonMax() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerWallRun(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerNoHpDamage(bool bNoHpDamage) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerNoDamageResponse(bool bNoDamageResponse) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerLookAt(int InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerInvincible(bool bInvincible) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerIK(int InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerControl(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnablePlayerClimbing(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnableHighQualityScreenShot(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnableFestivalDanceCmd(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugEnableCommandMenu(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDodgeCounter(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDodge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDispPrizeRange(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDispNearSpawnPoint(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDisableGameOver(bool bDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDisableDarkScreen(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDeleteFriendAll() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugDamageBlowTest() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugCreateRollerCoaster() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugCreateFriend() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugComboMaster(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugChargeBerserkTest(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugChangeWearform(int InForm) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugChangeNextWeaponForm() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugChangeNextProjectile() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugChangeFriendPadControl(int Index, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugChangeDecoParts(int InPartIdx, int InItemID) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugBlowCounter(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugAirRecoveryInputChange(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugAirRecovery(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugAirDodge(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugAddStylePoint(float inAddPoint, int inAttr) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void DebugAddFriendPoint(float inAddPoint) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void Debug2ndJump(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_TresCinematicDelayRunWalkStop(float fDelayRunStop, float fDelayWalkStop, float fForceYawRate, float fForceYaw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_TresCinematicDelayRunStop(float fDelayRunStop, bool bForceYaw, float fForceYaw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetShootLockonLimit(float InShootLockonLimit) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictWeapon(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictStyle(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictSituation(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictShootLock(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictRun(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictMagic(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictLink(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictJump(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictItem(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictGuard(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictFriend(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictDiveFall(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictAttraction(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictAttack(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetRestrictAntiForm(bool bRestrict) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetNearTargetSingle(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetManualLockonLimit(float InManualLockonLimit, float InManualLockonOff) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetLookAtActor(class AActor* inActor) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetForceEnemyHpKeep(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetDisableRestrictVolumeDetect(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetDisableManualLockon(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetDisableGimmickLockon(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetDisableAutoLockon(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityWallRun(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityStyleChange(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityShortCutMenu(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityShootFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityMagic(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityFreeFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityAttractionFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityAttack(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityAthleticFlow(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbilityAirSlide(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_SetAbility2ndJump(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_ResetShootLockonLimit() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_ResetManualLockonLimit() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_ResetLookAtActor() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	bool BP_NotifyStartSpecialAntiForm() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifySetSpecialAction(bool inSw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifySetFloatingMode(bool IsOn, bool IsSpecial) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifySetAntiFormCommand() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifySetActionCommand1(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, class AActor* inActor, class UPrimitiveComponent* InComponent) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifyResetSpecialCommand() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifyRegisterEnemyGaugeTarget(class ATresCharPawnBase* InTarget) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifyPauseSituationTimer(bool IsOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifyPauseActionCommandTimer(bool IsOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand) {};

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerBase")
	bool BP_IsNowNoSpeak() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerBase")
	bool BP_IsNowAntiForm() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerBase")
	bool BP_IsDisableManualLockon() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerBase")
	bool BP_IsDisableAutoLockon() { return false; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerBase")
	class AActor* BP_GetShootFlowTargetActor_AvatarRush() { return nullptr; };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerBase")
	TEnumAsByte<ETresShootFlowKind> BP_GetPlayShootFlow() { return TEnumAsByte<ETresShootFlowKind>(); };

	UFUNCTION(Blueprintpure, Category = "TresPlayerControllerBase")
	TEnumAsByte<ETresCommandKind> BP_GetPlayActionCommand() { return TEnumAsByte<ETresCommandKind>(); };

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_EndManualLockon() {};

	UFUNCTION(BlueprintCallable, Category = "TresPlayerControllerBase")
	void BP_DebugAbilityEnable(bool InEnable) {};
};
