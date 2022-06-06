#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "TresGameCheatManager.generated.h"

class ATresCharPawnBase;
class ATresEnemyPawnBase;

UCLASS()
class UTresGameCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UTresGameCheatManager();
    UFUNCTION(Exec)
    void UnlockAllPhotoHologram();
    
    UFUNCTION(Exec)
    void TresTeleport(FName InTag, bool bResetCamera, bool bStateClear);
    
    UFUNCTION(Exec)
    void TresSceneCapture(bool InIsEnableInvGamma);
    
    UFUNCTION(Exec)
    void ToggleHitchProfilerSmartphoneScreenshot();
    
    UFUNCTION(Exec)
    void ToggleHitchProfilerDebugScreenshot();
    
    UFUNCTION(Exec)
    void ShowOctreeDebugDraw(int32 Index);
    
    UFUNCTION(Exec)
    void ShowNavigationGroup(int32 Index);
    
    UFUNCTION(Exec)
    void ShowInfluenceMap(bool bEnabled);
    
    UFUNCTION(Exec)
    void ShowInfluenceEmitter(bool bEnabled);
    
    UFUNCTION(Exec)
    void ShowDebugAIBodyCollision(bool bEnabled);
    
    UFUNCTION(Exec)
    void SetPhotoHologramUseDebugMenu(bool bUse);
    
    UFUNCTION(Exec)
    void SetPhotoHologramEnableStopActorMeshBonamik(bool bEnable);
    
    UFUNCTION(Exec)
    void SetPhotoHologramEnableKeepActorMeshBonamikInEdit(bool bEnable);
    
    UFUNCTION(Exec)
    void SetPhotoHologramEnableInputPoseOffsetSupport(bool bEnable);
    
    UFUNCTION(Exec)
    void SetPhotoHologramDebugInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void SetPhotoHologramActorDebugInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void SetDebugShowDetectMarkerInfoFlag(int32 Type);
    
    UFUNCTION(Exec)
    void SetDebugShowDanceInfoFlag(int32 Type);
    
    UFUNCTION(Exec)
    void RemyMakeAllRecipeSuccess();
    
    UFUNCTION(Exec)
    void RemyMakeAllRecipeGreatSuccess();
    
    UFUNCTION(Exec)
    void PhotoHologramSetInverseRotationInput(bool bInverse);
    
    UFUNCTION(Exec)
    void PhotoHologramSetInverseRollInput(bool bInverse);
    
    UFUNCTION(Exec)
    void PhotoHologramSetInversePitchInput(bool bInverse);
    
    UFUNCTION(Exec)
    void PhotoHologramResetDataTableNewMarkIndex(int32 Type);
    
    UFUNCTION(Exec)
    void PhotoHologramAutoInputDataTableNewMarkIndex(int32 Type);
    
    UFUNCTION(Exec)
    void DebugVerumRexSetSec(float sec);
    
    UFUNCTION(Exec)
    void DebugVerumRexSetScore(int32 Score);
    
    UFUNCTION(Exec)
    void DebugVerumRexSetRank(int32 Rank);
    
    UFUNCTION(Exec)
    void DebugVerumRexSetContinuousChain(bool Enable);
    
    UFUNCTION(Exec)
    void DebugVerumRexSetChain(int32 chain);
    
    UFUNCTION(Exec)
    void DebugVehicleSpecialShipStockMax(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugVehicleSpecialShipDisableOsc(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugVehicleSpecialShipCompDebugDisp(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugVehicleSpecialShipCheckMode(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugVehicleSpecialShipCannonTrack(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugVehicleGigasLifeTimeLimit(float InTime);
    
    UFUNCTION(Exec)
    void DebugVehicleGigasEnemyGaugeDisp(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugVehicleGigasBoostMax(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugUIWipe(bool bOut, const FString& World);
    
    UFUNCTION(Exec)
    void DebugUIUnlockMenu(FName Name, bool Flag);
    
    UFUNCTION(Exec)
    void DebugUIUnloadAllUI();
    
    UFUNCTION(Exec)
    void DebugUIUnderWater(bool IntoWater);
    
    UFUNCTION(Exec)
    void DebugUIUltimaLock(int32 Command, float fGauge);
    
    UFUNCTION(Exec)
    void DebugUIStopFullscreenVideo();
    
    UFUNCTION(Exec)
    void DebugUISituationTimerInfinity(bool IsInfinity);
    
    UFUNCTION(Exec)
    void DebugUISimplexActionCommand(int32 nAction, int32 nKind, float fTimer);
    
    UFUNCTION(Exec)
    void DebugUIShowNaviMapInfo(bool bShow);
    
    UFUNCTION(Exec)
    void DebugUIShowMoviePlayerList(bool bShow);
    
    UFUNCTION(Exec)
    void DebugUIShowHudCommandSituation(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIShowAutoSave(bool IsShow);
    
    UFUNCTION(Exec)
    void DebugUIShowAllHud();
    
    UFUNCTION(Exec)
    void DebugUISetVisibleTargetStatus(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleSubtitle(bool Visible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleSRideHud(int32 nVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleSpecialShipHud(int32 nVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleSpecialShipGoalMarker(int32 nVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleSpecialShipGoalArrow(int32 nVisibleL, int32 nVisibleR);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleSpecialShipCannonScope(int32 nVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisiblePusuButton(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisiblePlayerStatus(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleOperationGuide(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleMapName(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleKairiCounter(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleInformation(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleGigasHudParts(int32 nVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleGigasHud(int32 nVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleBxMarker(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleBxLiveFeed(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetVisibleButtonNotice(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetTargetEnemy(bool onoff, bool IsTargetFix);
    
    UFUNCTION(Exec)
    void DebugUISetSubCommandCount(int32 Type, int32 count);
    
    UFUNCTION(Exec)
    void DebugUISetStylePointGauge(float StylePointGauge);
    
    UFUNCTION(Exec)
    void DebugUISetSRideHud(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipScopeType(int32 nType);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipRestrictCommand(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipHud(int32 nAction, int32 nMode);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipGoalMarker(int32 nPosX, int32 nPosY, int32 nDistance);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipGoalArrow(int32 nDistance);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipCannonScopePosition(float fPosX, float fPosY);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipAlert(int32 nAlert);
    
    UFUNCTION(Exec)
    void DebugUISetSpecialShipActionCommand(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetShortcutPage2(int32 Page, int32 Slot, const FString& KindName);
    
    UFUNCTION(Exec)
    void DebugUISetShortcutPage(int32 Page, int32 Slot, int32 Kind);
    
    UFUNCTION(Exec)
    void DebugUISetShortcutCommand(FName Key, int32 ShortcutType);
    
    UFUNCTION(Exec)
    void DebugUISetScoreHud(int32 nAction, int32 nKind, int32 nNum, int32 nRecord);
    
    UFUNCTION(Exec)
    void DebugUISetScoreChainBonus(float fRate, int32 nCounter);
    
    UFUNCTION(Exec)
    void DebugUISetScore(int32 nScore);
    
    UFUNCTION(Exec)
    void DebugUISetSaixStatus(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetSaixHud(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetSaixGauge(float fGauge);
    
    UFUNCTION(Exec)
    void DebugUISetRailScopeTargetPosition(float fPosX, float fPosY);
    
    UFUNCTION(Exec)
    void DebugUISetRailScopeHud(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetPushCommand(int32 nAction, int32 nType, int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetPuddingStartCountDown(int32 nCount);
    
    UFUNCTION(Exec)
    void DebugUISetPuddingFinishCountDown(int32 nCount);
    
    UFUNCTION(Exec)
    void DebugUISetPowerUpWindow(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetPlatform(const FString& Platform);
    
    UFUNCTION(Exec)
    void DebugUISetPlaneMissileCursor(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetPlaneHud(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetPlaneBossHud(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetOperationHud(int32 nAction, int32 nType);
    
    UFUNCTION(Exec)
    void DebugUISetOperationGuide(int32 nType);
    
    UFUNCTION(Exec)
    void DebugUISetNauticalChart(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetMainCommandRightIcon();
    
    UFUNCTION(Exec)
    void DebugUISetMagicSubCommand(FName Key);
    
    UFUNCTION(Exec)
    void DebugUISetLuxord(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetLinkSubCommand(FName Key);
    
    UFUNCTION(Exec)
    void DebugUISetLinkCommandNone(bool isNone);
    
    UFUNCTION(Exec)
    void DebugUISetKairiCounter(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetItemSubCommand(FName Key);
    
    UFUNCTION(Exec)
    void DebugUISetHudRightAll(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetHudRalphBlockStock(int32 SlotIndex, int32 Stock);
    
    UFUNCTION(Exec)
    void DebugUISetHudLeftAll(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetHudDrawDeubg(bool IsEnable);
    
    UFUNCTION(Exec)
    void DebugUISetHudCommandSneeze(int32 nMode);
    
    UFUNCTION(Exec)
    void DebugUISetHudCommandRestrictFinish(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetHudCommandRestrict(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetHudCommandExWorkshop(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetHudCommandExBaymax(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetHudCommandAttack(int32 nMode);
    
    UFUNCTION(Exec)
    void DebugUISetHpGigasHud(int32 nMode);
    
    UFUNCTION(Exec)
    void DebugUISetHitCountHud(int32 nAction, int32 nRecord);
    
    UFUNCTION(Exec)
    void DebugUISetHitCount(int32 nHit);
    
    UFUNCTION(Exec)
    void DebugUISetGigasHud(int32 nAction, int32 nId);
    
    UFUNCTION(Exec)
    void DebugUISetEnableGigasHudCharaMarkerLimitTypeAll(bool Enable);
    
    UFUNCTION(Exec)
    void DebugUISetEnableGigasHudCharaMarkerLimitNum(int32 Num);
    
    UFUNCTION(Exec)
    void DebugUISetEnableGigasHudCharaMarkerFriend(bool Enable);
    
    UFUNCTION(Exec)
    void DebugUISetEnableGigasHudCharaMarkerEnemy(bool Enable);
    
    UFUNCTION(Exec)
    void DebugUISetEnableFloatTexture(bool IsEnable);
    
    UFUNCTION(Exec)
    void DebugUISetEnableCommandEx(int32 nIndex, int32 nEnable);
    
    UFUNCTION(Exec)
    void DebugUISetDisplayScore(int32 nMode);
    
    UFUNCTION(Exec)
    void DebugUISetDisplayHitCount(int32 nMode);
    
    UFUNCTION(Exec)
    void DebugUISetDisableShootFlowCommandText(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugUISetDisableDraw(bool DisableDraw);
    
    UFUNCTION(Exec)
    void DebugUISetDanceResult(int32 nAction, int32 nRank);
    
    UFUNCTION(Exec)
    void DebugUISetDanceRapunzel(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUISetDanceHud(int32 nAction, int32 nRevisit, int32 nScore, int32 nChain);
    
    UFUNCTION(Exec)
    void DebugUISetDanceGauge(int32 nGauge, int32 nMax);
    
    UFUNCTION(Exec)
    void DebugUISetDanceChain(int32 nChain, int32 nRapunzel);
    
    UFUNCTION(Exec)
    void DebugUISetDanceAddedTime(float fTime);
    
    UFUNCTION(Exec)
    void DebugUISetDanceActionCommandMission(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetDanceActionCommand(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetCrabWindow(int32 nAction, int32 nNum);
    
    UFUNCTION(Exec)
    void DebugUISetCommandMagic(int32 Kind);
    
    UFUNCTION(Exec)
    void DebugUISetButtonCount(float Time);
    
    UFUNCTION(Exec)
    void DebugUISetBlackPearlChaseMeter(float fMeter, int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetBlackPearlChaseHud(int32 nAction, float fStart, float fGoal);
    
    UFUNCTION(Exec)
    void DebugUISetBaymaxScore(int32 nScore);
    
    UFUNCTION(Exec)
    void DebugUISetBaymaxResult(int32 nAction, int32 nRank);
    
    UFUNCTION(Exec)
    void DebugUISetBaymaxLiveFeed(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetBaymaxHud(int32 nAction, int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUISetBaymaxCountDown(int32 nCount);
    
    UFUNCTION(Exec)
    void DebugUISetBasicShortcut();
    
    UFUNCTION(Exec)
    void DebugUISetAllHudCommand(FName Key);
    
    UFUNCTION(Exec)
    void DebugUISetActionCommand(int32 Num);
    
    UFUNCTION(Exec)
    void DebugUISelectHudRalphBlockSlot(int32 SlotIndex);
    
    UFUNCTION(Exec)
    void DebugUIScreenFilter(bool IsShow, int32 Type);
    
    UFUNCTION(Exec)
    void DebugUIResetUIPartsProfileTime();
    
    UFUNCTION(Exec)
    void DebugUIResetPadBtnText();
    
    UFUNCTION(Exec)
    void DebugUIPushButtonMark(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIPlayFullscreenVideo(const FString& MovieFilePath);
    
    UFUNCTION(Exec)
    void DebugUIPCConfigSetting(FName ConfigName, float Value);
    
    UFUNCTION(Exec)
    void DebugUIPauseActionCommandTimer(bool IsOn);
    
    UFUNCTION(Exec)
    void DebugUIOpenTimer(int32 nPos);
    
    UFUNCTION(Exec)
    void DebugUIOpenStreamingLoadScreen();
    
    UFUNCTION(Exec)
    void DebugUIOpenSPCamera(int32 _mode, bool _bBlur);
    
    UFUNCTION(Exec)
    void DebugUIOpenShootLockResult();
    
    UFUNCTION(Exec)
    void DebugUIOpenShootLock();
    
    UFUNCTION(Exec)
    void DebugUIOpenSaveMenu();
    
    UFUNCTION(Exec)
    void DebugUIOpenPushCommand();
    
    UFUNCTION(Exec)
    void DebugUIOpenPlayerSelectLR(const FString& NameL, const FString& NameR);
    
    UFUNCTION(Exec)
    void DebugUIOpenNormalLoadScreen();
    
    UFUNCTION(Exec)
    void DebugUIOpenNextLv(int32 Exp);
    
    UFUNCTION(Exec)
    void DebugUIOpenMissionGage(FName dataTableKey);
    
    UFUNCTION(Exec)
    void DebugUIOpenLoadMenu();
    
    UFUNCTION(Exec)
    void DebugUIOpenLevelUp(int32 ParamNum, int32 Num);
    
    UFUNCTION(Exec)
    void DebugUIOpenInfomation();
    
    UFUNCTION(Exec)
    void DebugUIOpenHundredGame();
    
    UFUNCTION(Exec)
    void DebugUIOpenHudUx();
    
    UFUNCTION(Exec)
    void DebugUIOpenHudRightAll(int32 nAction);
    
    UFUNCTION(Exec)
    void DebugUIOpenHudRalph();
    
    UFUNCTION(Exec)
    void DebugUIOpenHudLeftAll();
    
    UFUNCTION(Exec)
    void DebugUIOpenGetMunny(int32 munny);
    
    UFUNCTION(Exec)
    void DebugUIOpenGetItem();
    
    UFUNCTION(Exec)
    void DebugUIOpenGetBonus(int32 ParamNum, int32 Num);
    
    UFUNCTION(Exec)
    void DebugUIOpenGameOverGumi(int32 HintIndex);
    
    UFUNCTION(Exec)
    void DebugUIOpenGameOver(int32 HintIndex);
    
    UFUNCTION(Exec)
    void DebugUIOpenGameHelp(int32 GameHelpID);
    
    UFUNCTION(Exec)
    void DebugUIOpenExtraLoadScreen(int32 _index);
    
    UFUNCTION(Exec)
    void DebugUIOpenEventItem(int32 ItemIDInt);
    
    UFUNCTION(Exec)
    void DebugUIOpenConfigScreenMenu();
    
    UFUNCTION(Exec)
    void DebugUIOpenConfigBrightnessMenu();
    
    UFUNCTION(Exec)
    void DebugUIOpenClearDataSaveMenu();
    
    UFUNCTION(Exec)
    void DebugUIOpenCampMenu();
    
    UFUNCTION(Exec)
    void DebugUIOpenButtonCount(float Time);
    
    UFUNCTION(Exec)
    void DebugUINaviMapMarkerTest(int32 MapMarkerType, int32 PosX, int32 PosY);
    
    UFUNCTION(Exec)
    void DebugUINaviMapMarkerPcStart(bool IsSet);
    
    UFUNCTION(Exec)
    void DebugUIMoviePlayerInvokeLog(bool bShowLog, int32 Index);
    
    UFUNCTION(Exec)
    void DebugUILuckyMarkMenuDebugMode(bool _debug);
    
    UFUNCTION(Exec)
    void DebugUILStickInput(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUILSIButtonSetGameMode(int32 GameModeType, uint8 GameModeIndex);
    
    UFUNCTION(Exec)
    void DebugUILSIButtonSet(uint8 LSIGameItemIDIndex, bool bClose);
    
    UFUNCTION(Exec)
    void DebugUILoadNaviMap(FName MapName, bool OverwriteMap);
    
    UFUNCTION(Exec)
    void DebugUIKeyHole(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIHudXehanort(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIHudCommandTimeBreak(float fBreakTimer);
    
    UFUNCTION(Exec)
    void DebugUIHideHudCommandSituation(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIHideAllHud();
    
    UFUNCTION(Exec)
    void DebugUIGameHelpFlag(bool Enable, int32 Index);
    
    UFUNCTION(Exec)
    void DebugUIForceUnlockSaveTopMenu(bool IsForceUnlock);
    
    UFUNCTION(Exec)
    void DebugUIForceShowNaviMap(bool bShow);
    
    UFUNCTION(Exec)
    void DebugUIForceScaleformGC();
    
    UFUNCTION(Exec)
    void DebugUIForceExtraLoadScreen(bool _force);
    
    UFUNCTION(Exec)
    void DebugUIFixFocusLabel();
    
    UFUNCTION(Exec)
    void DebugUIEnableSubtitleSkip(bool IsEnable);
    
    UFUNCTION(Exec)
    void DebugUIEnableInvoke(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugUIDisplayNaviMap(int32 DataTableIndex);
    
    UFUNCTION(Exec)
    void DebugUIDeleteTargetCursor(const FString& TargetActorFName, int32 CursorType, bool bDecision);
    
    UFUNCTION(Exec)
    void DebugUIDeleteActionCommand();
    
    UFUNCTION(Exec)
    void DebugUICreateUIParts(const FString& AssetPath);
    
    UFUNCTION(Exec)
    void DebugUIConfigSetting(FName ConfigName, int32 Value);
    
    UFUNCTION(Exec)
    void DebugUICodeMenu(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUICloseTimer(int32 nPos);
    
    UFUNCTION(Exec)
    void DebugUICloseStreamingLoadScreen();
    
    UFUNCTION(Exec)
    void DebugUICloseSPCamera();
    
    UFUNCTION(Exec)
    void DebugUICloseShootLock();
    
    UFUNCTION(Exec)
    void DebugUIClosePushCommand();
    
    UFUNCTION(Exec)
    void DebugUICloseNormalLoadScreen();
    
    UFUNCTION(Exec)
    void DebugUICloseInfomation();
    
    UFUNCTION(Exec)
    void DebugUICloseHundredGame();
    
    UFUNCTION(Exec)
    void DebugUICloseHudUx();
    
    UFUNCTION(Exec)
    void DebugUICloseHudRightAll();
    
    UFUNCTION(Exec)
    void DebugUICloseHudRalph();
    
    UFUNCTION(Exec)
    void DebugUICloseHudLeftAll();
    
    UFUNCTION(Exec)
    void DebugUICloseExtraLoadScreen();
    
    UFUNCTION(Exec)
    void DebugUICloseButtonCount(bool IsCancel);
    
    UFUNCTION(Exec)
    void DebugUICheatAchievement(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIChangeWorldHudCommand(const FString& strWorld);
    
    UFUNCTION(Exec)
    void DebugUIChangeGigasHudCommandText(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIChallengeScore(int32 nKind);
    
    UFUNCTION(Exec)
    void DebugUIAddTargetCursor(const FString& TargetActorName, int32 CursorType);
    
    UFUNCTION(Exec)
    void DebugTsPuddingSpawn(const int32 PuddingType);
    
    UFUNCTION(Exec)
    void DebugTsPuddingSetSpawnLimit(const int32 Num);
    
    UFUNCTION(Exec)
    void DebugTsPuddingDisplayNum(const bool bDisplay);
    
    UFUNCTION(Exec)
    void DebugTsPuddingDisableTickManager(const bool bDisable);
    
    UFUNCTION(Exec)
    void DebugTsPuddingDisableRemove(const bool bDisable);
    
    UFUNCTION(Exec)
    void DebugTsPuddingAddRemove(const int32 AddNum);
    
    UFUNCTION(Exec)
    void DebugTresToolLevelActorOnlyVisible();
    
    UFUNCTION(Exec)
    ATresCharPawnBase* DebugSpawnVehicle(int32 nId, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec)
    void DebugSnowCurlingSetSec(float sec);
    
    UFUNCTION(Exec)
    void DebugSnowCurlingSetScore(int32 Score);
    
    UFUNCTION(Exec)
    void DebugSmartphonePCShadowOff(bool bEnable);
    
    UFUNCTION(Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet_MaterialReduction(FName EnemyID, FName MaterialIdx, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet_DifferentSet(FName EnemyID, int32 SetIdx, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet_DifferentKindSet(FName EnemyID, FName Kind, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec)
    ATresEnemyPawnBase* DebugSimpleEnemySet(FName EnemyID, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(Exec)
    void DebugShowValidNavmeshDebug(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowStaticEQSItemDebug(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowSpecialPerformActorAttachInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowSmartphoneDebugInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowSevenPrincessInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowPhotoSaveInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowPhotoMissionInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowNpcSmartphoneReactionInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowNavigationBuildTime(bool bEnabled);
    
    UFUNCTION(Exec)
    void DebugShowGameplayDebugger(int32 Index);
    
    UFUNCTION(Exec)
    void DebugShowExistencePrizeNum(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowEQSDebug(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowEnemyParam(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowEmitterPool(bool bEnabled);
    
    UFUNCTION(Exec)
    void DebugShowDetectMarkerInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowCoopDebug(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowCinematicStopAIDebug(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowCharacter(bool bEnabled);
    
    UFUNCTION(Exec)
    void DebugShowBackground(bool bEnabled);
    
    UFUNCTION(Exec)
    void DebugShowAttackPermissionDebug(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugShowAIDebug(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetVisibleDebugTextRender(bool IsVisible);
    
    UFUNCTION(Exec)
    void DebugSetUsePS4OutputRestrict(bool bUse);
    
    UFUNCTION(Exec)
    void DebugSetSmartphoneHLODOff(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetRaPuddingGrade(int32 grade);
    
    UFUNCTION(Exec)
    void DebugSetRaPuddingForceMissionContinue(bool bContinue);
    
    UFUNCTION(Exec)
    void DebugSetPhotoMissionRecordedByID(int32 missionID);
    
    UFUNCTION(Exec)
    void DebugSetPhotoJpegCompressQuality(int32 Quality);
    
    UFUNCTION(Exec)
    void DebugSetPhotoExport(bool IsExport);
    
    UFUNCTION(Exec)
    void DebugSetLuckyMarkRecordedByID(int32 markID);
    
    UFUNCTION(Exec)
    void DebugSetLuckyMarkRecordedByCount(int32 count);
    
    UFUNCTION(Exec)
    void DebugSetEnemyHitPointRate(float InRate);
    
    UFUNCTION(Exec)
    void DebugSetEnemyHitPoint(int32 InHitPoint);
    
    UFUNCTION(Exec)
    void DebugSetEnableR2PadTriggerDownMode(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSetDefaultPawnNameBTAllSet(const FString& PawnName);
    
    UFUNCTION(Exec)
    void DebugSetDefaultPawnNameBT(const FString& PawnName);
    
    UFUNCTION(Exec)
    void DebugSetDefaultBT(FName ID);
    
    UFUNCTION(Exec)
    void DebugSetDanceEffectColorMode(int32 mode);
    
private:
    UFUNCTION(Exec)
    void DebugSetCameraLocation(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    
public:
    UFUNCTION(Exec)
    void DebugRaycastDisp(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugR2Damage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec)
    void DebugR2BadStat(int32 TgtNo, int32 BadStatNo);
    
    UFUNCTION(Exec)
    void DebugR2AndPadUpDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec)
    void DebugR2AndPadRightDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec)
    void DebugR2AndPadLeftDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec)
    void DebugR2AndPadDownDamage(int32 TgtNo, int32 DamageNo);
    
    UFUNCTION(Exec)
    void DebugPuddingStopGameTimer(const bool bStop);
    
    UFUNCTION(Exec)
    void DebugPuddingSetScore(const int32 Score);
    
    UFUNCTION(Exec)
    void DebugPuddingFinishGame();
    
    UFUNCTION(Exec)
    void DebugPuddingDisplayScore(const bool bDisplay);
    
    UFUNCTION(Exec)
    void DebugPuddingDisableGameFinish(const bool bDisable);
    
    UFUNCTION(Exec)
    void DebugPuddingAddScore(const int32 Score);
    
    UFUNCTION(Exec)
    void DebugOutputLogTaskList();
    
    UFUNCTION(Exec)
    void DebugNpcSwitchBT(FName NpcID, const FString& BTFileName);
    
    UFUNCTION(Exec)
    void DebugNpcSwitchAIBT(FName NpcID, const FString& BTFileName);
    
    UFUNCTION(Exec)
    void DebugNpcAIStyleBattleAll(int32 Style);
    
    UFUNCTION(Exec)
    void DebugMiRxSwitchDispDebugInfo();
    
    UFUNCTION(Exec)
    void DebugMiRxChangeEnemyState(const int32 dID, const bool bIsLoop);
    
    UFUNCTION(Exec)
    void DebugMiPuddingDisplayKillNum(const bool bDisplay);
    
    UFUNCTION(Exec)
    void DebugMiPuddingDisableAttack(const bool bDisable);
    
    UFUNCTION(Exec)
    void DebugLoadLevelLoop(int32 loopNum, float WaitTime);
    
    UFUNCTION(Exec)
    void DebugLgRxSetZeroRelZ(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugLgRxSetRxRushRate(float InRate);
    
    UFUNCTION(Exec)
    void DebugLgRxSetRxAttackRate(float InRate);
    
    UFUNCTION(Exec)
    void DebugLgRxSetPhase(int32 InPhase);
    
    UFUNCTION(Exec)
    void DebugLgRxSetExecuteIndex(int32 InIndex);
    
    UFUNCTION(Exec)
    void DebugLgRxSetDispLine(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugLgRxSetDispInfoPart(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugLgRxSetDispInfoAll(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugLgRxSetDisableSpecificAction(bool bDisable);
    
    UFUNCTION(Exec)
    void DebugLgRxSetDebugPad(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugLgRxSetCmdAutoPopup(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugLevelRequestStopGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestStopedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestStartGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestStartedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestResetGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestForceStopedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestForceStartedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestForceDestroyedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestDestroyGimmickFromLevelName(const FName& LevelName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestDestroyGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestDestroyedGimmickFromLevelName(const FName& LevelName);
    
    UFUNCTION(Exec)
    void DebugLevelRequestDestroyedGimmick(const FString& ActorName);
    
    UFUNCTION(Exec)
    void DebugLevelGimmickDamageCheckFree(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugLevelActorVisibleOnly(const FName& LevelName, int32 NO);
    
    UFUNCTION(Exec)
    void DebugLevelActorVisible(const FName& LevelName, int32 NO, bool Visible);
    
    UFUNCTION(Exec)
    void DebugHePuddingSpeedUpDown(const bool bUp);
    
    UFUNCTION(Exec)
    void DebugHePuddingDisplayNum(const bool bDisplay);
    
    UFUNCTION(Exec)
    void DebugHePuddingDisableSpeedDown(const bool bDisable);
    
    UFUNCTION(Exec)
    void DebugFzPuddingDisplayKillNum(const bool bDisplay);
    
    UFUNCTION(Exec)
    void DebugFullPathSwitchPawnNameBTAllSet(const FString& PawnName, const FString& BTFilePath);
    
    UFUNCTION(Exec)
    void DebugFullPathSwitchPawnNameBT(const FString& PawnName, const FString& BTFilePath);
    
    UFUNCTION(Exec)
    void DebugFullPathSwitchClassNameBTAllSet(const FString& ClassName, const FString& BTFilePath);
    
    UFUNCTION(Exec)
    void DebugFullPathSwitchBT(FName ID, const FString& BTFilePath);
    
    UFUNCTION(Exec)
    void DebugFriendWarpHome(bool bAdjustCameraBack);
    
    UFUNCTION(Exec)
    void DebugFriendStopAI(bool bStop);
    
    UFUNCTION(Exec)
    void DebugFriendPlayCameraAnim(FName ID, const FString& BTFilePath, int32 Index);
    
    UFUNCTION(Exec)
    void DebugFriendLinkPointMax(int32 Index);
    
    UFUNCTION(Exec)
    void DebugFriendLinkPointLine(int32 Index);
    
    UFUNCTION(Exec)
    void DebugFriendLinkPoint(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendHpKeep(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendDispSmartphoneCamera(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendDispPrizeRange(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendDispLineAndSphere(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendDispLine(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendDispInfo(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec)
    void DebugFriendDispAnimInfo(FName FriendID, bool bEnable);
    
    UFUNCTION(Exec)
    void DebugForceUnlockBattlePortalRewardActions(int32 clearCount);
    
    UFUNCTION(Exec)
    void DebugForceRaPuddingReload();
    
    UFUNCTION(Exec)
    void DebugForceFestivalDanceClear();
    
    UFUNCTION(Exec)
    void DebugFlashTracerSetSec(float sec);
    
    UFUNCTION(Exec)
    void DebugFlashTracerSetScore(int32 Score);
    
    UFUNCTION(Exec)
    void DebugFlashTracerSetRank(int32 Rank);
    
    UFUNCTION(Exec)
    void DebugFlashTracerForceFinish();
    
    UFUNCTION(Exec)
    void DebugFestivalDanceSetTimerStop(bool bStop);
    
    UFUNCTION(Exec)
    void DebugFestivalDanceSetChainCount(int32 chainCount);
    
    UFUNCTION(Exec)
    void DebugFestivalDanceForceSpecialPerform();
    
    UFUNCTION(Exec)
    void DebugFestivalDanceForceRapunzelDance();
    
    UFUNCTION(Exec)
    void DebugFestivalDanceEnableInfiniteChain(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugExistEnemyAnnihilation();
    
    UFUNCTION(Exec)
    void DebugEQSQueryItemNumList(const FString& FileName);
    
    UFUNCTION(Exec)
    void DebugEnemyWallHitTest(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyWallHitReactionTest(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemySwitchBT(FName EnemyID, const FString& BTFileName);
    
    UFUNCTION(Exec)
    void DebugEnemySwitchAIBT(FName EnemyID, const FString& BTFileName);
    
    UFUNCTION(Exec)
    void DebugEnemyStrongPointZero(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyRespawn(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyRalphBindTestIdx(int32 Idx);
    
    UFUNCTION(Exec)
    void DebugEnemyPadControlEnable(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyHpKeep(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyBlowRevenge(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyBlowDeath(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemyAnnihilation();
    
    UFUNCTION(Exec)
    void DebugEnemy_He001a_ShowHpInfo();
    
    UFUNCTION(Exec)
    void DebugEnemy_He001a_ShowCollision(int32 DispType);
    
    UFUNCTION(Exec)
    void DebugEnemy_He001a_ShowAction();
    
    UFUNCTION(Exec)
    void DebugEnemy_Gigas_GimmickGigasOff();
    
    UFUNCTION(Exec)
    void DebugEnemy_dw407_ShowSpawnProjectileLocation(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemy_dw401_WaveScrollTest(bool bScroll);
    
    UFUNCTION(Exec)
    void DebugEnemy_dw401_StartMickeyRide();
    
    UFUNCTION(Exec)
    void DebugEnemy_dw401_CameraCollTest(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemy711TornadoInvolveTest(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnemy711ObjectTest(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnableItemEvaluation(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEnableFriendLinkPoint(int32 Index);
    
    UFUNCTION(Exec)
    void DebugEnableCutSceneLights(bool bEnabled);
    
    UFUNCTION(Exec)
    void DebugEnableAbilityBattlePhotographer(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugEEX771SetDebrisBlowNum(int32 Num);
    
    UFUNCTION(Exec)
    void DebugDropItem(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugDrawTresLineTrace(bool bDraw);
    
    UFUNCTION(Exec)
    void DebugDispEEX771(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugDispEEX054(bool bEnable);
    
private:
    UFUNCTION(Exec)
    void DebugDispCameraLocation();
    
public:
    UFUNCTION(Exec)
    void DebugDiffAnalysisGPU();
    
    UFUNCTION(Exec)
    void DebugComNpcVoicePlay(bool bPlay);
    
    UFUNCTION(Exec)
    void DebugComNpcUniqueDeleteAll();
    
    UFUNCTION(Exec)
    void DebugComNpcStopMove(bool bStop);
    
    UFUNCTION(Exec)
    void DebugComNpcStopMasterPose(bool bStop);
    
    UFUNCTION(Exec)
    void DebugComNpcStopAction(bool bStop);
    
    UFUNCTION(Exec)
    void DebugComNpcSetVoiceMeshType(FName inMeshName);
    
    UFUNCTION(Exec)
    void DebugComNpcSetVoiceMeshIndex(int32 nIndex);
    
    UFUNCTION(Exec)
    void DebugComNpcSetMoveActorNum(int32 nNum);
    
    UFUNCTION(Exec)
    void DebugComNpcSetGroup(FName InGroupName);
    
    UFUNCTION(Exec)
    void DebugComNpcSetGreetType(int32 nGreet);
    
    UFUNCTION(Exec)
    void DebugComNpcSetDispActorNum(int32 nNum);
    
    UFUNCTION(Exec)
    void DebugComNpcSetCameraScale(float fScale);
    
    UFUNCTION(Exec)
    void DebugComNpcSetCameraMotion(FName inRecordName, int32 nIndex);
    
    UFUNCTION(Exec)
    void DebugComNpcSetAction(FName inSeqName);
    
    UFUNCTION(Exec)
    void DebugComNpcDeleteAll();
    
    UFUNCTION(Exec)
    void DebugComNpcDelete();
    
    UFUNCTION(Exec)
    void DebugComNpcDebugDispType(int32 nMode);
    
    UFUNCTION(Exec)
    void DebugComNpcDebugDisp(bool bDisp);
    
    UFUNCTION(Exec)
    void DebugComNpcAdd(FName inSubName, FName inNpcName);
    
    UFUNCTION(Exec)
    void DebugCharPawnAnnihilation();
    
    UFUNCTION(Exec)
    void DebugCaPuddingMoveSpeed(const float Speed);
    
    UFUNCTION(Exec)
    void DebugCaPuddingDisplayWave(const bool bDisplay);
    
    UFUNCTION(Exec)
    void DebugCaPuddingDisableCooldownBell(const bool bDisable);
    
    UFUNCTION(Exec)
    void DebugCallEnemyFunctionNameClassName(FName ClassName, FName FunctionName, FName Param);
    
    UFUNCTION(Exec)
    void DebugCallEnemyFunctionIntClassName(FName ClassName, FName FunctionName, int32 Param);
    
    UFUNCTION(Exec)
    void DebugCallEnemyFunctionInt(FName EnemyID, FName FunctionName, int32 Param);
    
    UFUNCTION(Exec)
    void DebugCallEnemyFunctionFloat(FName EnemyID, FName FunctionName, float Param);
    
    UFUNCTION(Exec)
    void DebugCallEnemyFunctionClassName(FName ClassName, FName FunctionName);
    
    UFUNCTION(Exec)
    void DebugCallEnemyFunction(FName EnemyID, FName FunctionName);
    
    UFUNCTION(Exec)
    void DebugBxPuddingInduction(const int32 Type);
    
    UFUNCTION(Exec)
    void DebugBxPuddingDisplayAreaJumpTarget(const bool bDisplay);
    
    UFUNCTION(Exec)
    void DebugBxPuddingChangeType(const int32 Type);
    
    UFUNCTION(Exec)
    void DebugBPEM_SetNextEP_ClampMode(int32 Index);
    
    UFUNCTION(Exec)
    void DebugBPEM_SetEnabledTelemetryLog(bool InbEnabled);
    
    UFUNCTION(Exec)
    void DebugBPEM_SetEnabledStatusLog(bool InbEnabled);
    
    UFUNCTION(Exec)
    void DebugBPEM_SetEnabledEPLog(bool InbEnabled);
    
    UFUNCTION(Exec)
    void DebugBPEM_SetEnabledEmotionMap(bool InbEnabled);
    
    UFUNCTION(Exec)
    void DebugBPEM_SetEnabledActionLog(int32 Index);
    
    UFUNCTION(Exec)
    void DebugAlwaysEnableLookAt(FName PawnName, int32 mode);
    
    UFUNCTION(Exec)
    void DebugAlwaysEnableIK(FName PawnName, int32 mode);
    
    UFUNCTION(Exec)
    void DebugAllEnemySwitchTurnMove();
    
    UFUNCTION(Exec)
    void DebugAllEnemySwitchAI(bool bStop);
    
    UFUNCTION(Exec)
    void DebugAllEnemyForceStuck();
    
    UFUNCTION(Exec)
    void DebugAllEnemyForceFallenAbyss();
    
    UFUNCTION(Exec)
    void DebugAlbumPhotoLoadTest(bool bLoad);
    
    UFUNCTION(Exec)
    void DebugActorVisibleFromActorList(bool Visible);
    
    UFUNCTION(Exec)
    void DebugActorCollisionEnableFromActorList(bool Enable);
    
    UFUNCTION(Exec)
    void DebugAccompanyPawnDispManualOverlap(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAccompanyPawnDispDebugInfo(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAccompanyPawnDispCollisionCheck(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAccompanyPawnDisableLandSpawn(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugAccompanyPawnDisableAutoMove(bool bEnable);
    
    UFUNCTION(Exec)
    void AllDebugAlwaysEnableLookAt(int32 mode);
    
    UFUNCTION(Exec)
    void AllDebugAlwaysEnableIK(int32 mode);
    
    UFUNCTION(Exec)
    void AllAIDebugDisplay();
    
    UFUNCTION(Exec)
    void AIDebugDisplay(FName PawnName);
    
};

