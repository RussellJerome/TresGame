#pragma once
#include "CoreMinimal.h"
#include "TresPlayerControllerLowerBase.h"
#include "InputCoreTypes.h"
#include "ETresShootFlowKind.h"
#include "Engine/EngineBaseTypes.h"
#include "ETresCommandKind.h"
#include "ETresDlcChallengeCode.h"
#include "TresPlayerControllerBase.generated.h"

class ATresCameraPreview;
class AActor;
class UTresLockonTargetComponent;
class ATresCameraMultiLock;
class ATresCameraShootFlow;
class UTresUICommandInfoBase;
class ATresProjectileBase;
class UPrimitiveComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresPlayerControllerBase : public ATresPlayerControllerLowerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugProjectileInfo: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugShowPlayerCollisionCheck: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugPlayerNoCheckAutoRun: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugPlayerNoCheckUnWalkable: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugShowPlayerClimbingCheck: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugShowPlayerWallRunCheck: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugShowPlayerSlopeSlideCheck: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugShowPlayerHoppingCheck: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugShowPlayerLockon: 1;
    
    UPROPERTY(Config, BlueprintReadWrite, meta=(AllowPrivateAccess="true"))
    uint32 m_bDebugShowPlayerExternalExposure: 1;
    
protected:
    UPROPERTY(Transient, BlueprintReadWrite)
    ATresCameraShootFlow* m_CameraShootFlow;
    
    UPROPERTY(Transient, BlueprintReadWrite)
    ATresCameraPreview* m_CameraPreview;
    
    UPROPERTY(Transient, BlueprintReadWrite)
    UTresUICommandInfoBase* m_pUICommandInfo;
    
    UPROPERTY(BlueprintReadWrite)
    ATresCameraMultiLock* m_CameraMultiLock;
    
    UPROPERTY(Export, Transient, BlueprintReadWrite)
    UTresLockonTargetComponent* m_pAthleticFlowStartPointDispComponent;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* m_pAttackCameraTarget;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<ATresProjectileBase*> m_AvaterProjList;
    
