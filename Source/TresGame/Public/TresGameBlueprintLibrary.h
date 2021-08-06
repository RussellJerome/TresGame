// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TresGame.h"
#include "Engine/EngineTypes.h"
#include "Camera/CameraTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "TresGameBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGameBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContext", LatentInfo = "LatentInfo"))
	static void WaitForFriendRunningBehaviorTree(class UObject* WorldContext, const FLatentActionInfo& LatentInfo, ETresChrUniqueID NpcChrID) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresStartWipeOut(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresStartWipeIn(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	//static void WaitBPTresStartWhiteOut(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
	//static void WaitBPTresStartWhiteIn(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresStartGameOverWhiteOut(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {};
	
	//static void WaitBPTresStartFadeOut(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FLinearColor& InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
	//static void WaitBPTresStartFadeIn(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FLinearColor& InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresStartCinematicModeEx(class UObject* WorldContextObject, const FLatentActionInfo& InLatentInfo, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bDisableCameraMove, ETresCinematicPlayerStateType PlayerState, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion, bool bShowPlayerAuraEffect, bool bDisableIKinema, bool bPauseAI, bool bRecordLevelEntity) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresStartCinematicMode(class UObject* WorldContextObject, const FLatentActionInfo& InLatentInfo, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, ETresCinematicPlayerStateType InPlayerState, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresSetupChatMode(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, class ATresCharPawnBase* InPawn1, class ATresCharPawnBase* InPawn2) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresIsReadyCinematicMode(class UObject* WorldContextObject, const FLatentActionInfo& InLatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresGetVictoryBonus(class UObject* WorldContextObject, const FLatentActionInfo& InLatentInfo, const FName& InFlagName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresGetMultiItem2(class UObject* WorldContextObject, const FLatentActionInfo& InLatentInfo, TArray<FName> InItemKeyNames, TArray<int> InItemNums) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresGetMultiItem(class UObject* WorldContextObject, const FLatentActionInfo& InLatentInfo, const FName& InItemKeyName1, int InItemNum1, const FName& InItemKeyName2, int InItemNum2, const FName& InItemKeyName3, int InItemNum3, const FName& InItemKeyName4, int InItemNum4, const FName& InItemKeyName5, int InItemNum5) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresGetKeyitem(class UObject* WorldContextObject, const FLatentActionInfo& InLatentInfo, const FName& InItemKeyName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresComNpcEndMotion(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, class ATresCharPawnBase* InPawnComNpc, class ATresCharPawnBase* InPawnTarget) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresCinematicPlayerIdling(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, bool InNormalIdle, float InTimeOut) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresCinematicChrTurnTo(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, class ATresCharPawnBase* InPawn, const FVector& InLocation, bool InDisableWeapon) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresCinematicChrLand(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, class ATresCharPawnBase* InPawn, float InTime) {};
	
	//static void WaitBPTresCancelFade(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresCameraNormalChange(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, float InTimeOut) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresCameraInterpChange(class UObject* WorldContextObject, class AActor* Camera, const FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void WaitBPTresBattleModeEnd(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, float InTimeOut) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresWaitLevelStreaming(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, bool WaitMakeVisible, int WaitCount) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresWaitCycle(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int WaitNum) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresWaitCompleteDynamicNavMesh(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_WaitForVideoPrepare(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, int SlotNo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_WaitForVideoFinish(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_WaitForVideoComponentPrepare(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_WaitForBattleReport(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_StopVideo() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_StartCommandModeEx(ETresUIHudCommandExKind CommandKindEx) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_StartCommandMode(TEnumAsByte<ETresCommandKind> CommandKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ShowTimerNewRecord() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ShowHudUx() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ShowHudStatus() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ShowHudCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ShowHudCommand() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_ShowGetTreasurePrizeSnowCurling(int PrizeCount, bool IsComplete) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_ShowGetBonusPointSnowCurling(int Point) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_ShowCountDownSnowCurling(ETresUISnowSlideCountDownType Type) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetVideoFinishRemoteEvent(const FName& EventName) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetTimerRecordTime(float Time) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetTimerColor(ETresUITimerColor ColorType) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetSubtitleText(const struct FTresLocText& Text) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_SetRightTimerRecordTimeSnowCurling(float fTime) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_SetRightTimerNewRecordSnowCurling() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetPauseHintText(const struct FTresLocText& HintText) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetPauseGameHelp(ETresGameHelp GameHelpID) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetNaviMapMarkerPcStart(class AActor* Actor) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetMissionGageValue(int Value) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetMissionGageText(const struct FTresLocText& Text) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetMissionGageIconType(ETresUIMissionGageIconType Type) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetMissionGageColorType(ETresUIMissionGageColorType Type) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetMissionCounter(int count) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetMaxMissionGageValue(int Value) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetLyricsText(const struct FTresLocText& Text) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetLoadingScreenType(ETresUILoadingScreenType Type) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetLoadingScreenNewGame(const FName& DefineName) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetKairiCounter(int count) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetInitHudSpecialShipGoalMeter(float Start, float Goal) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudSpecialShipGoalMeter(float fMeter, ETresUIHudSpecialShipMarker markerKind) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudSpecialShipGoalMarker(class AActor* Actor) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudSpecialShipGoalDistance(float fMeter) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudPuddingStartCountDown(ETresUIHudPuddingCountDown CountKind) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudPuddingFinishCountDown(ETresUIHudPuddingCountDown CountKind) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_SetHudLeftScoreSnowCurling(int nScore) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudLeftScorePudding(int Score, bool Record) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_SetHudLeftScoreChainBonusSnowCurling(float fRate, int nCounter) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudLeftScore(int Score, bool Record) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBlackPearlChaseMeter(float Meter, ETresUIHudBlackPearlMarker markerKind) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBlackPearlChaseMarkerAlert(ETresUIHudBlackPearlAlert alertKind) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBlackPearlChaseAlert(bool IsAlert) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBaymaxTime(bool Record) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBaymaxScore(int Score, bool Record) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBaymaxLocationMarker(class AActor* Marker, float Distance) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBaymaxHeroMarker(class ATresCharPawnBase* CharPawn, TEnumAsByte<ETresUIHudBaymaxHero> HeroKind, float Gauge, float Distance, const FVector& Location) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBaymaxFinish(bool Visible) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBaymaxEnemyMarker(class ATresCharPawnBase* CharPawn, float Distance) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetHudBaymaxCountDown(ETresUIHudBaymaxCountDown CountKind) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetGigasGameTotalScore(int Score) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetGigasGameGetScore(int GetScore) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetGigasGameChainBonus(float Bonus) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetGameHelpFlag(ETresGameHelp HelpId, bool Flag) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetEnableNaviMap(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetEnableKeepVisibleCockpitInCinematic(ETresUICinematicCockpitID CockpitID, bool IsEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int TresUI_SetCutsceneText(const struct FTresLocText& Text, bool IsScreenCenter, ETresUITextAlignH AlignH, ETresUITextAlignV AlignV, float DisplayTime, ETresUICutsceneTextShowMethod ShowMethod, float ShowTime, ETresUICutsceneTextHideMethod HideMethod, float HideTime) { return 0; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetCodeMenuSecret() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetCodeMenuFirst(bool bCheat, bool bChallenge) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_SetActiveHudWorkshopPadGuide(TEnumAsByte<ETresUIPadButtonType> ButtonType, bool IsActive) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ResumeVideo(int SlotNo) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_RestorePauseHintText() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ResetHudCommandState() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_RemoveOptionalGameOverHint(const FName& HintID) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ReleaseVideoSlotAll() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ReleaseVideoSlot(int SlotNo) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_PrepareVideo(const FString& MovieFilePath, bool PauseWhenPrepared, bool AlphaComposite, int SlotNo) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_PreInitializeHudSpecialShip() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_PlayVideoPhilharmonic(bool AlphaComposite, int SlotNo) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_PlayVideo(const FString& MovieFilePath, bool AlphaComposite, int SlotNo) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_PauseVideo() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenUINormalLoadScreen(const struct FColor& BgColor) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenThankYouForPlaying(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, float IgnoreInputTime, float DisplayTime) {}
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int TresUI_OpenTextWindow(float Left, float Top, float Right, float Bottom, const FString& Text, bool CloseOnLevelChange, float LifeTime) { return 0; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenSubtitle(const struct FTresLocText& Text, ETresUISubtitleUsage SubtitleUsage) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_OpenRightTimerCountUpSnowCurling(class UTresTimerTask* pTask, float fStartTime) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_OpenRetryMenu() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static bool TresUI_OpenResultSnowCurling(class UObject* WorldContextObject, const FLatentActionInfo& latentInfo_, float Time, int Score, int timeBonus, int damageBonus, int Total, int treasureCnt, bool bTimeUpdated, bool bScoreUpdated, bool bTreasureComplete, ETresUISnowSlideRank Rank) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static int TresUI_OpenPlayerSelectLR(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const struct FTresLocText& TextNameL, const struct FTresLocText& TextNameR, float fIgnoreInputTime, bool AutoClose, int& OutSelected) { return 0; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenOptionWindow(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, float Left, float Top, float Right, float Bottom, const FString& Message, const FString& Option1, const FString& Option2, const FString& Option3, const FString& Option4, const FString& Option5, const FString& Option6, const FString& Option7, const FString& Option8, const FString& Option9, const FString& Option10, int& Selected) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenOlafGage() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenMissionGage(const FName& DataTableKeyName) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenMissionCounter(int InitializeCount, const FName& DataTableKeyName, bool IsOverMaxCount) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static int TresUI_OpenMessage(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, TEnumAsByte<ETresUIMessageBGColor> BgColor, TEnumAsByte<ETresUIMessageTitleType> TitleType, const struct FTresLocText& MessageText, const struct FTresUIWindowSetting& WindowSetting) { return 0; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenLoadingScreen(ETresUILoadingScreenBGColor BgColor) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenKairiCounter(int InitializeCount) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenInformation(const struct FTresLocText& InformationText, bool AutoClose, float OptionalDisplayTime) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudWorkshop(class UTresUIDataAssetWorkshop* UIDataAssetWorkshop) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudPudding() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudLuxord(float fRedZonePlayer, float fRedZoneEnemy, float fRedZonePlayer2, float fRedZoneEnemy2) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_OpenHudLeftScoreSnowCurling(int nRecord) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudLeftScorePudding(ETresUIHudCommonKind ScoreKind, ETresUIHudCommonIcon Icon, int RecordScore) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudLeftScore(ETresUIHudCommonKind ScoreKind, ETresUIHudCommonIcon Icon, int RecordScore) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudBlackPearlChase(float Start, float Goal) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudBaymaxResult(float Time, int Score, int Bonus, ETresUIHudBaymaxResult rankKind, bool RecordTime, bool RecordScore) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudBaymaxLiveFeed(int Kind) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenHudBaymax(TEnumAsByte<ETresUIHudBaymaxKind> HudKind, float RecordTime, int RecordScore, class UTresTimerTask* Task) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenHologramStartMenu(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FName& ReturnMapName, const FName& ReturnPlayerStartTag) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenGradeText(ETresUIGradeTextValue Value) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenGigasGame(class UTresTimerTask* Task) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenGameHelpWithMessage(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, ETresGameHelp HelpId, bool WithPause, bool bTutorial, const FString& MessageTextID, bool& OutExecMessage) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenGameHelp(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, ETresGameHelp HelpId, bool WithPause) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static int TresUI_OpenGameDataInstallMessage(ETresUIGameDataInstallMessageType InstallMessageType, class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) { return 0; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenCountUpTimer(class UTresTimerTask* Task, bool IsLeft) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenCountDownTimer(class UTresTimerTask* Task, float StartTime, float WarningTime, float AlertTime, bool IsLeft) {};

//	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
//	static int TresUI_OpenConfirm(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, TEnumAsByte<ETresUIMessageBGColor> BgColor, TEnumAsByte<ETresUIMessageTitleType> TitleType, const struct FTresLocText& MessageText, TArray<struct FTresLocText> ButtonTexts, const struct FTresUIWindowSetting& WindowSetting, int DefaultSelectedIndex, int* OutSelected) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenCodeMenu(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, bool bNoResetApFree) {};

//	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
//	static int TresUI_OpenChoice(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const struct FTresLocText& Text, TArray<struct FTresLocText> Choices, const struct FTresUIWindowSetting& WindowSetting, int DefaultSelectedIndex, bool AutoClose, bool DecideSilent, ETresUIDialogColor DialogColor, int* OutSelected) { return 0; }

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenCenterInformation(const struct FTresLocText& InformationText) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenCampMenuNeedCloseConfirm(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_OpenCampMenu(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_OpenBattleReport() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_NotifyHudSpecialShipGoalMeterAlert(bool bAlert) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_MapInNoticeMessage(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, bool EnableBGMask) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_LoadMissionGageIcon(TAssetPtr<class USwfMovie> IconAsset) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_IsPlayingVideo() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_IsOpenedGameHelpFlag(ETresGameHelp HelpId) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_IsGameDataInstallCompleted() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_IsEmptyVideoSlot(int SlotNo) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_IsClosedLoadingScreen() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_InitializeSnowSlide() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_HideHudUx() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_HideHudStatus() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_HideHudShining() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_HideHudCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_HideHudCommand() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int TresUI_GetMissionCounter() { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FColor TresUI_GetLoadingScreenFadeColor() { return FColor::FColor(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int TresUI_GetKairiCounter() { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_EndCommandModeEx(ETresUIHudCommandExKind CommandKindEx) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_EndCommandMode(TEnumAsByte<ETresCommandKind> CommandKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_DisposeSnowSlide() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_DeleteHudGigasGimmickMarker(class USceneComponent* Component, int ID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_DeleteHudBaymaxLocationMarker() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_DeleteHudBaymaxHeroMarker(ETresUIHudBaymaxHero HeroKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_DeleteHudBaymaxEnemyMarker() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_DeleteAllActionCommand() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_DeleteActionCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx, bool bDecision) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CountUpOlafGage(ETresUIOlafPartsType Type) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CountDownOlafGage() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresUI_CloseWindow(int WindowHandle, class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseUINormalLoadScreen() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseTimer() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseSubtitle() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_CloseRightTimerSnowCurling() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseOlafGage() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseMissionGage() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseMissionCounter() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseLoadingScreen() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseKairiCounter() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseInformation() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudWorkshop() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudPudding() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudLuxord() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresUI_CloseHudLeftScoreSnowCurling() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudLeftScorePudding(bool NewRecordDisplay) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudLeftScore(bool NewRecordDisplay) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudBlackPearlChase() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudBaymaxLiveFeed() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseHudBaymax() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseGigasGameGetScoreAndChainBonus(int totalScore) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseGigasGame() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseCutsceneText(int WindowHandle) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CloseCenterInformation() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ClearPauseGameHelp() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ClearOptionalGameOverHint() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ClearNaviMapMarkerPcStart() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ClearLyricsText() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ClearInformationTextCache() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_CachePauseHintText() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_ApplyCustomize() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddOptionalGameOverHint(const FName& HintID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddHudGigasGimmickMarker(class USceneComponent* Component) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddHudBaymaxLocationMarker(class AActor* Marker, const struct FVector& Location) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddHudBaymaxHeroMarker(class ATresCharPawnBase* CharPawn, TEnumAsByte<ETresUIHudBaymaxHero> HeroKind, float GaugeMax, const FVector& InitialLocation) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddHudBaymaxEnemyMarker(class ATresCharPawnBase* CharPawn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddHudBaymaxDataPoint(int Point) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddGigasGameGimmickBonus(ETresUIGigasGameGimmickType Type, const struct FVector& Location, int Bonus) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddGigasGameCommonPoint(class ATresEnemyPawnBase* DeadEnemy, int Score) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddGigasGameAcePoint(class ATresEnemyPawnBase* DeadEnemy, int Score) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresUI_AddActionCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresStopShowMapNameSystem(bool Stop) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresStopPumpingTextureStream() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresStopPlayerHoldCamera(class UObject* WorldContextObject, bool bStop) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresStartTextureResidentForTaggedActors(class UObject* WorldContextObject, const FName& TagName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresStartTextureResidentForActors(TArray<class AActor*> Actors) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresStartTextureResidentForActor(class AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresStartTextureResident(class UObject* WorldContextObject, const FName& ResidentTag, bool LoadTexture, bool Reset) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresStartTalkEvent(class UObject* WorldContextObject, class UTresFieldVoice* Asset, const FName& AnimName) {};

	//TO-DO ENGINE MODIFICATION
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	//static void TresStartPumpingTextureStream(class UTresTexturePump* InTexturePump) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresStartCinematicModeEx(class UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bDisableCameraMove, ETresCinematicPlayerStateType PlayerState, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion, bool bShowPlayerAuraEffect, bool bDisableIKinema, bool bPauseAI, bool bRecordLevelEntity) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresStartCinematicMode(class UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bPlayerStateClear, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect, bool bChangeTPViewMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresStartBossDefeatEffect(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresSpawnActorFromClassPath(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FString& ActorClassPath, const FVector& Location, const FRotator& Rotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, bool AsyncLoad, class AActor*& SpawnedActor) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresShowMapName(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetVisibleGimmickAction(class UObject* WorldContextObject, bool bVisible) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetVisibleComNpc(class UObject* WorldContextObject, bool bEnable, const FName& InName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetTransientComponent(class UActorComponent* Component) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetTransientActor(class AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanWorldMinY(class UObject* WorldContextObject, const FName& TagName, float WorldMinY) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanWorldMinX(class UObject* WorldContextObject, const FName& TagName, float WorldMinX) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanWorldMaxY(class UObject* WorldContextObject, const FName& TagName, float WorldMaxY) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanWorldMaxX(class UObject* WorldContextObject, const FName& TagName, float WorldMaxX) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanWindSpeed(class UObject* WorldContextObject, const FName& TagName, float WindSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanWindAngle(class UObject* WorldContextObject, const FName& TagName, float WindAngle) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanWavelength(class UObject* WorldContextObject, const FName& TagName, float Wavelength) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanTimeDilationFactor(class UObject* WorldContextObject, const FName& TagName, float TimeDilationFactor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanSteepness(class UObject* WorldContextObject, const FName& TagName, float Steepness) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanSmallWaveSuppression(class UObject* WorldContextObject, const FName& TagName, float SmallWaveSuppression) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanOppositeWaveSuppression(class UObject* WorldContextObject, const FName& TagName, float OppositeWaveSuppression) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanOmegaPeriod(class UObject* WorldContextObject, const FName& TagName, float OmegaPeriod) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_OceanAmplitude(class UObject* WorldContextObject, const FName& TagName, float Amplitude) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_LOD(class UObject* WorldContextObject, const FName& TagName, bool bForcedLodModelOverride, int ForcedLodModel, bool bSQEXForceLODDisableOverride, bool bSQEXForceLODDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetTaggedActorProperty_DistanceCulling(class UObject* WorldContextObject, const FName& TagName, bool bDesiredMaxDrawDistanceOverride, float DesiredMaxDrawDistance, bool bAllowCullDistanceVolumeOverride, bool bAllowCullDistanceVolume) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetSpecialBattleMode(class UObject* WorldContextObject, bool bIsSpecialMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationWorldMinY(class UObject* WorldContextObject, float WorldMinY) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationWorldMinX(class UObject* WorldContextObject, float WorldMinX) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationWorldMaxY(class UObject* WorldContextObject, float WorldMaxY) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationWorldMaxX(class UObject* WorldContextObject, float WorldMaxX) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationWindSpeed(class UObject* WorldContextObject, float WindSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationWindAngle(class UObject* WorldContextObject, float WindAngle) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationUpdate(class UObject* WorldContextObject, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationTime(class UObject* WorldContextObject, float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationCPUReadBack(class UObject* WorldContextObject, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanSimulationAmplitude(class UObject* WorldContextObject, float Amplitude) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetOceanDiveModeEnvSwitch(class UObject* WorldContextObject, bool bDiveMode, bool bImmediate) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetMatineeForMovie(class AMatineeActor* MatineeActor, bool IsMovie) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetIKinemaEnable(TArray<class ATresCharPawnBase*> TresCharPawns, bool Enable, bool Force) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetForceMipLevelsToBeResidentForTaggedActor(class UObject* WorldContextObject, const FName& TagName, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float Duration, int CinematicTextureGroups) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetForceMipLevelsToBeResident(TArray<class UMaterialInterface*> Materials, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float Duration, int CinematicTextureGroups) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetEventCutsceneMaxFPSMode(class UObject* WorldContextObject, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSetDisableGamePause(class UObject* WorldContextObject, bool bDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetDisableCampMenu(bool bDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetComponentMobility(class USceneComponent* Component, TEnumAsByte<EComponentMobility::Type> Type) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresSetCacheSampleTransitionSpeed(float Value) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresSaveVisibleLevelList(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresResetTaggedActorProperty(class UObject* WorldContextObject, const FName& TagName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresResetAllTaggedActorProperty(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresRecordComNpc(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresPrestreamTextures(TArray<class AActor*> Actors, float Duration, bool bEnableStreaming, int CinematicTextureGroups) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresPrepareMap(TArray<FName> SubLevelNames, bool IsDisableEditor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresPlayFriendFaceAnimation(class UObject* WorldContextObject, ETresChrUniqueID Character, const FName& AnimName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresPlayFriendAnimation(class UObject* WorldContextObject, ETresChrUniqueID Character, const FName& AnimName, float BlendInTime, bool isLoop) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresNotifyStopCutscene(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresNotifyPlayCutscene(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresNotifyOceanIslandTriggerBoxOverlap(class UObject* WorldContextObject, bool Begin) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresMovieClip(const FString& greatestMomentID, const FString& clipName, float timeSecond, float startTimeSecond) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresMapJump(const FName& MapName, const FName& TargetTag, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresLoadVisibleLevelList(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresLevelListVisibility(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, TArray<FName> Names, bool Visible) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresLevelFlashGimmickActors(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresIsSpecialBattleMode() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresIsPrepareMap() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresIsGame() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int TresIsFindName(const FName& findName, TArray<FName> Names) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool TresIsExistComNpc(class UObject* WorldContextObject, const FName& InName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresIsCommonAssetAsyncLoad() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool TresIsCinematicMode(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresIsBattleMode() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresIsAutoActorLoading() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresIsAutoActorEnd() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGumiShipStartCinematicMode(class UObject* WorldContextObject, bool bPauseAI, bool bHideGumiShip, bool bHideCockpit, bool bDisableUserGumiShipControll, bool bDisableUserCameraControll, bool bResetTinyShipFormation, bool bResetGumiShipThrusterEffect, bool bResetGumiShipAuraEffect, bool bDestroyProjectile) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGumiShipNotifyCinematicModeEvent(class UObject* WorldContextObject, const struct FTresGumiShipCinematicModeEventData& CinematicModeEvent) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGumiShipEndCinematicMode(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FString TresGetVoiceLanguage() { return FString::FString(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetVictoryBonus(class UObject* WorldContextObject, class ATresCharPawnBase* InPawn, TEnumAsByte<ETresVictoryBonusKind> InBonus, ETresAbilityKind InAbility) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetOceanSimulationWorldMinY(class UObject* WorldContextObject, float& WorldMinY) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetOceanSimulationWorldMinX(class UObject* WorldContextObject, float& WorldMinX) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetOceanSimulationWorldMaxY(class UObject* WorldContextObject, float& WorldMaxY) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetOceanSimulationWorldMaxX(class UObject* WorldContextObject, float& WorldMaxX) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetOceanSimulationWindSpeed(class UObject* WorldContextObject, float& WindSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetOceanSimulationWindAngle(class UObject* WorldContextObject, float& WindAngle) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetOceanSimulationAmplitude(class UObject* WorldContextObject, float& Amplitude) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresLgRxManager* TresGetLgRxManager(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class UTresFriendComponent* TresGetFriendManager(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FString TresGetCurrentLocale() { return FString::FString(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FString TresGetCurrentLanguageScript() { return FString::FString(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FString TresGetCurrentLanguage() { return FString::FString(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresNpcPawn_c_npc* TresGetComNpc(class UObject* WorldContextObject, const FName& InName) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetActorsInLevel(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>& OutActors) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresGetActorsAll(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>& OutActors) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresFlushLOD(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresFlushILC(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresExecuteGarbageCollection() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresEndTextureResidentForTaggedActors(class UObject* WorldContextObject, const FName& TagName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresEndTextureResidentForActors(TArray<class AActor*> Actors) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresEndTextureResidentForActor(class AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresEndTextureResident(class UObject* WorldContextObject, const FName& ResidentTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresEndFriendFaceAnimation(class UObject* WorldContextObject, ETresChrUniqueID Character) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresEndCinematicMode(class UObject* WorldContextObject, bool bBattleIdlingEnd, bool bInvokeRecordedLevelEntity) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresEndBaymaxRideHud(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresEndAllTexturesResident() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresEnableTemporalAA(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresEnableFriendChatMode(class UObject* WorldContextObject, bool bEnable, ETresChrUniqueID InChrID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresEnableComNpcChatMode(class UObject* WorldContextObject, bool bEnable, const FName& InName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDisablePlayerDecoParts(class UObject* WorldContextObject, bool bDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDirectRideVehicle(class UObject* WorldContextObject, class AActor* inActor, int InParam, float InCameraYaw, int InBonamikPreRoll) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDirectReMindLgRx(class UObject* WorldContextObject, class AActor* inActor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDirectFRMountCurling(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDirectBaymaxRide(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDirectAFTeaCup(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresDestroyVehiclePawnGigasCylinder(const struct FVector& InCenterPos, float InRadiusXY, float InHalfHeight) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresDestroyEnemySpawnedVehiclePawnGigas() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDelay(class UObject* WorldContextObject, float Duration, const FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresDefaultCacheSampleTransitionSpeed() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresDebugUnlockSmartphone(class UObject* WorldContextObject, bool bUnlock) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresDebugPrintWarning(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresDebugPrintString(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration, const struct FLinearColor& Color, bool bEditorOnly) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresDebugPrintError(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresCreateMatrixInstancedStaticMesh(class UInstancedStaticMeshComponent* cp, const struct FTresVectorInt& CreateNum, const FTransform& Transform, const FVector& Offset) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresCopyLightParam(class ULightComponent* src, class ULightComponent* Dest) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TresCompareComponentMobility(class USceneComponent* Component, TEnumAsByte<EComponentMobility::Type> Type) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicStartPawnChatMode(class UObject* WorldContextObject, class ATresCharPawnBase* InPawn, bool InDisableWeapon) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicSetPawnIndividualCinematicMode(class UObject* WorldContextObject, class ATresCharPawnBase* InPawn, bool InAIStop, bool InChangeCinematicState) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicPlayerStateClearEx(class UObject* WorldContextObject, bool bForceStateClear, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicPlayerStateClear(class UObject* WorldContextObject, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicPlayerAuraEffect(class UObject* WorldContextObject, bool bShowPlayerAuraEffect) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicPauseAI(class UObject* WorldContextObject, bool bEnemyAI, bool bFriendAI, bool bOtherAI, bool bEnemyCinematic, bool bFriendCinematic, bool bOtherCinematic) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicDisableShopActorEffect(class UObject* WorldContextObject, ETresSavePointDispType InDispType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicDisableSavePointEffect(class UObject* WorldContextObject, ETresSavePointDispType InDispType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicDisableRailSlideExStartActorEffect(class UObject* WorldContextObject, ETresSavePointDispType InDispType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicDisableChrFootEffect(class UObject* WorldContextObject, bool bDisableFootEffect) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresCinematicChangeTPViewMode(class UObject* WorldContextObject, bool bChangeTPViewMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresChangeBGMEnable(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool TresChangeActionComNpc(class UObject* WorldContextObject, const FName& InName, const FName& InAction) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresCancelPrepareMap() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresBonamikSetWeight(class AActor* Actor, float Weight, float WeightChangeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void TresBonamikResetAndPreRoll(class UObject* WorldContextObject, int PreRoll) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresBonamikRemoveReference(class AActor* ReferencingActor, class AActor* ReferencedActor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresBonamikAddReference(class AActor* ReferencingActor, class AActor* ReferencedActor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresAutoDownResolutionMode(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresAutoActorLoad(const FName& ListPath, const struct FVector& ActorSpawnPoint, int FrameCount) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresAutoActorActionLoad(const FName& ListPath, const struct FVector& ActorSpawnPoint, int FrameCount, bool PerfCPU) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresAsyncLoadInitialAssets() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void TresApplyMapSet(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, class UTresMapSet* MapSet, const FName& cmdName, bool isOneFrameExecute) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void TresApplyAreaNameAndNavMap(const FName& dataTableKey, bool enableAreaName, bool showAreaNameUI, bool enableNavMap, float switchNavMapTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool TestFlagBitLabel(const FName& Flag, const FName& label) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void StoreEnemyXIIIRetryParam() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void StopAllCameraShake(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void StopActorVoice(class AActor* Speaker, class UTresActorVoice* ActorVoice) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void StartWhiteOut(class UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void StartWhiteIn(class UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class AEmitterCameraLensEffectBase* StartLensEffect(class UObject* WorldContextObject, class UClass* EmitterLensEffectClass, bool in_OverrideAllowMultipleInstances) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void StartFadeOut(class UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void StartFadeIn(class UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void StartFade(class UObject* WorldContextObject, const struct FVector& InFadeColor, const struct FVector2D& InFadeAlpha, float InFadeTime, bool InFadeAudio) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class UParticleSystemComponent* SpawnCameraPositionEffect(class UObject* WorldContextObject, class UParticleSystem* Effect, const struct FVector& Offset, const struct FRotator& Rotation, const struct FVector& Scale, bool bCamRot, bool bCamRotYaw) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SignalTheaterSceneFinished() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetWorldResidentsEnable(bool EnableWorldResidents) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetTresCameraNormalDefault(class UObject* WorldContextObject, class ATresCameraNormal* TresCameraNormal) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetShadowSettingPS4Default() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetShadowSettingPCDefault() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetShadowRadiusThresholdDefault() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetShadowRadiusThreshold(float InVal) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetShadowQualityLevelDefault() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetShadowQualityLevel(int InLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetPlayerIKinemaEnable(bool EnableIKinema) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static float SetOneActionState(class UObject* WorldContextObject, const FName& MotionName, bool disableOverlappedForce) { return 0.0f; };
	
	/*TODO ENGINE IMPLEMENTATION REQUIRED
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetMaterialParameterValueVector(class UMaterialInstanceDynamic* MaterialInstanceDynamic, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> ParamType, const struct FLinearColor& Val) {};
	
	//TODO ENGINE IMPLEMENTATION REQUIRED
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetMaterialParameterValueScalar(class UMaterialInstanceDynamic* MaterialInstanceDynamic, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> ParamType, float Val) {};*/
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetGlobalGameSpeed(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, float InNewTimeDilation, float InInterpTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetGameFlagBoolean(const FName& FlagName, bool FlagValue) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetGameFlag(const FName& FlagName, int FlagValue) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetFlagLabel(const FName& Flag, const FName& label) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetFlagBitLabel(const FName& Flag, const FName& label) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetBoneLocalTranslationByName(class USkeletalMeshComponent* SkeletalMeshComponent, const FName& BoneName, const struct FVector& Loc) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetBoneLocalTranslation(class USkeletalMeshComponent* SkeletalMeshComponent, int BoneIndex, const struct FVector& Loc) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetBoneLocalScale3DByName(class USkeletalMeshComponent* SkeletalMeshComponent, const FName& BoneName, const struct FVector& Scl) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetBoneLocalScale3D(class USkeletalMeshComponent* SkeletalMeshComponent, int BoneIndex, const struct FVector& Scl) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetBoneLocalRotationByName(class USkeletalMeshComponent* SkeletalMeshComponent, const FName& BoneName, const struct FRotator& Rot) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetBoneLocalRotation(class USkeletalMeshComponent* SkeletalMeshComponent, int BoneIndex, const struct FRotator& Rot) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetAllComponentVisible(class AActor* Actor, bool Visible) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetAllComponentTickEnable(class AActor* Actor, bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetAllChildActorComponentClass(class AActor* Actor, class UClass* Class) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorVisibleOn(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorVisibleOff(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {};
	
	/*TODO ENGINE IMPLEMENTATION REQUIRED
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorVisibleByObjTypeImmediate(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bVisible) {};
	
	//TODO ENGINE IMPLEMENTATION REQUIRED
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorVisibleByObjType(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bVisible) {};*/
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorStopOn(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorStopOff(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {};
	
	/*TODO ENGINE IMPLEMENTATION REQUIRED
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorStopByObjType(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bStop) {};*/
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorCollisionDisableOn(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize, bool bImmediate) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorCollisionDisableOff(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize, bool bImmediate) {};
	
	/*TODO ENGINE IMPLEMENTATION REQUIRED
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetActorCollisionDisableByObjType(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bDisable, bool bImmediate) {};*/

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void SetAAModeDefault() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static class ATresNote* SearchTresNote(const FName& ID) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void ReturnToTitleGameClear() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void RestoreEnemyXIIIRetryParam(ETresEnemyXIIIPhaseType InNewPhaseType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetTresCameraPrevious(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetTresCameraNormal(class UObject* WorldContextObject, bool bForce) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetTresCameraExceptActive(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetGlobalGameSpeed(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, float InInterpTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetActorVisibleImmediate(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetActorVisible(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetActorStop(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ResetActorCollisionDisable(class UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bImmediate) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void RemyMapJump(ERemyAccessMethod accessMethod, TEnumAsByte<ETresMapJumpFadeKind> fadeKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool RemyIsFirstPlay() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
	static void RemyGetFinalMilestoneRewardAndShowMsg(class UObject* WorldContextObject, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool RemyCanCooking() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool RemoteEventPassActor(class UObject* WorldContextObject, const FName& EventName, class AActor* inActor) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool RemoteEvent(class UObject* WorldContextObject, const FName& EventName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void RegisterEnemyGaugeTarget(class UObject* WorldContextObject, class ATresCharPawnBase* InEnemy, bool bMulti) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void RegistComponentTickFunction(class UActorComponent* Component, bool regist) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void RegistActorTickFunction(class AActor* Actor, bool regist, bool isComponent) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void RecoveryPlayerStatusAllForCinematic(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int RandomSelect(bool inSuccess1, bool inSuccess2, bool inSuccess3, bool inSuccess4, bool inSuccess5, float inProbability1, float inProbability2, float inProbability3, float inProbability4, float inProbability5) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void PlayXIIIRetryVoice(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void PlayEnemyRetryVoice(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void PlayActorVoice(class AActor* Speaker, class UTresActorVoice* ActorVoice) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void NotifyDirectInfomationForGumi(class UObject* WorldContextObject, ETresGumiShipDirectNotifyType eType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool NotEqual_FlagLabel(const FName& Flag, const FName& label) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool LessEqual_FlagLabel(const FName& Flag, const FName& label) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool Less_FlagLabel(const FName& Flag, const FName& label) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IsWaitCycleNeedMatineeImmediatePlay(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsUnlockedSecretMovie() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsUnlockdClearItem(const FName& ItemName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IsTresBluePrintDebugMode(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsTheaterMode() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsSnowCurlingSavedTreasure(int ID) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IsOverlapTresCameraLocation(class UObject* WorldContextObject, const struct FVector& Location, float Radius, bool bAddRadiusZ) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IsOverlapTresCameraActor(class UObject* WorldContextObject, class AActor* Actor, const struct FVector& LocalOffset, float Radius) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsLookAtTargetXY(class AActor* LookActor, class AActor* AtActor, float Angle) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsLocalTresPlayerPawnBase(class AActor* Actor) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsInViewportVector2D(const struct FVector2D& pos) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsInViewportActor(class AActor* Actor) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsInFrustumVolumeLocation(class APlayerCameraManager* PlayerCameraManager, const FVector& WorldLocation, float SphereRadius) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsInFrustumVolumeActor(class APlayerCameraManager* PlayerCameraManager, class AActor* Actor, float SphereRadius) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsGameCleared() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IsFadeChange(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsExistGameFlagBoolean(const FName& FlagName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool IsExistGameFlag(const FName& FlagName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IsBPTresCameraInterpChange(class UObject* WorldContextObject, class AActor* Camera) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool GreaterEqual_FlagLabel(const FName& Flag, const FName& label) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool Greater_FlagLabel(const FName& Flag, const FName& label) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static TEnumAsByte<ETresWorldCode> GetWorldCode(class UObject* WorldContextObject) { return ETresWorldCode::TRES_WCID_00; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static TEnumAsByte<ETresWorldAreaCode> GetWorldAreaCode(class UObject* WorldContextObject) { return ETresWorldAreaCode::TRES_WAID_AREA; };

	//ENGINE MODIFICATION
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	//static class UTresTexturePump* GetTresTexturePump(const FString& DataName) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresPlayerPawnBase* GetTresPlayerPawnBase(class UObject* WorldContextObject, int PlayerIndex) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresPlayerControllerBase* GetTresPlayerControllerBase(class UObject* WorldContextObject, int PlayerIndex) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresLevelScriptActor* GetTresLevelScriptActor(class UObject* WorldContextObject, const FName& PackageName) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresGumiShipWorldSymbolActor* GetTresGumiShipBossBattleLockTargetWorldSymbolActor(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresGameState* GetTresGameState(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int GetStaticMeshComponents(class AActor* Target, TArray<class UStaticMeshComponent*>& OutComponents) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresPlayerPawnBase* GetLocalTresPlayerPawnBase(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresPlayerControllerLowerBase* GetLocalTresPlayerControllerLowerBase(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresPlayerControllerBase* GetLocalTresPlayerControllerBase(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresGumiShipPlayerPawnBase* GetLocalTresGumiShipPlayerPawnBase(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresCameraManager* GetLocalTresCameraManager(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class APlayerController* GetLocalPlayerController(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FString GetLastPlayerStartTag() { return FString::FString(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void GetGameModeTask(class UClass* Class, class UTresTaskBase*& Out) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool GetGameFlagBoolean(const FName& FlagName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int GetGameFlag(const FName& FlagName) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static float GetFadeAmount(class UObject* WorldContextObject) { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector GetBoneTranslationByName(class USkeletalMeshComponent* SkeletalMeshComponent, const FName& BoneName, TEnumAsByte<ETresBoneSpacesType> BoneSpace) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector GetBoneLocalTranslationByName(class USkeletalMeshComponent* SkeletalMeshComponent, const FName& BoneName) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector GetBoneLocalTranslation(class USkeletalMeshComponent* SkeletalMeshComponent, int BoneIndex) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector GetBoneLocalScale3DByName(class USkeletalMeshComponent* SkeletalMeshComponent, const FName& BoneName) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector GetBoneLocalScale3D(class USkeletalMeshComponent* SkeletalMeshComponent, int BoneIndex) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FRotator GetBoneLocalRotationByName(class USkeletalMeshComponent* SkeletalMeshComponent, const FName& BoneName) { return FRotator::FRotator(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FRotator GetBoneLocalRotation(class USkeletalMeshComponent* SkeletalMeshComponent, int BoneIndex) { return FRotator::FRotator(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static float GetAngleTwoVector(const struct FVector& v1, const struct FVector& v2) { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void GetAllActorsOfTag(class UObject* WorldContextObject, class UClass* ActorClass, const FName& TagName, TArray<class AActor*>& OutActors) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void GetAllActorsOfName(class UObject* WorldContextObject, class UClass* ActorClass, const FName& ActorName, class AActor*& OutActor) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void GetAllActorsOfBlueprintName(class UObject* WorldContextObject, class UClass* ActorClass, const FName& BlueprintName, TArray<class AActor*>& OutActors) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector2D GetActorPosToScreenPosRate(class AActor* Actor) { return FVector2D::FVector2D(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FString GetActorBlueprintName(class AActor* Actor) { return FString::FString(); };

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void FadeOutProjectile(class UObject* WorldContextObject, ESQEX_ObjectType InObjType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void FadeoutAllCameraShake(class UObject* WorldContextObject, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool ExistsSecretMovieFile() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool ExistsEpilogueMovieFile() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool EqualEqual_FlagLabel(const FName& Flag, const FName& label) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void EndXIIIRetryVoice(class UObject* WorldContextObject) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	//static void EndValidBPTresCameraArray(TArray<class ATresCameraBase*> EndCameraArray, bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	//static void EndValidBPTresCamera(class ATresCameraBase* EndCamera, bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void EndLensEffectInstance(class UObject* WorldContextObject, class AEmitterCameraLensEffectBase* Emitter, bool bLoopEnd, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void EndLensEffectClass(class UObject* WorldContextObject, class UClass* EmitterLensEffectClass, bool bLoopEnd, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void EndEnemyRetryVoice(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void EndCameraPositionEffectInstance(class UObject* WorldContextObject, class UParticleSystemComponent* EffectInst, bool bLoopEnd, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void EndCameraPositionEffect(class UObject* WorldContextObject, class UParticleSystem* Effect, bool bLoopEnd, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void EndAllSameBPTresLatent(class UObject* WorldContextObject) {};
	
	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void EndAllSameBPTresCameraOfName(class UObject* WorldContextObject, bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams, const FName& CameraName) {};
	
	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void EndAllSameBPTresCamera(class UObject* WorldContextObject, bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void EndAllBPTresCameraOfName(class UObject* WorldContextObject, bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams, const FName& CameraName) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void EndAllBPTresCamera(class UObject* WorldContextObject, bool bTakeover, const struct FViewTargetTransitionParamsEx& TransitionParams) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void EnablePrecomputedVisibility(bool InEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void EnableCollsionActors(TArray<class AActor*> disablearra) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void EmptyFunction() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void DrawDebugActor(class UObject* WorldContextObject, class AActor* inActor, const struct FColor& inDrawColor, float inLifeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static TArray<class AActor*> DisableChildrenCollision(class AActor* Actor) { return TArray<class AActor*>(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void DestroyAllProjectileForGumi(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void DestroyAllProjectile(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void DestroyAllEnemyPawn() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void DeleteAllComponentsByClass(class AActor* Actor, class UClass* DeleteClass, bool bPromoteChildren) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void DebugTresDeleteFriend(bool isAll, int inIdx) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class ATresEnemyPawnBase* DebugSimpleEnemySet(class UObject* WorldContextObject, const FName& EnemyID, float OffsetX, float OffsetY, float OffsetZ) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void DebugConsoleCommand(const FString& Command) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static class UTresTimerTask* CreateTresTaskTimerGameMode(class UObject* WorldContextObject) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void CreateTresTaskGameMode(class UObject* WorldContextObject, class UClass* Class, bool isSingleton, class UTresTaskBase*& Out) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void CreatePrize(class UObject* WorldContextObject, const struct FVector& InLocation, TEnumAsByte<EPRIZE_KIND> InKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ClientStopCameraShake(class UObject* WorldContextObject, class UClass* ShakeClass) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void ClientPlayCameraShake(class UObject* WorldContextObject, class UClass* ShakeClass, class AActor* OwnerActor, float Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, const struct FRotator& UserPlaySpaceRot) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void ClearLevelEntityRecord() {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void ClearFlagBitLabel(const FName& Flag, const FName& label) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void CleanupForCinematic(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool CanPlaySecretMovie() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool CanPlayEpilogueMovie() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void CancelFade(class UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresStartWipeOut(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresStartWipeIn(class UObject* WorldContextObject) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void BPTresStartWhiteOut(class UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void BPTresStartWhiteIn(class UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void BPTresStartFadeOut(class UObject* WorldContextObject, const struct FLinearColor& InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void BPTresStartFadeIn(class UObject* WorldContextObject, const struct FLinearColor& InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresSetupChatMode(class UObject* WorldContextObject, class ATresCharPawnBase* InPawn1, class ATresCharPawnBase* InPawn2) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void BPTresSetFadeColorAndAmount(class UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, const struct FLinearColor& InFadeColor, float InAmount) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresPlayerResetStyle(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresPlayerDisableWallRunPhysXCollision(class UObject* WorldContextObject, bool bDisable) {};

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static bool BPTresIsFadeChange(class UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer) { return false; };

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static float BPTresGetFadeAmount(class UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer) { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresDoAttractionFlowMarkerDraw(class UObject* WorldContextObject, class ATresCharPawnBase* InPawn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresCinematicPlayerTrinityDie(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresCinematicChrTurnTo(class UObject* WorldContextObject, class ATresCharPawnBase* InPawn, const FVector& InLocation, bool InDisableWeapon) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BPTresCheckSpecialShipLevel(class UObject* WorldContextObject) { return false; };

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void BPTresCancelFade(class UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresActorMoveToLocation(class UObject* WorldContextObject, class AActor* MoveActor, const struct FVector& Destination, float Time, bool bSnapFloor, bool bRotationYaw, const FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BPTresActorMoveToActor(class UObject* WorldContextObject, class AActor* MoveActor, class AActor* DestinationActor, float Time, bool bSnapFloor, bool bRotationYaw, const FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresUpdateDlcChallengeAchievementRecord(class UObject* WorldContextObject, ETresDlcChallengeRecordID InRecordID) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresUnlockBattlePortalRewardAction(class UObject* WorldContextObject, FString& OutRewardStr) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresToSecondHalfForLevel(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresStopForceFeedbackAll(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresStopForceFeedback(class UObject* WorldContextObject, int InPlayerIndex) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresStartGameOverLoopSE(class UObject* WorldContextObject, ETresGameOverKind InKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresStartGameOverEvent(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresStartGameOver(class UObject* WorldContextObject, ETresGameOverKind InGameOverKind, bool bPlayDeadSE) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresStartDlcCheatAchievement(class UObject* WorldContextObject, ETresDlcCheatAchievementID InCheatAchievementID, int InOption, int InOption2) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresStartCinematicModeForLevel(class UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bPlayerStateClear, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect, bool bChangeTPViewMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetStateTableIndex(class UObject* WorldContextObject, int dIndex, float fOverrideCoolDownTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetShopLevel(class UObject* WorldContextObject, int InShopLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetPlayerGrowthType(class UObject* WorldContextObject, ETresPlayerGrowthType InGrowthType, ETresPlayerAbilityGrowthType InAbilityType) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void BP_TresSetKinematicEnable(bool bEnable, float InTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetGumiShopLevel(class UObject* WorldContextObject, int InShopLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetGameOverMenuType(class UObject* WorldContextObject, ETresGameOverMenuType InKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetEnableReplicaAttackForLevel(class UObject* WorldContextObject, bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetBattleLevelFromName(class UObject* WorldContextObject, const FName& BattleLevelName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetBattleLevelAuto(class UObject* WorldContextObject, const FName& FlagName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresSetBattleLevel(class UObject* WorldContextObject, int InBattleLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresRiseShopLevel(class UObject* WorldContextObject, int InShopLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresRiseGumiShopLevel(class UObject* WorldContextObject, int InShopLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresRiseBattleLevel(class UObject* WorldContextObject, int InBattleLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresReturnCharEquipItems(class UObject* WorldContextObject, ETresChrUniqueID InChrID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresResetClipLength(class UObject* WorldContextObject, const FName& InGroupName, float InTransitionTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresRequestToMickeyDownStateForLevel(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresRequestPreLastHolyForLevel(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresRequestFullFireLaser(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresRequestChangeStateToTiredForLevel(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresRequestActionStartForLevel(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresPlayVoiceAndLipForGameStartForLevel(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresPlayForceFeedback(class UObject* WorldContextObject, ETresForceFeedbackKind InKind, bool InLooping, int InPlayerIndex) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresOverwriteClipLength(class UObject* WorldContextObject, float InOverwriteClipLength, const FName& InGroupName, float InTransitionTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresOnStartPreLastHolyForLevel(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresLineTraceByChannel(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult& OutHit) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsSimultaneoutWarpAttackStateForLevel(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsPlayerHoldCameraState(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsLuckyMarkRecorded(class UObject* WorldContextObject, const FName& InMarkId) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsIdleStateForLevel(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsGameEnablePerformanceCamera(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsGameEnableForceFeedback(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsFoodstuffActorNeedSpawn(class UObject* WorldContextObject, const FName& InKeyName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsDlcEnableCheatMode(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsDlcEnableChallengeMode(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool BP_TresIsDlcCheatAchievementClearAll() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool BP_TresIsDlcCheatAchievementClear(ETresDlcCheatAchievementID InCheatAchievementID) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsConfigEnablePerformanceCamera(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsConfigEnableForceFeedback(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresIsConfigEnableControlTypeB(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresHaveItem(class UObject* WorldContextObject, const FName& InItemKeyName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresHaveAllSignKeyItem(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresGetVictoryBonus(class UObject* WorldContextObject, const FName& InFlagName, bool bShowInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static int BP_TresGetShopLevel(class UObject* WorldContextObject) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresGetPrize(class UObject* WorldContextObject, TArray<TEnumAsByte<EPRIZE_KIND>> InPrizeItems) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresGetItem(class UObject* WorldContextObject, const FName& InItemKeyName, int InNum, bool bShowInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static TEnumAsByte<ETresMiRxHolySealType> BP_TresGetHolySealTypeForLevel(class UObject* WorldContextObject) { return ETresMiRxHolySealType::ETresMiRxHolySealType_HOLY_SEAL_TYPE_FULL_FIRE; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static int BP_TresGetGumiShopLevel(class UObject* WorldContextObject) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresGetCrabItem(class UObject* WorldContextObject, int InItemNum) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static int BP_TresGetBattleLevel(class UObject* WorldContextObject) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static int BP_TresGetBackyardItemNum(class UObject* WorldContextObject, const FName& InItemKeyName) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresGameSetMinigame(class UObject* WorldContextObject, ETresGameMiniGameType InKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresGameChangePlayer(class UObject* WorldContextObject, ETresPlayerUniqueID InKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresDropBackyardItemOne(class UObject* WorldContextObject, const FName& InItemKeyName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresDlcEnableCheatMode(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresDlcEnableChallengeMode(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertKeyItemIDtoKeyName(class UObject* WorldContextObject, ETresItemDefKeyItem InBattleItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameWeapon(class UObject* WorldContextObject, ETresItemDefWeapon InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameReport(class UObject* WorldContextObject, ETresItemDefReport InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameProtector(class UObject* WorldContextObject, ETresItemDefProtector InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameNavimap(class UObject* WorldContextObject, ETresItemDefNavimap InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameMognet(class UObject* WorldContextObject, ETresItemDefMognetItem InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameMaterial(class UObject* WorldContextObject, ETresItemDefMaterial InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameLSIGame(class UObject* WorldContextObject, ETresItemDefLSIGameItem InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameKeyitem(class UObject* WorldContextObject, ETresItemDefKeyItem InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameGumiSticker(class UObject* WorldContextObject, ETresItemDefGumiSticker InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameGumiShipBP(class UObject* WorldContextObject, ETresItemDefGumiShipBP InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameGumiPattern(class UObject* WorldContextObject, ETresItemDefGumiPattern InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameGumiParts(class UObject* WorldContextObject, ETresItemDefGumiParts InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameGumiMaterial(class UObject* WorldContextObject, ETresItemDefGumiMaterial InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameGumiEtc(class UObject* WorldContextObject, ETresItemDefGumiEtc InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameFoodstuff(class UObject* WorldContextObject, ETresItemDefFoodstuff InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameFood(class UObject* WorldContextObject, ETresItemDefFood InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameCamp(class UObject* WorldContextObject, ETresItemDefCampItem InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameBattle(class UObject* WorldContextObject, ETresItemDefBattleItem InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertItemIDtoKeyNameAccessory(class UObject* WorldContextObject, ETresItemDefAccessory InItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertFoodstuffItemIDtoKeyName(class UObject* WorldContextObject, ETresItemDefFoodstuff InFoodstuffItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FName BP_TresConvertBattleItemIDtoKeyName(class UObject* WorldContextObject, ETresItemDefBattleItem InBattleItemID) { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContext", LatentInfo = "LatentInfo"))
	static void BP_TresCheckPhotoHologramUnlock(class UObject* WorldContext, const FLatentActionInfo& LatentInfo) {}

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_TresCheckDlcCheatAchievement(class UObject* WorldContextObject, ETresDlcCheatAchievementID InCheatAchievementID) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresChangeCharEquipWeapon(class UObject* WorldContextObject, ETresChrUniqueID InChrID, ETresItemDefWeapon InWeaponID) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresAddShopLevel(class UObject* WorldContextObject, int InAddLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_TresAddGumiShopLevel(class UObject* WorldContextObject, int InAddLevel) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector BP_SetVectorElement(const struct FVector& Vec, bool bSetX, float X, bool bSetY, float Y, bool bSetZ, float Z) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FRotator BP_SetRotatorElement(const struct FRotator& Rot, bool bSetX, float RollX, bool bSetY, float PitchY, bool bSetZ, float YawZ) { return FRotator::FRotator(); };

	//TODO ENGINE IMPLEMENTATION REQUIRED
	//UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	//static void BP_SetFadeColorAndAmount(class UObject* WorldContextObject, const struct FLinearColor& InFadeColor, float InAmount, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_ReqTresGameQuitMinigameNoMapJump(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_ReqTresGameQuitMinigame(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static bool BP_IsActorExistDirection(class AActor* Actor1, TEnumAsByte<ETresdirectionType> DirType, class AActor* Actor2) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_GotoTitle(class UObject* WorldContextObject, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BP_GotoMemoryArchive(class UObject* WorldContextObject, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind, const FName& ReturnMapName, const FName& ReturnPlayerStartTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static TEnumAsByte<ETresGameLevelID> BP_GetGameLevel() { return ETresGameLevelID::TRES_GAME_LVID_BEGINNER; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static FVector BP_GetActorSpecifiedDirectionDistanceLocation(class AActor* Actor, TEnumAsByte<ETresdirectionType> DirType, float Distance) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool BP_FoodstuffGetTeamPrize(class UObject* WorldContextObject, const FName& InKeyName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void BP_DebugSetStartMapTypeDLC(bool bReMindDLC) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static int BP_ConvertIntDamage(int Damage) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void BP_CallFunctionByName(class AActor* Actor, const FString& FunctionName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary")
	static void BP_AddMunny(int munny) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void AllPrizeCollection(class UObject* WorldContextObject, class ATresCharPawnBase* InPawn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void AllEndLensEffect(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void AllEndCameraPositionEffect(class UObject* WorldContextObject) {};
};
