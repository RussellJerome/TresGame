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

UCLASS()
class ATresPlayerControllerBase : public ATresPlayerControllerLowerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    uint8 m_bDebugProjectileInfo: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugShowPlayerCollisionCheck: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugPlayerNoCheckAutoRun: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugPlayerNoCheckUnWalkable: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugShowPlayerClimbingCheck: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugShowPlayerWallRunCheck: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugShowPlayerSlopeSlideCheck: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugShowPlayerHoppingCheck: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugShowPlayerLockon: 1;
    
    UPROPERTY(Config)
    uint8 m_bDebugShowPlayerExternalExposure: 1;
    
protected:
    UPROPERTY(Transient)
    ATresCameraShootFlow* m_CameraShootFlow;
    
    UPROPERTY(Transient)
    ATresCameraPreview* m_CameraPreview;
    
    UPROPERTY(Transient)
    UTresUICommandInfoBase* m_pUICommandInfo;
    
    UPROPERTY()
    ATresCameraMultiLock* m_CameraMultiLock;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_pAthleticFlowStartPointDispComponent;
    
    UPROPERTY()
    AActor* m_pAttackCameraTarget;
    
    UPROPERTY()
    TArray<ATresProjectileBase*> m_AvaterProjList;
    
public:
    ATresPlayerControllerBase();
    UFUNCTION(BlueprintCallable)
    void SimulateKeypress(FKey Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad);
    
    UFUNCTION(Exec)
    void NotifyStartActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec)
    void NotifySetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NotifySetDlcChallengeCodeEnable(ETresDlcChallengeCode InCode);
    
    UFUNCTION(Exec)
    bool NotifySetDiveAttackCommand(UTresLockonTargetComponent* InTarget);
    
    UFUNCTION(Exec)
    void NotifySetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer, UTresUICommandInfoBase* pUICommandInfo);
    
    UFUNCTION(Exec)
    void NotifyResetSpecialCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec)
    void NotifyEndActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec)
    void NotifyDeleteActionCommand(TEnumAsByte<ETresCommandKind> inCommand);
    
    UFUNCTION(Exec)
    void DebugWallKick(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugUseMP0();
    
    UFUNCTION(Exec)
    void DebugTestMode(uint32 InMode);
    
    UFUNCTION(Exec)
    void DebugSuperSlideLv(uint32 InLv);
    
    UFUNCTION(Exec)
    void DebugSuperJump(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugStartPlayerWarpMode();
    
    UFUNCTION(Exec)
    void DebugSituationTimerInfinity(bool bEnable);
    
    UFUNCTION(Exec)
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
    
    UFUNCTION(Exec)
    void DebugShowFriend(bool disp);
    
    UFUNCTION(Exec)
    void DebugSetWarpDelayCamera(float InRate, float InLimit);
    
    UFUNCTION(Exec)
    void DebugSetWandanyanParam(float InSpeed, float InCamAimZ, float InCamDist, float InCamPitch, float InCamAngle);
    
    UFUNCTION(Exec)
    void DebugSetWandanyanJumpRate(float InLv1, float InLv2, float InLv3, float InLv4, float InLv5);
    
    UFUNCTION(Exec)
    void DebugSetWallTurnWithoutAnim(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetWallRunParam(float fSideAngle, float fDownAngle, float fSideMoveSpeed);
    
    UFUNCTION(Exec)
    void DebugSetStyleTimeLimit(float InTime);
    
    UFUNCTION(Exec)
    void DebugSetStylePointAddWithoutHit(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetStylePoint(int32 inSP, int32 inAttrP, int32 inAttrF, int32 inAttrB, int32 inAttrT, int32 inAttrW, int32 inAttrA, int32 inAttrD, int32 inAttrN);
    
    UFUNCTION(Exec)
    void DebugSetStyleFix(int32 inStyle);
    
    UFUNCTION(Exec)
    void DebugSetStyleCommandEntryTime(float InTime);
    
    UFUNCTION(Exec)
    void DebugSetStyleChangeChargeEffect(int32 InLevel);
    
    UFUNCTION(Exec)
    void DebugSetSprintMode(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetSonicAttackMode(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetSmallJumpGravityScale(float fGravityScale);
    
    UFUNCTION(Exec)
    void DebugSetShootLockSlowRate(float InRate);
    
    UFUNCTION(Exec)
    void DebugSetShootFlow(int32 inShootFlowId);
    
    UFUNCTION(Exec)
    void DebugSetShooterModeInputType(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetShieldAutoGrowup(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetRiseAttackParam(float fThreshold, float fRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPlayerSlopeSlideParam(float MaxSpeed, float AccTime, float MinSpeed);
    
    UFUNCTION(Exec)
    void DebugSetPlayerPos(float InX, float InY, float InZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPlayerExternalExposureColor(uint8 InR, uint8 InG, uint8 InB, uint8 InA);
    
    UFUNCTION(Exec)
    void DebugSetIgnoreShootLockModeTimer(bool InIgnore);
    
    UFUNCTION(Exec)
    void DebugSetHPPer(int32 HP);
    
    UFUNCTION(Exec)
    void DebugSetHP(int32 HP);
    
    UFUNCTION(Exec)
    void DebugSetHopRotateMode(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetGlobalGameSpeed(float InSpeed, float InInterpTime);
    
    UFUNCTION(Exec)
    void DebugSetFriendHP(int32 Index, int32 HP);
    
    UFUNCTION(Exec)
    void DebugSetFriend(int32 inIdx, FName inNpcName);
    
    UFUNCTION(Exec)
    void DebugSetFocusPoint(int32 InFP);
    
    UFUNCTION(Exec)
    void DebugSetFinishAutoPopup(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetFinish(uint32 InId, bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetEnableDiveFall(bool bEnable, float inPitch, float inDist, float inAngle, float InOffset);
    
    UFUNCTION(Exec)
    void DebugSetDiveFallStartHeight(float fHeight);
    
    UFUNCTION(Exec)
    void DebugSetDiveFallMovement(float inRotateScale, float InGravityScale, float inMoveSpeed);
    
    UFUNCTION(Exec)
    void DebugSetDarkScreenRate(float InRate);
    
    UFUNCTION(Exec)
    void DebugSetDamageEndChancelTime(float InTime);
    
    UFUNCTION(Exec)
    void DebugSetComboPlus(int32 InGround, int32 InAir);
    
    UFUNCTION(Exec)
    void DebugSetAttraction(uint32 InId, bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetAttackMoveLimit(float fDist);
    
    UFUNCTION(Exec)
    void DebugSetAttackFirstAirMoveRate(float fRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetAttackCollType(FName InName);
    
    UFUNCTION(Exec)
    void DebugSetAthleticVersion(uint32 InVersion, float inRootSpeed);
    
    UFUNCTION(Exec)
    void DebugSetAthleticSlideParam(float InTime, float InSpeed, float inKickAnim);
    
    UFUNCTION(Exec)
    void DebugSetAthleticLockonRange(float InRange);
    
    UFUNCTION(Exec)
    void DebugSetAthleticLockonLimit(float InLimit);
    
    UFUNCTION(Exec)
    void DebugSetAthleticDelayCamera(float InRate, float InLimit, int32 InMode);
    
    UFUNCTION(Exec)
    void DebugSetAthleticAttackParam(float inSlowRate, float inSlowTime);
    
    UFUNCTION(Exec)
    void DebugSetAllFriendFinish(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetActionCommand(TEnumAsByte<ETresCommandKind> inCommand, float inTimer);
    
    UFUNCTION(Exec)
    void DebugSet2ndJumpParam(float fEnableMinVZ);
    
    UFUNCTION(Exec)
    void DebugRiskDodge(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugRevengeImpact(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugRevengeEx(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugRevengeDive(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugResetPlayerLocation();
    
    UFUNCTION(Exec)
    void DebugProjectileLimitOff();
    
    UFUNCTION(Exec)
    void DebugPoleSwing(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugPoleSpin(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugPlayerWarpToTaggedPlayerStart(FName InTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerWallRunStartOff(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugPlayerPad(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerNoCheckUnWalkable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPlayerNoCheckAutoRun();
    
    UFUNCTION(Exec)
    void DebugPlayerForceL1Cancel(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugPlayerControllerStop();
    
    UFUNCTION(Exec)
    void DebugMpCharge(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugModePlayerClimbing();
    
    UFUNCTION(Exec)
    void DebugInfinityJump(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugHighJump(uint32 InLv);
    
    UFUNCTION(Exec)
    void DebugGuardCounter(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugGuard(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugGlide(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendsWarp();
    
    UFUNCTION(Exec)
    void DebugFpCharge(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFPAutoRecovery();
    
    UFUNCTION(Exec)
    void DebugForceUseSpawnPointVolume(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyTurn(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnableWaterMagic(bool InEnable);
    
    UFUNCTION(Exec)
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
    
    UFUNCTION(Exec)
    void DebugEnableHighQualityScreenShot(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnableFestivalDanceCmd(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableCommandMenu(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugDodgeCounter(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugDodge(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugDispPrizeRange(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugDispNearSpawnPoint(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDisableGameOver(bool bDisable);
    
    UFUNCTION(Exec)
    void DebugDisableDarkScreen(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugDeleteFriendAll();
    
    UFUNCTION(Exec)
    void DebugDamageBlowTest();
    
    UFUNCTION(Exec)
    void DebugCreateRollerCoaster();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateFriend();
    
    UFUNCTION(Exec)
    void DebugComboMaster(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugChargeBerserkTest(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeWearform(int32 InForm);
    
    UFUNCTION(Exec)
    void DebugChangeNextWeaponForm();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugChangeNextProjectile();
    
    UFUNCTION(Exec)
    void DebugChangeFriendPadControl(int32 Index, bool bEnable);
    
    UFUNCTION(Exec)
    void DebugChangeDecoParts(int32 InPartIdx, int32 InItemID);
    
    UFUNCTION(Exec)
    void DebugBlowCounter(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAirRecoveryInputChange(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAirRecovery(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAirDodge(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAddStylePoint(float inAddPoint, int32 inAttr);
    
    UFUNCTION(Exec)
    void DebugAddFriendPoint(float inAddPoint);
    
    UFUNCTION(Exec)
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