public:
    ATresPlayerControllerBase();
    UFUNCTION(BlueprintCallable)
    void SimulateKeypress(FKey Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad);
    
    UFUNCTION(Exec, BlueprintCallable)
    void NotifyStartActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec, BlueprintCallable)
    void NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotifySetDlcChallengeCodeEnable(ETresDlcChallengeCode InCode);
    
    UFUNCTION(Exec, BlueprintCallable)
    bool NotifySetDiveAttackCommand(UTresLockonTargetComponent* InTarget);
    
    UFUNCTION(Exec, BlueprintCallable)
    void NotifySetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, UTresUICommandInfoBase* pUICommandInfo);
    
    UFUNCTION(Exec, BlueprintCallable)
    void NotifyResetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec, BlueprintCallable)
    void NotifyEndActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec, BlueprintCallable)
    void NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugWallKick(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugUseMP0();
    
    UFUNCTION(Exec)
    void DebugTestMode(uint32 InMode);
    
    UFUNCTION(Exec)
    void DebugSuperSlideLv(uint32 InLv);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSuperJump(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugStartPlayerWarpMode();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSituationTimerInfinity(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowStyleInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowProjectileInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerWallRunCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerSlopeSlideCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerLockon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerHUD(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerHoppingCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerExternalExposure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerCollisionCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerClimbingCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowPlayerAnimationInfo(bool bDispEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowNetPlayerHUD(bool bDispEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugShowFriend(bool disp);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetWarpDelayCamera(float InRate, float InLimit);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetWandanyanParam(float InSpeed, float InCamAimZ, float InCamDist, float InCamPitch, float InCamAngle);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetWandanyanJumpRate(float InLv1, float InLv2, float InLv3, float InLv4, float InLv5);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetWallTurnWithoutAnim(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetWallRunParam(float fSideAngle, float fDownAngle, float fSideMoveSpeed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetStyleTimeLimit(float InTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetStylePointAddWithoutHit(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetStylePoint(int32 inSP, int32 inAttrP, int32 inAttrF, int32 inAttrB, int32 inAttrT, int32 inAttrW, int32 inAttrA, int32 inAttrD, int32 inAttrN);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetStyleFix(int32 inStyle);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetStyleCommandEntryTime(float InTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetStyleChangeChargeEffect(int32 InLevel);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetSprintMode(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetSonicAttackMode(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetSmallJumpGravityScale(float fGravityScale);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetShootLockSlowRate(float InRate);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetShootFlow(int32 inShootFlowId);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetShooterModeInputType(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetShieldAutoGrowup(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetRiseAttackParam(float fThreshold, float fRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPlayerSlopeSlideParam(float MaxSpeed, float AccTime, float MinSpeed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetPlayerPos(float InX, float InY, float InZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPlayerExternalExposureColor(uint8 InR, uint8 InG, uint8 InB, uint8 InA);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetIgnoreShootLockModeTimer(bool InIgnore);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetHPPer(int32 HP);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetHP(int32 HP);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetHopRotateMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetGlobalGameSpeed(float InSpeed, float InInterpTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetFriendHP(int32 Index, int32 HP);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetFriend(int32 inIdx, FName inNpcName);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetFocusPoint(int32 InFP);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetFinishAutoPopup(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetFinish(uint32 InId, bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetEnableDiveFall(bool bEnable, float inPitch, float inDist, float inAngle, float InOffset);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDiveFallStartHeight(float fHeight);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDiveFallMovement(float inRotateScale, float InGravityScale, float inMoveSpeed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDarkScreenRate(float InRate);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetDamageEndChancelTime(float InTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetComboPlus(int32 InGround, int32 InAir);
    
    UFUNCTION(Exec)
    void DebugSetAttraction(uint32 InId, bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAttackMoveLimit(float fDist);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAttackFirstAirMoveRate(float fRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAttackCollType(FName InName);
    
    UFUNCTION(Exec)
    void DebugSetAthleticVersion(uint32 InVersion, float inRootSpeed);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAthleticSlideParam(float InTime, float InSpeed, float inKickAnim);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAthleticLockonRange(float InRange);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAthleticLockonLimit(float InLimit);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAthleticDelayCamera(float InRate, float InLimit, int32 InMode);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAthleticAttackParam(float inSlowRate, float inSlowTime);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetAllFriendFinish(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugSet2ndJumpParam(float fEnableMinVZ);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugRiskDodge(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugRevengeImpact(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugRevengeEx(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugRevengeDive(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugResetPlayerLocation();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugProjectileLimitOff();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPoleSwing(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPoleSpin(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPlayerWarpToTaggedPlayerStart(FName InTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerWallRunStartOff(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPlayerPad(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerNoCheckUnWalkable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerNoCheckAutoRun();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPlayerForceL1Cancel(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugPlayerControllerStop();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugMpCharge(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugModePlayerClimbing();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugInfinityJump(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugHighJump(uint32 InLv);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugGuardCounter(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugGuard(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugGlide(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFriendsWarp();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFpCharge(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugFPAutoRecovery();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugForceUseSpawnPointVolume(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnemyTurn(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableWaterMagic(bool InEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableShootLockonMax();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerWallRun(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerNoHpDamage(bool bNoHpDamage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerNoDamageResponse(bool bNoDamageResponse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerLookAt(int32 InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerInvincible(bool bInvincible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerIK(int32 InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerControl(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnablePlayerClimbing(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableHighQualityScreenShot(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugEnableFestivalDanceCmd(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableCommandMenu(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDodgeCounter(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDodge(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDispPrizeRange(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDispNearSpawnPoint(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDisableGameOver(bool bDisable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDisableDarkScreen(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDeleteFriendAll();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugDamageBlowTest();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugCreateRollerCoaster();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateFriend();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugComboMaster(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugChargeBerserkTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeWearform(int32 InForm);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugChangeNextWeaponForm();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeNextProjectile();
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugChangeFriendPadControl(int32 Index, bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugChangeDecoParts(int32 InPartIdx, int32 InItemID);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugBlowCounter(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAirRecoveryInputChange(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAirRecovery(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAirDodge(bool bEnable);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAddStylePoint(float inAddPoint, int32 inAttr);
    
    UFUNCTION(Exec, BlueprintCallable)
    void DebugAddFriendPoint(float inAddPoint);
    
    UFUNCTION(Exec, BlueprintCallable)
    void Debug2ndJump(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_TresCinematicDelayRunWalkStop(float fDelayRunStop, float fDelayWalkStop, float fForceYawRate, float fForceYaw);
    
    UFUNCTION(BlueprintCallable)
    void BP_TresCinematicDelayRunStop(float fDelayRunStop, bool bForceYaw, float fForceYaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetShootLockonLimit(float InShootLockonLimit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictWeapon(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictStyle(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictSituation(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictShootLock(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictRun(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictMagic(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictLink(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictJump(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictItem(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictGuard(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictFriend(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictDiveFall(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictAttraction(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictAttack(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetRestrictAntiForm(bool bRestrict);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetNearTargetSingle(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetManualLockonLimit(float InManualLockonLimit, float InManualLockonOff);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLookAtActor(AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetForceEnemyHpKeep(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableRestrictVolumeDetect(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableManualLockon(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableGimmickLockon(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetDisableAutoLockon(bool InDisable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityWallRun(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityStyleChange(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityShortCutMenu(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityShootFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityMagic(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityFreeFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAttractionFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAttack(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAthleticFlow(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbilityAirSlide(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_SetAbility2ndJump(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_ResetShootLockonLimit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_ResetManualLockonLimit();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLookAtActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool BP_NotifyStartSpecialAntiForm();
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_NotifySetSpecialAction(bool inSw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_NotifySetFloatingMode(bool IsOn, bool IsSpecial);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_NotifySetAntiFormCommand();
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifySetActionCommand1(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, AActor* inActor, UPrimitiveComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyResetSpecialCommand();
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyRegisterEnemyGaugeTarget(ATresCharPawnBase* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyPauseSituationTimer(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyPauseActionCommandTimer(bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintPure, Exec)
    bool BP_IsNowNoSpeak() const;
    
    UFUNCTION(BlueprintPure, Exec)
    bool BP_IsNowAntiForm() const;
    
    UFUNCTION(BlueprintPure, Exec)
    bool BP_IsDisableManualLockon() const;
    
    UFUNCTION(BlueprintPure, Exec)
    bool BP_IsDisableAutoLockon() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* BP_GetShootFlowTargetActor_AvatarRush();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ETresShootFlowKind> BP_GetPlayShootFlow();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ETresCommandKind> BP_GetPlayActionCommand();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndManualLockon();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BP_DebugAbilityEnable(bool InEnable);
    
};

