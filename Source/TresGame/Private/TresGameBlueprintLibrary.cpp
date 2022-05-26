#include "TresGameBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class ATresCharPawnBase;
class UObject;
class USceneComponent;
class AActor;
class ATresGumiShipWorldSymbolActor;
class USkeletalMeshComponent;
class UTresFieldVoice;
class UTresTimerTask;
class USwfMovie;
class UTresUIDataAssetWorkshop;
class ATresPlayerPawnBase;
class AEmitterCameraLensEffectBase;
class ATresEnemyPawnBase;
class UTresTexturePump;
class UActorComponent;
class AMatineeActor;
class UMaterialInterface;
class ATresLgRxManager;
class UTresFriendComponent;
class ATresNpcPawn_c_npc;
class UInstancedStaticMeshComponent;
class ULightComponent;
class UTresMapSet;
class UTresActorVoice;
class UParticleSystem;
class UParticleSystemComponent;
class ATresCameraNormal;
class UMaterialInstanceDynamic;
class ATresNote;
class APlayerCameraManager;
class ATresPlayerControllerBase;
class ATresGameState;
class ATresLevelScriptActor;
class UStaticMeshComponent;
class ATresPlayerControllerLowerBase;
class ATresGumiShipPlayerPawnBase;
class ATresCameraManager;
class APlayerController;
class UTresTaskBase;
class ATresCameraBase;
class UCameraShake;

void UTresGameBlueprintLibrary::WaitForFriendRunningBehaviorTree(UObject* WorldContext, FLatentActionInfo LatentInfo, ETresChrUniqueID NpcChrID) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartWipeOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartWipeIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartWhiteOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartWhiteIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartGameOverWhiteOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartFadeOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartFadeIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartCinematicModeEx(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bDisableCameraMove, ETresCinematicPlayerStateType PlayerState, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion, bool bShowPlayerAuraEffect, bool bDisableIKinema, bool bPauseAI, bool bRecordLevelEntity) {
}

void UTresGameBlueprintLibrary::WaitBPTresStartCinematicMode(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, ETresCinematicPlayerStateType InPlayerState, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect) {
}

void UTresGameBlueprintLibrary::WaitBPTresSetupChatMode(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawn1, ATresCharPawnBase* InPawn2) {
}

void UTresGameBlueprintLibrary::WaitBPTresIsReadyCinematicMode(UObject* WorldContextObject, FLatentActionInfo InLatentInfo) {
}

void UTresGameBlueprintLibrary::WaitBPTresGetVictoryBonus(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, FName InFlagName) {
}

void UTresGameBlueprintLibrary::WaitBPTresGetMultiItem2(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<FName>& InItemKeyNames, const TArray<int32>& InItemNums) {
}

void UTresGameBlueprintLibrary::WaitBPTresGetMultiItem(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, FName InItemKeyName1, int32 InItemNum1, FName InItemKeyName2, int32 InItemNum2, FName InItemKeyName3, int32 InItemNum3, FName InItemKeyName4, int32 InItemNum4, FName InItemKeyName5, int32 InItemNum5) {
}

void UTresGameBlueprintLibrary::WaitBPTresGetKeyitem(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, FName InItemKeyName) {
}

void UTresGameBlueprintLibrary::WaitBPTresComNpcEndMotion(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawnComNpc, ATresCharPawnBase* InPawnTarget) {
}

void UTresGameBlueprintLibrary::WaitBPTresCinematicPlayerIdling(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool InNormalIdle, float InTimeOut) {
}

void UTresGameBlueprintLibrary::WaitBPTresCinematicChrTurnTo(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawn, const FVector& InLocation, bool InDisableWeapon) {
}

void UTresGameBlueprintLibrary::WaitBPTresCinematicChrLand(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawn, float InTime) {
}

void UTresGameBlueprintLibrary::WaitBPTresCancelFade(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause) {
}

void UTresGameBlueprintLibrary::WaitBPTresCameraNormalChange(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float InTimeOut) {
}

void UTresGameBlueprintLibrary::WaitBPTresCameraInterpChange(UObject* WorldContextObject, AActor* Camera, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::WaitBPTresBattleModeEnd(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float InTimeOut) {
}

void UTresGameBlueprintLibrary::TresWaitLevelStreaming(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool WaitMakeVisible, int32 WaitCount) {
}

void UTresGameBlueprintLibrary::TresWaitCycle(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 WaitNum) {
}

void UTresGameBlueprintLibrary::TresWaitCompleteDynamicNavMesh(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresUI_WaitForVideoPrepare(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 SlotNo) {
}

void UTresGameBlueprintLibrary::TresUI_WaitForVideoFinish(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresUI_WaitForVideoComponentPrepare(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresUI_WaitForBattleReport(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresUI_StopVideo() {
}

void UTresGameBlueprintLibrary::TresUI_StartCommandModeEx(ETresUIHudCommandExKind CommandKindEx) {
}

void UTresGameBlueprintLibrary::TresUI_StartCommandMode(TEnumAsByte<ETresCommandKind> CommandKind) {
}

void UTresGameBlueprintLibrary::TresUI_ShowTimerNewRecord() {
}

void UTresGameBlueprintLibrary::TresUI_ShowHudUx() {
}

void UTresGameBlueprintLibrary::TresUI_ShowHudStatus() {
}

void UTresGameBlueprintLibrary::TresUI_ShowHudCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx) {
}

void UTresGameBlueprintLibrary::TresUI_ShowHudCommand() {
}

bool UTresGameBlueprintLibrary::TresUI_ShowGetTreasurePrizeSnowCurling(int32 PrizeCount, bool IsComplete) {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_ShowGetBonusPointSnowCurling(int32 Point) {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_ShowCountDownSnowCurling(ETresUISnowSlideCountDownType Type) {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_SetVideoFinishRemoteEvent(FName EventName) {
}

void UTresGameBlueprintLibrary::TresUI_SetTimerRecordTime(float Time) {
}

void UTresGameBlueprintLibrary::TresUI_SetTimerColor(ETresUITimerColor ColorType) {
}

void UTresGameBlueprintLibrary::TresUI_SetSubtitleText(const FTresLocText& Text) {
}

bool UTresGameBlueprintLibrary::TresUI_SetRightTimerRecordTimeSnowCurling(float fTime) {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_SetRightTimerNewRecordSnowCurling() {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_SetPauseHintText(const FTresLocText& HintText) {
}

void UTresGameBlueprintLibrary::TresUI_SetPauseGameHelp(ETresGameHelp GameHelpID) {
}

void UTresGameBlueprintLibrary::TresUI_SetNaviMapMarkerPcStart(AActor* Actor) {
}

void UTresGameBlueprintLibrary::TresUI_SetMissionGageValue(int32 Value) {
}

void UTresGameBlueprintLibrary::TresUI_SetMissionGageText(const FTresLocText& Text) {
}

void UTresGameBlueprintLibrary::TresUI_SetMissionGageIconType(ETresUIMissionGageIconType Type) {
}

void UTresGameBlueprintLibrary::TresUI_SetMissionGageColorType(ETresUIMissionGageColorType Type) {
}

void UTresGameBlueprintLibrary::TresUI_SetMissionCounter(int32 count) {
}

void UTresGameBlueprintLibrary::TresUI_SetMaxMissionGageValue(int32 Value) {
}

void UTresGameBlueprintLibrary::TresUI_SetLyricsText(const FTresLocText& Text) {
}

void UTresGameBlueprintLibrary::TresUI_SetLoadingScreenType(ETresUILoadingScreenType Type) {
}

void UTresGameBlueprintLibrary::TresUI_SetLoadingScreenNewGame(FName DefineName) {
}

void UTresGameBlueprintLibrary::TresUI_SetKairiCounter(int32 count) {
}

void UTresGameBlueprintLibrary::TresUI_SetInitHudSpecialShipGoalMeter(float Start, float Goal) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudSpecialShipGoalMeter(float fMeter, ETresUIHudSpecialShipMarker markerKind) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudSpecialShipGoalMarker(AActor* Actor) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudSpecialShipGoalDistance(float fMeter) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudPuddingStartCountDown(ETresUIHudPuddingCountDown CountKind) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudPuddingFinishCountDown(ETresUIHudPuddingCountDown CountKind) {
}

bool UTresGameBlueprintLibrary::TresUI_SetHudLeftScoreSnowCurling(int32 nScore) {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_SetHudLeftScorePudding(int32 Score, bool Record) {
}

bool UTresGameBlueprintLibrary::TresUI_SetHudLeftScoreChainBonusSnowCurling(float fRate, int32 nCounter) {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_SetHudLeftScore(int32 Score, bool Record) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBlackPearlChaseMeter(float Meter, ETresUIHudBlackPearlMarker markerKind) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBlackPearlChaseMarkerAlert(ETresUIHudBlackPearlAlert alertKind) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBlackPearlChaseAlert(bool IsAlert) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBaymaxTime(bool Record) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBaymaxScore(int32 Score, bool Record) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBaymaxLocationMarker(AActor* Marker, float Distance) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBaymaxHeroMarker(ATresCharPawnBase* CharPawn, ETresUIHudBaymaxHero HeroKind, float Gauge, float Distance, FVector Location) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBaymaxFinish(bool Visible) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBaymaxEnemyMarker(ATresCharPawnBase* CharPawn, float Distance) {
}

void UTresGameBlueprintLibrary::TresUI_SetHudBaymaxCountDown(ETresUIHudBaymaxCountDown CountKind) {
}

void UTresGameBlueprintLibrary::TresUI_SetGigasGameTotalScore(int32 Score) {
}

void UTresGameBlueprintLibrary::TresUI_SetGigasGameGetScore(int32 GetScore) {
}

void UTresGameBlueprintLibrary::TresUI_SetGigasGameChainBonus(float Bonus) {
}

void UTresGameBlueprintLibrary::TresUI_SetGameHelpFlag(ETresGameHelp HelpId, bool Flag) {
}

void UTresGameBlueprintLibrary::TresUI_SetEnableNaviMap(bool bEnable) {
}

void UTresGameBlueprintLibrary::TresUI_SetEnableKeepVisibleCockpitInCinematic(ETresUICinematicCockpitID CockpitID, bool IsEnable) {
}

int32 UTresGameBlueprintLibrary::TresUI_SetCutsceneText(const FTresLocText& Text, bool IsScreenCenter, ETresUITextAlignH AlignH, ETresUITextAlignV AlignV, float DisplayTime, ETresUICutsceneTextShowMethod ShowMethod, float ShowTime, ETresUICutsceneTextHideMethod HideMethod, float HideTime) {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_SetCodeMenuSecret() {
}

void UTresGameBlueprintLibrary::TresUI_SetCodeMenuFirst(bool bCheat, bool bChallenge) {
}

void UTresGameBlueprintLibrary::TresUI_SetActiveHudWorkshopPadGuide(TEnumAsByte<ETresUIPadButtonType> ButtonType, bool IsActive) {
}

void UTresGameBlueprintLibrary::TresUI_ResumeVideo(int32 SlotNo) {
}

void UTresGameBlueprintLibrary::TresUI_RestorePauseHintText() {
}

void UTresGameBlueprintLibrary::TresUI_ResetHudCommandState() {
}

void UTresGameBlueprintLibrary::TresUI_RemoveOptionalGameOverHint(FName HintID) {
}

void UTresGameBlueprintLibrary::TresUI_ReleaseVideoSlotAll() {
}

void UTresGameBlueprintLibrary::TresUI_ReleaseVideoSlot(int32 SlotNo) {
}

void UTresGameBlueprintLibrary::TresUI_PrepareVideo(const FString& MovieFilePath, bool PauseWhenPrepared, bool AlphaComposite, int32 SlotNo) {
}

void UTresGameBlueprintLibrary::TresUI_PreInitializeHudSpecialShip() {
}

void UTresGameBlueprintLibrary::TresUI_PlayVideoPhilharmonic(bool AlphaComposite, int32 SlotNo) {
}

void UTresGameBlueprintLibrary::TresUI_PlayVideo(const FString& MovieFilePath, bool AlphaComposite, int32 SlotNo) {
}

void UTresGameBlueprintLibrary::TresUI_PauseVideo() {
}

void UTresGameBlueprintLibrary::TresUI_OpenUINormalLoadScreen(const FColor BgColor) {
}

void UTresGameBlueprintLibrary::TresUI_OpenThankYouForPlaying(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float IgnoreInputTime, float DisplayTime) {
}

int32 UTresGameBlueprintLibrary::TresUI_OpenTextWindow(float Left, float Top, float Right, float Bottom, const FString& Text, bool CloseOnLevelChange, float LifeTime) {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_OpenSubtitle(const FTresLocText& Text, ETresUISubtitleUsage SubtitleUsage) {
}

bool UTresGameBlueprintLibrary::TresUI_OpenRightTimerCountUpSnowCurling(UTresTimerTask* pTask, float fStartTime) {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_OpenRetryMenu() {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_OpenResultSnowCurling(UObject* WorldContextObject, FLatentActionInfo latentInfo_, float Time, int32 Score, int32 timeBonus, int32 damageBonus, int32 Total, int32 treasureCnt, bool bTimeUpdated, bool bScoreUpdated, bool bTreasureComplete, ETresUISnowSlideRank Rank) {
    return false;
}

int32 UTresGameBlueprintLibrary::TresUI_OpenPlayerSelectLR(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FTresLocText& TextNameL, const FTresLocText& TextNameR, int32& OutSelected, float fIgnoreInputTime, bool AutoClose) {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_OpenOptionWindow(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Left, float Top, float Right, float Bottom, const FString& Message, const FString& Option1, const FString& Option2, const FString& Option3, const FString& Option4, const FString& Option5, const FString& Option6, const FString& Option7, const FString& Option8, const FString& Option9, const FString& Option10, int32& Selected) {
}

void UTresGameBlueprintLibrary::TresUI_OpenOlafGage() {
}

void UTresGameBlueprintLibrary::TresUI_OpenMissionGage(FName DataTableKeyName) {
}

void UTresGameBlueprintLibrary::TresUI_OpenMissionCounter(int32 InitializeCount, FName DataTableKeyName, bool IsOverMaxCount) {
}

int32 UTresGameBlueprintLibrary::TresUI_OpenMessage(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ETresUIMessageBGColor> BgColor, TEnumAsByte<ETresUIMessageTitleType> TitleType, const FTresLocText& MessageText, const FTresUIWindowSetting& WindowSetting) {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_OpenLoadingScreen(ETresUILoadingScreenBGColor BgColor) {
}

void UTresGameBlueprintLibrary::TresUI_OpenKairiCounter(int32 InitializeCount) {
}

void UTresGameBlueprintLibrary::TresUI_OpenInformation(const FTresLocText& InformationText, bool AutoClose, float OptionalDisplayTime) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudWorkshop(UTresUIDataAssetWorkshop* UIDataAssetWorkshop) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudPudding() {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudLuxord(float fRedZonePlayer, float fRedZoneEnemy, float fRedZonePlayer2, float fRedZoneEnemy2) {
}

bool UTresGameBlueprintLibrary::TresUI_OpenHudLeftScoreSnowCurling(int32 nRecord) {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_OpenHudLeftScorePudding(ETresUIHudCommonKind ScoreKind, ETresUIHudCommonIcon Icon, int32 RecordScore) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudLeftScore(ETresUIHudCommonKind ScoreKind, ETresUIHudCommonIcon Icon, int32 RecordScore) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudBlackPearlChase(float Start, float Goal) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudBaymaxResult(float Time, int32 Score, int32 Bonus, ETresUIHudBaymaxResult rankKind, bool RecordTime, bool RecordScore) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudBaymaxLiveFeed(int32 Kind) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHudBaymax(ETresUIHudBaymaxKind HudKind, float RecordTime, int32 RecordScore, UTresTimerTask* Task) {
}

void UTresGameBlueprintLibrary::TresUI_OpenHologramStartMenu(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName ReturnMapName, FName ReturnPlayerStartTag) {
}

void UTresGameBlueprintLibrary::TresUI_OpenGradeText(ETresUIGradeTextValue Value) {
}

void UTresGameBlueprintLibrary::TresUI_OpenGigasGame(UTresTimerTask* Task) {
}

void UTresGameBlueprintLibrary::TresUI_OpenGameHelpWithMessage(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ETresGameHelp HelpId, bool WithPause, bool bTutorial, const FString& MessageTextID, bool& OutExecMessage) {
}

void UTresGameBlueprintLibrary::TresUI_OpenGameHelp(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ETresGameHelp HelpId, bool WithPause) {
}

int32 UTresGameBlueprintLibrary::TresUI_OpenGameDataInstallMessage(ETresUIGameDataInstallMessageType InstallMessageType, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_OpenCountUpTimer(UTresTimerTask* Task, bool IsLeft) {
}

void UTresGameBlueprintLibrary::TresUI_OpenCountDownTimer(UTresTimerTask* Task, float StartTime, float WarningTime, float AlertTime, bool IsLeft) {
}

int32 UTresGameBlueprintLibrary::TresUI_OpenConfirm(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ETresUIMessageBGColor> BgColor, TEnumAsByte<ETresUIMessageTitleType> TitleType, const FTresLocText& MessageText, const TArray<FTresLocText> ButtonTexts, const FTresUIWindowSetting& WindowSetting, int32 DefaultSelectedIndex, int32& OutSelected) {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_OpenCodeMenu(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool bNoResetApFree) {
}

int32 UTresGameBlueprintLibrary::TresUI_OpenChoice(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FTresLocText& Text, const TArray<FTresLocText>& Choices, const FTresUIWindowSetting& WindowSetting, int32 DefaultSelectedIndex, int32& OutSelected, bool AutoClose, bool DecideSilent, ETresUIDialogColor DialogColor) {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_OpenCenterInformation(const FTresLocText& InformationText) {
}

void UTresGameBlueprintLibrary::TresUI_OpenCampMenuNeedCloseConfirm(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresUI_OpenCampMenu(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresUI_OpenBattleReport() {
}

void UTresGameBlueprintLibrary::TresUI_NotifyHudSpecialShipGoalMeterAlert(bool bAlert) {
}

void UTresGameBlueprintLibrary::TresUI_MapInNoticeMessage(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool EnableBGMask) {
}

void UTresGameBlueprintLibrary::TresUI_LoadMissionGageIcon(USwfMovie* IconAsset) {
}

bool UTresGameBlueprintLibrary::TresUI_IsPlayingVideo() {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_IsOpenedGameHelpFlag(ETresGameHelp HelpId) {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_IsGameDataInstallCompleted() {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_IsEmptyVideoSlot(int32 SlotNo) {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_IsClosedLoadingScreen() {
    return false;
}

bool UTresGameBlueprintLibrary::TresUI_InitializeSnowSlide() {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_HideHudUx() {
}

void UTresGameBlueprintLibrary::TresUI_HideHudStatus() {
}

void UTresGameBlueprintLibrary::TresUI_HideHudShining() {
}

void UTresGameBlueprintLibrary::TresUI_HideHudCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx) {
}

void UTresGameBlueprintLibrary::TresUI_HideHudCommand() {
}

int32 UTresGameBlueprintLibrary::TresUI_GetMissionCounter() {
    return 0;
}

FColor UTresGameBlueprintLibrary::TresUI_GetLoadingScreenFadeColor() {
    return FColor{};
}

int32 UTresGameBlueprintLibrary::TresUI_GetKairiCounter() {
    return 0;
}

void UTresGameBlueprintLibrary::TresUI_EndCommandModeEx(ETresUIHudCommandExKind CommandKindEx) {
}

void UTresGameBlueprintLibrary::TresUI_EndCommandMode(TEnumAsByte<ETresCommandKind> CommandKind) {
}

bool UTresGameBlueprintLibrary::TresUI_DisposeSnowSlide() {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_DeleteHudGigasGimmickMarker(USceneComponent* Component, int32 ID) {
}

void UTresGameBlueprintLibrary::TresUI_DeleteHudBaymaxLocationMarker() {
}

void UTresGameBlueprintLibrary::TresUI_DeleteHudBaymaxHeroMarker(ETresUIHudBaymaxHero HeroKind) {
}

void UTresGameBlueprintLibrary::TresUI_DeleteHudBaymaxEnemyMarker() {
}

void UTresGameBlueprintLibrary::TresUI_DeleteAllActionCommand() {
}

void UTresGameBlueprintLibrary::TresUI_DeleteActionCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx, bool bDecision) {
}

void UTresGameBlueprintLibrary::TresUI_CountUpOlafGage(ETresUIOlafPartsType Type) {
}

void UTresGameBlueprintLibrary::TresUI_CountDownOlafGage() {
}

void UTresGameBlueprintLibrary::TresUI_CloseWindow(int32 WindowHandle, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresUI_CloseUINormalLoadScreen() {
}

void UTresGameBlueprintLibrary::TresUI_CloseTimer() {
}

void UTresGameBlueprintLibrary::TresUI_CloseSubtitle() {
}

bool UTresGameBlueprintLibrary::TresUI_CloseRightTimerSnowCurling() {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_CloseOlafGage() {
}

void UTresGameBlueprintLibrary::TresUI_CloseMissionGage() {
}

void UTresGameBlueprintLibrary::TresUI_CloseMissionCounter() {
}

void UTresGameBlueprintLibrary::TresUI_CloseLoadingScreen() {
}

void UTresGameBlueprintLibrary::TresUI_CloseKairiCounter() {
}

void UTresGameBlueprintLibrary::TresUI_CloseInformation() {
}

void UTresGameBlueprintLibrary::TresUI_CloseHudWorkshop() {
}

void UTresGameBlueprintLibrary::TresUI_CloseHudPudding() {
}

void UTresGameBlueprintLibrary::TresUI_CloseHudLuxord() {
}

bool UTresGameBlueprintLibrary::TresUI_CloseHudLeftScoreSnowCurling() {
    return false;
}

void UTresGameBlueprintLibrary::TresUI_CloseHudLeftScorePudding(bool NewRecordDisplay) {
}

void UTresGameBlueprintLibrary::TresUI_CloseHudLeftScore(bool NewRecordDisplay) {
}

void UTresGameBlueprintLibrary::TresUI_CloseHudBlackPearlChase() {
}

void UTresGameBlueprintLibrary::TresUI_CloseHudBaymaxLiveFeed() {
}

void UTresGameBlueprintLibrary::TresUI_CloseHudBaymax() {
}

void UTresGameBlueprintLibrary::TresUI_CloseGigasGameGetScoreAndChainBonus(int32 totalScore) {
}

void UTresGameBlueprintLibrary::TresUI_CloseGigasGame() {
}

void UTresGameBlueprintLibrary::TresUI_CloseCutsceneText(int32 WindowHandle) {
}

void UTresGameBlueprintLibrary::TresUI_CloseCenterInformation() {
}

void UTresGameBlueprintLibrary::TresUI_ClearPauseGameHelp() {
}

void UTresGameBlueprintLibrary::TresUI_ClearOptionalGameOverHint() {
}

void UTresGameBlueprintLibrary::TresUI_ClearNaviMapMarkerPcStart() {
}

void UTresGameBlueprintLibrary::TresUI_ClearLyricsText() {
}

void UTresGameBlueprintLibrary::TresUI_ClearInformationTextCache() {
}

void UTresGameBlueprintLibrary::TresUI_CachePauseHintText() {
}

void UTresGameBlueprintLibrary::TresUI_ApplyCustomize() {
}

void UTresGameBlueprintLibrary::TresUI_AddOptionalGameOverHint(FName HintID) {
}

void UTresGameBlueprintLibrary::TresUI_AddHudGigasGimmickMarker(USceneComponent* Component) {
}

void UTresGameBlueprintLibrary::TresUI_AddHudBaymaxLocationMarker(AActor* Marker, FVector Location) {
}

void UTresGameBlueprintLibrary::TresUI_AddHudBaymaxHeroMarker(ATresCharPawnBase* CharPawn, ETresUIHudBaymaxHero HeroKind, float GaugeMax, FVector InitialLocation) {
}

void UTresGameBlueprintLibrary::TresUI_AddHudBaymaxEnemyMarker(ATresCharPawnBase* CharPawn) {
}

void UTresGameBlueprintLibrary::TresUI_AddHudBaymaxDataPoint(int32 Point) {
}

void UTresGameBlueprintLibrary::TresUI_AddGigasGameGimmickBonus(ETresUIGigasGameGimmickType Type, const FVector& Location, int32 Bonus) {
}

void UTresGameBlueprintLibrary::TresUI_AddGigasGameCommonPoint(ATresEnemyPawnBase* DeadEnemy, int32 Score) {
}

void UTresGameBlueprintLibrary::TresUI_AddGigasGameAcePoint(ATresEnemyPawnBase* DeadEnemy, int32 Score) {
}

void UTresGameBlueprintLibrary::TresUI_AddActionCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx) {
}

void UTresGameBlueprintLibrary::TresStopShowMapNameSystem(bool Stop) {
}

void UTresGameBlueprintLibrary::TresStopPumpingTextureStream() {
}

void UTresGameBlueprintLibrary::TresStopPlayerHoldCamera(UObject* WorldContextObject, bool bStop) {
}

void UTresGameBlueprintLibrary::TresStartTextureResidentForTaggedActors(UObject* WorldContextObject, FName TagName) {
}

void UTresGameBlueprintLibrary::TresStartTextureResidentForActors(const TArray<AActor*>& Actors) {
}

void UTresGameBlueprintLibrary::TresStartTextureResidentForActor(AActor* Actor) {
}

void UTresGameBlueprintLibrary::TresStartTextureResident(UObject* WorldContextObject, FName ResidentTag, bool LoadTexture, bool Reset) {
}

void UTresGameBlueprintLibrary::TresStartTalkEvent(UObject* WorldContextObject, UTresFieldVoice* Asset, FName AnimName) {
}

void UTresGameBlueprintLibrary::TresStartPumpingTextureStream(UTresTexturePump* InTexturePump) {
}

void UTresGameBlueprintLibrary::TresStartCinematicModeEx(UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bDisableCameraMove, ETresCinematicPlayerStateType PlayerState, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion, bool bShowPlayerAuraEffect, bool bDisableIKinema, bool bPauseAI, bool bRecordLevelEntity) {
}

void UTresGameBlueprintLibrary::TresStartCinematicMode(UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bPlayerStateClear, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect, bool bChangeTPViewMode) {
}

void UTresGameBlueprintLibrary::TresStartBossDefeatEffect(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresSpawnActorFromClassPath(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor*& SpawnedActor, const FString& ActorClassPath, const FVector& Location, const FRotator& Rotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, bool AsyncLoad) {
}

void UTresGameBlueprintLibrary::TresShowMapName(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresSetVisibleGimmickAction(UObject* WorldContextObject, bool bVisible) {
}

void UTresGameBlueprintLibrary::TresSetVisibleComNpc(UObject* WorldContextObject, bool bEnable, FName InName) {
}

void UTresGameBlueprintLibrary::TresSetTransientComponent(UActorComponent* Component) {
}

void UTresGameBlueprintLibrary::TresSetTransientActor(AActor* Actor) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanWorldMinY(UObject* WorldContextObject, FName TagName, float WorldMinY) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanWorldMinX(UObject* WorldContextObject, FName TagName, float WorldMinX) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanWorldMaxY(UObject* WorldContextObject, FName TagName, float WorldMaxY) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanWorldMaxX(UObject* WorldContextObject, FName TagName, float WorldMaxX) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanWindSpeed(UObject* WorldContextObject, FName TagName, float WindSpeed) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanWindAngle(UObject* WorldContextObject, FName TagName, float WindAngle) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanWavelength(UObject* WorldContextObject, FName TagName, float Wavelength) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanTimeDilationFactor(UObject* WorldContextObject, FName TagName, float TimeDilationFactor) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanSteepness(UObject* WorldContextObject, FName TagName, float Steepness) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanSmallWaveSuppression(UObject* WorldContextObject, FName TagName, float SmallWaveSuppression) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanOppositeWaveSuppression(UObject* WorldContextObject, FName TagName, float OppositeWaveSuppression) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanOmegaPeriod(UObject* WorldContextObject, FName TagName, float OmegaPeriod) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_OceanAmplitude(UObject* WorldContextObject, FName TagName, float Amplitude) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_LOD(UObject* WorldContextObject, FName TagName, bool bForcedLodModelOverride, int32 ForcedLodModel, bool bSQEXForceLODDisableOverride, bool bSQEXForceLODDisable) {
}

void UTresGameBlueprintLibrary::TresSetTaggedActorProperty_DistanceCulling(UObject* WorldContextObject, FName TagName, bool bDesiredMaxDrawDistanceOverride, float DesiredMaxDrawDistance, bool bAllowCullDistanceVolumeOverride, bool bAllowCullDistanceVolume) {
}

void UTresGameBlueprintLibrary::TresSetSpecialBattleMode(UObject* WorldContextObject, bool bIsSpecialMode) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationWorldMinY(const UObject* WorldContextObject, float WorldMinY) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationWorldMinX(const UObject* WorldContextObject, float WorldMinX) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationWorldMaxY(const UObject* WorldContextObject, float WorldMaxY) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationWorldMaxX(const UObject* WorldContextObject, float WorldMaxX) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationWindSpeed(const UObject* WorldContextObject, float WindSpeed) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationWindAngle(const UObject* WorldContextObject, float WindAngle) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationUpdate(UObject* WorldContextObject, bool bEnable) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationTime(UObject* WorldContextObject, float Time) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationCPUReadBack(UObject* WorldContextObject, bool bEnable) {
}

void UTresGameBlueprintLibrary::TresSetOceanSimulationAmplitude(const UObject* WorldContextObject, float Amplitude) {
}

void UTresGameBlueprintLibrary::TresSetOceanDiveModeEnvSwitch(UObject* WorldContextObject, bool bDiveMode, bool bImmediate) {
}

void UTresGameBlueprintLibrary::TresSetMatineeForMovie(AMatineeActor* MatineeActor, bool IsMovie) {
}

void UTresGameBlueprintLibrary::TresSetIKinemaEnable(const TArray<ATresCharPawnBase*>& TresCharPawns, bool Enable, bool Force) {
}

void UTresGameBlueprintLibrary::TresSetForceMipLevelsToBeResidentForTaggedActor(UObject* WorldContextObject, FName TagName, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float Duration, int32 CinematicTextureGroups) {
}

void UTresGameBlueprintLibrary::TresSetForceMipLevelsToBeResident(const TArray<UMaterialInterface*>& Materials, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float Duration, int32 CinematicTextureGroups) {
}

void UTresGameBlueprintLibrary::TresSetEventCutsceneMaxFPSMode(UObject* WorldContextObject, bool bEnable) {
}

void UTresGameBlueprintLibrary::TresSetDisableGamePause(UObject* WorldContextObject, bool bDisable) {
}

void UTresGameBlueprintLibrary::TresSetDisableCampMenu(bool bDisable) {
}

void UTresGameBlueprintLibrary::TresSetComponentMobility(USceneComponent* Component, TEnumAsByte<EComponentMobility::Type> Type) {
}

void UTresGameBlueprintLibrary::TresSetCacheSampleTransitionSpeed(float Value) {
}

void UTresGameBlueprintLibrary::TresSaveVisibleLevelList(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresResetTaggedActorProperty(UObject* WorldContextObject, FName TagName) {
}

void UTresGameBlueprintLibrary::TresResetAllTaggedActorProperty(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresRecordComNpc(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresPrestreamTextures(const TArray<AActor*>& Actors, float Duration, bool bEnableStreaming, int32 CinematicTextureGroups) {
}

void UTresGameBlueprintLibrary::TresPrepareMap(const TArray<FName>& SubLevelNames, const bool IsDisableEditor) {
}

void UTresGameBlueprintLibrary::TresPlayFriendFaceAnimation(UObject* WorldContextObject, ETresChrUniqueID Character, FName AnimName) {
}

void UTresGameBlueprintLibrary::TresPlayFriendAnimation(UObject* WorldContextObject, ETresChrUniqueID Character, FName AnimName, float BlendInTime, bool isLoop) {
}

void UTresGameBlueprintLibrary::TresNotifyStopCutscene(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresNotifyPlayCutscene(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresNotifyOceanIslandTriggerBoxOverlap(UObject* WorldContextObject, bool Begin) {
}

void UTresGameBlueprintLibrary::TresMovieClip(const FString& greatestMomentID, const FString& clipName, float timeSecond, float startTimeSecond) {
}

void UTresGameBlueprintLibrary::TresMapJump(FName MapName, FName TargetTag, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind) {
}

void UTresGameBlueprintLibrary::TresLoadVisibleLevelList(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresLevelListVisibility(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const TArray<FName>& Names, bool Visible) {
}

void UTresGameBlueprintLibrary::TresLevelFlashGimmickActors(UObject* WorldContextObject) {
}

bool UTresGameBlueprintLibrary::TresIsSpecialBattleMode() {
    return false;
}

bool UTresGameBlueprintLibrary::TresIsPrepareMap() {
    return false;
}

bool UTresGameBlueprintLibrary::TresIsGame() {
    return false;
}

int32 UTresGameBlueprintLibrary::TresIsFindName(FName findName, const TArray<FName>& Names) {
    return 0;
}

bool UTresGameBlueprintLibrary::TresIsExistComNpc(UObject* WorldContextObject, FName InName) {
    return false;
}

bool UTresGameBlueprintLibrary::TresIsCommonAssetAsyncLoad() {
    return false;
}

bool UTresGameBlueprintLibrary::TresIsCinematicMode(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::TresIsBattleMode() {
    return false;
}

bool UTresGameBlueprintLibrary::TresIsAutoActorLoading() {
    return false;
}

bool UTresGameBlueprintLibrary::TresIsAutoActorEnd() {
    return false;
}

void UTresGameBlueprintLibrary::TresGumiShipStartCinematicMode(UObject* WorldContextObject, bool bPauseAI, bool bHideGumiShip, bool bHideCockpit, bool bDisableUserGumiShipControll, bool bDisableUserCameraControll, bool bResetTinyShipFormation, bool bResetGumiShipThrusterEffect, bool bResetGumiShipAuraEffect, bool bDestroyProjectile) {
}

void UTresGameBlueprintLibrary::TresGumiShipNotifyCinematicModeEvent(UObject* WorldContextObject, const FTresGumiShipCinematicModeEventData& CinematicModeEvent) {
}

void UTresGameBlueprintLibrary::TresGumiShipEndCinematicMode(UObject* WorldContextObject) {
}

FString UTresGameBlueprintLibrary::TresGetVoiceLanguage() {
    return TEXT("");
}

void UTresGameBlueprintLibrary::TresGetVictoryBonus(UObject* WorldContextObject, ATresCharPawnBase* InPawn, ETresVictoryBonusKind InBonus, ETresAbilityKind InAbility) {
}

void UTresGameBlueprintLibrary::TresGetOceanSimulationWorldMinY(const UObject* WorldContextObject, float& WorldMinY) {
}

void UTresGameBlueprintLibrary::TresGetOceanSimulationWorldMinX(const UObject* WorldContextObject, float& WorldMinX) {
}

void UTresGameBlueprintLibrary::TresGetOceanSimulationWorldMaxY(const UObject* WorldContextObject, float& WorldMaxY) {
}

void UTresGameBlueprintLibrary::TresGetOceanSimulationWorldMaxX(const UObject* WorldContextObject, float& WorldMaxX) {
}

void UTresGameBlueprintLibrary::TresGetOceanSimulationWindSpeed(const UObject* WorldContextObject, float& WindSpeed) {
}

void UTresGameBlueprintLibrary::TresGetOceanSimulationWindAngle(const UObject* WorldContextObject, float& WindAngle) {
}

void UTresGameBlueprintLibrary::TresGetOceanSimulationAmplitude(const UObject* WorldContextObject, float& Amplitude) {
}

ATresLgRxManager* UTresGameBlueprintLibrary::TresGetLgRxManager(UObject* WorldContextObject) {
    return NULL;
}

UTresFriendComponent* UTresGameBlueprintLibrary::TresGetFriendManager(UObject* WorldContextObject) {
    return NULL;
}

FString UTresGameBlueprintLibrary::TresGetCurrentLocale() {
    return TEXT("");
}

FString UTresGameBlueprintLibrary::TresGetCurrentLanguageScript() {
    return TEXT("");
}

FString UTresGameBlueprintLibrary::TresGetCurrentLanguage() {
    return TEXT("");
}

ATresNpcPawn_c_npc* UTresGameBlueprintLibrary::TresGetComNpc(UObject* WorldContextObject, FName InName) {
    return NULL;
}

void UTresGameBlueprintLibrary::TresGetActorsInLevel(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

void UTresGameBlueprintLibrary::TresGetActorsAll(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

void UTresGameBlueprintLibrary::TresFlushLOD(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresFlushILC(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresExecuteGarbageCollection() {
}

void UTresGameBlueprintLibrary::TresEndTextureResidentForTaggedActors(UObject* WorldContextObject, FName TagName) {
}

void UTresGameBlueprintLibrary::TresEndTextureResidentForActors(const TArray<AActor*>& Actors) {
}

void UTresGameBlueprintLibrary::TresEndTextureResidentForActor(AActor* Actor) {
}

void UTresGameBlueprintLibrary::TresEndTextureResident(UObject* WorldContextObject, FName ResidentTag) {
}

void UTresGameBlueprintLibrary::TresEndFriendFaceAnimation(UObject* WorldContextObject, ETresChrUniqueID Character) {
}

void UTresGameBlueprintLibrary::TresEndCinematicMode(UObject* WorldContextObject, bool bBattleIdlingEnd, bool bInvokeRecordedLevelEntity) {
}

void UTresGameBlueprintLibrary::TresEndBaymaxRideHud(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresEndAllTexturesResident() {
}

void UTresGameBlueprintLibrary::TresEnableTemporalAA(bool bEnable) {
}

void UTresGameBlueprintLibrary::TresEnableFriendChatMode(UObject* WorldContextObject, bool bEnable, ETresChrUniqueID InChrID) {
}

void UTresGameBlueprintLibrary::TresEnableComNpcChatMode(UObject* WorldContextObject, bool bEnable, FName InName) {
}

void UTresGameBlueprintLibrary::TresDisablePlayerDecoParts(UObject* WorldContextObject, bool bDisable) {
}

void UTresGameBlueprintLibrary::TresDirectRideVehicle(UObject* WorldContextObject, AActor* inActor, int32 InParam, float InCameraYaw, int32 InBonamikPreRoll) {
}

void UTresGameBlueprintLibrary::TresDirectReMindLgRx(UObject* WorldContextObject, AActor* inActor) {
}

void UTresGameBlueprintLibrary::TresDirectFRMountCurling(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresDirectBaymaxRide(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresDirectAFTeaCup(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::TresDestroyVehiclePawnGigasCylinder(FVector InCenterPos, float InRadiusXY, float InHalfHeight) {
}

void UTresGameBlueprintLibrary::TresDestroyEnemySpawnedVehiclePawnGigas() {
}

void UTresGameBlueprintLibrary::TresDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::TresDefaultCacheSampleTransitionSpeed() {
}

void UTresGameBlueprintLibrary::TresDebugUnlockSmartphone(UObject* WorldContextObject, bool bUnlock) {
}

void UTresGameBlueprintLibrary::TresDebugPrintWarning(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration) {
}

void UTresGameBlueprintLibrary::TresDebugPrintString(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration, FLinearColor Color, bool bEditorOnly) {
}

void UTresGameBlueprintLibrary::TresDebugPrintError(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration) {
}

void UTresGameBlueprintLibrary::TresCreateMatrixInstancedStaticMesh(UInstancedStaticMeshComponent* cp, const FTresVectorInt& CreateNum, const FTransform& Transform, const FVector& Offset) {
}

void UTresGameBlueprintLibrary::TresCopyLightParam(ULightComponent* src, ULightComponent* Dest) {
}

bool UTresGameBlueprintLibrary::TresCompareComponentMobility(USceneComponent* Component, TEnumAsByte<EComponentMobility::Type> Type) {
    return false;
}

void UTresGameBlueprintLibrary::TresCinematicStartPawnChatMode(UObject* WorldContextObject, ATresCharPawnBase* InPawn, bool InDisableWeapon) {
}

void UTresGameBlueprintLibrary::TresCinematicSetPawnIndividualCinematicMode(UObject* WorldContextObject, ATresCharPawnBase* InPawn, bool InAIStop, bool InChangeCinematicState) {
}

void UTresGameBlueprintLibrary::TresCinematicPlayerStateClearEx(UObject* WorldContextObject, bool bForceStateClear, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion) {
}

void UTresGameBlueprintLibrary::TresCinematicPlayerStateClear(UObject* WorldContextObject, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion) {
}

void UTresGameBlueprintLibrary::TresCinematicPlayerAuraEffect(UObject* WorldContextObject, bool bShowPlayerAuraEffect) {
}

void UTresGameBlueprintLibrary::TresCinematicPauseAI(UObject* WorldContextObject, bool bEnemyAI, bool bFriendAI, bool bOtherAI, bool bEnemyCinematic, bool bFriendCinematic, bool bOtherCinematic) {
}

void UTresGameBlueprintLibrary::TresCinematicDisableShopActorEffect(UObject* WorldContextObject, ETresSavePointDispType InDispType) {
}

void UTresGameBlueprintLibrary::TresCinematicDisableSavePointEffect(UObject* WorldContextObject, ETresSavePointDispType InDispType) {
}

void UTresGameBlueprintLibrary::TresCinematicDisableRailSlideExStartActorEffect(UObject* WorldContextObject, ETresSavePointDispType InDispType) {
}

void UTresGameBlueprintLibrary::TresCinematicDisableChrFootEffect(UObject* WorldContextObject, bool bDisableFootEffect) {
}

void UTresGameBlueprintLibrary::TresCinematicChangeTPViewMode(UObject* WorldContextObject, bool bChangeTPViewMode) {
}

void UTresGameBlueprintLibrary::TresChangeBGMEnable(bool Enable) {
}

bool UTresGameBlueprintLibrary::TresChangeActionComNpc(UObject* WorldContextObject, FName InName, FName InAction) {
    return false;
}

void UTresGameBlueprintLibrary::TresCancelPrepareMap() {
}

void UTresGameBlueprintLibrary::TresBonamikSetWeight(AActor* Actor, float Weight, float WeightChangeTime) {
}

void UTresGameBlueprintLibrary::TresBonamikResetAndPreRoll(UObject* WorldContextObject, int32 PreRoll) {
}

void UTresGameBlueprintLibrary::TresBonamikRemoveReference(AActor* ReferencingActor, AActor* ReferencedActor) {
}

void UTresGameBlueprintLibrary::TresBonamikAddReference(AActor* ReferencingActor, AActor* ReferencedActor) {
}

void UTresGameBlueprintLibrary::TresAutoDownResolutionMode(bool InEnable) {
}

void UTresGameBlueprintLibrary::TresAutoActorLoad(FName ListPath, FVector ActorSpawnPoint, int32 FrameCount) {
}

void UTresGameBlueprintLibrary::TresAutoActorActionLoad(FName ListPath, FVector ActorSpawnPoint, int32 FrameCount, bool PerfCPU) {
}

void UTresGameBlueprintLibrary::TresAsyncLoadInitialAssets() {
}

void UTresGameBlueprintLibrary::TresApplyMapSet(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UTresMapSet* MapSet, FName cmdName, bool isOneFrameExecute) {
}

void UTresGameBlueprintLibrary::TresApplyAreaNameAndNavMap(FName dataTableKey, bool enableAreaName, bool showAreaNameUI, bool enableNavMap, float switchNavMapTime) {
}

bool UTresGameBlueprintLibrary::TestFlagBitLabel(FName Flag, FName label) {
    return false;
}

void UTresGameBlueprintLibrary::StoreEnemyXIIIRetryParam() {
}

void UTresGameBlueprintLibrary::StopAllCameraShake(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::StopActorVoice(AActor* Speaker, UTresActorVoice* ActorVoice) {
}

void UTresGameBlueprintLibrary::StartWhiteOut(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {
}

void UTresGameBlueprintLibrary::StartWhiteIn(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {
}

AEmitterCameraLensEffectBase* UTresGameBlueprintLibrary::StartLensEffect(UObject* WorldContextObject, TSubclassOf<AEmitterCameraLensEffectBase> EmitterLensEffectClass, bool in_OverrideAllowMultipleInstances) {
    return NULL;
}

void UTresGameBlueprintLibrary::StartFadeOut(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {
}

void UTresGameBlueprintLibrary::StartFadeIn(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {
}

void UTresGameBlueprintLibrary::StartFade(UObject* WorldContextObject, FVector InFadeColor, FVector2D InFadeAlpha, float InFadeTime, bool InFadeAudio) {
}

UParticleSystemComponent* UTresGameBlueprintLibrary::SpawnCameraPositionEffect(UObject* WorldContextObject, UParticleSystem* Effect, FVector Offset, FRotator Rotation, FVector Scale, bool bCamRot, bool bCamRotYaw) {
    return NULL;
}

void UTresGameBlueprintLibrary::SignalTheaterSceneFinished() {
}

void UTresGameBlueprintLibrary::SetWorldResidentsEnable(bool EnableWorldResidents) {
}

void UTresGameBlueprintLibrary::SetTresCameraNormalDefault(UObject* WorldContextObject, ATresCameraNormal* TresCameraNormal) {
}

void UTresGameBlueprintLibrary::SetShadowSettingPS4Default() {
}

void UTresGameBlueprintLibrary::SetShadowSettingPCDefault() {
}

void UTresGameBlueprintLibrary::SetShadowRadiusThresholdDefault() {
}

void UTresGameBlueprintLibrary::SetShadowRadiusThreshold(float InVal) {
}

void UTresGameBlueprintLibrary::SetShadowQualityLevelDefault() {
}

void UTresGameBlueprintLibrary::SetShadowQualityLevel(int32 InLevel) {
}

void UTresGameBlueprintLibrary::SetPlayerIKinemaEnable(bool EnableIKinema) {
}

float UTresGameBlueprintLibrary::SetOneActionState(UObject* WorldContextObject, FName MotionName, bool disableOverlappedForce) {
    return 0.0f;
}

void UTresGameBlueprintLibrary::SetMaterialParameterValueVector(UMaterialInstanceDynamic* MaterialInstanceDynamic, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> ParamType, FLinearColor Val) {
}

void UTresGameBlueprintLibrary::SetMaterialParameterValueScalar(UMaterialInstanceDynamic* MaterialInstanceDynamic, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> ParamType, float Val) {
}

void UTresGameBlueprintLibrary::SetGlobalGameSpeed(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, float InNewTimeDilation, float InInterpTime) {
}

void UTresGameBlueprintLibrary::SetGameFlagBoolean(FName FlagName, bool FlagValue) {
}

void UTresGameBlueprintLibrary::SetGameFlag(FName FlagName, int32 FlagValue) {
}

void UTresGameBlueprintLibrary::SetFlagLabel(FName Flag, FName label) {
}

void UTresGameBlueprintLibrary::SetFlagBitLabel(FName Flag, FName label) {
}

void UTresGameBlueprintLibrary::SetBoneLocalTranslationByName(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, const FVector& Loc) {
}

void UTresGameBlueprintLibrary::SetBoneLocalTranslation(USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex, const FVector& Loc) {
}

void UTresGameBlueprintLibrary::SetBoneLocalScale3DByName(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, const FVector& Scl) {
}

void UTresGameBlueprintLibrary::SetBoneLocalScale3D(USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex, const FVector& Scl) {
}

void UTresGameBlueprintLibrary::SetBoneLocalRotationByName(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, const FRotator& Rot) {
}

void UTresGameBlueprintLibrary::SetBoneLocalRotation(USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex, const FRotator& Rot) {
}

void UTresGameBlueprintLibrary::SetAllComponentVisible(AActor* Actor, bool Visible) {
}

void UTresGameBlueprintLibrary::SetAllComponentTickEnable(AActor* Actor, bool Enable) {
}

void UTresGameBlueprintLibrary::SetAllChildActorComponentClass(AActor* Actor, TSubclassOf<AActor> Class) {
}

void UTresGameBlueprintLibrary::SetActorVisibleOn(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {
}

void UTresGameBlueprintLibrary::SetActorVisibleOff(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {
}

void UTresGameBlueprintLibrary::SetActorVisibleByObjTypeImmediate(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bVisible) {
}

void UTresGameBlueprintLibrary::SetActorVisibleByObjType(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bVisible) {
}

void UTresGameBlueprintLibrary::SetActorStopOn(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {
}

void UTresGameBlueprintLibrary::SetActorStopOff(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize) {
}

void UTresGameBlueprintLibrary::SetActorStopByObjType(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bStop) {
}

void UTresGameBlueprintLibrary::SetActorCollisionDisableOn(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize, bool bImmediate) {
}

void UTresGameBlueprintLibrary::SetActorCollisionDisableOff(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize, bool bImmediate) {
}

void UTresGameBlueprintLibrary::SetActorCollisionDisableByObjType(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bDisable, bool bImmediate) {
}

void UTresGameBlueprintLibrary::SetAAModeDefault() {
}

ATresNote* UTresGameBlueprintLibrary::SearchTresNote(FName ID) {
    return NULL;
}

void UTresGameBlueprintLibrary::ReturnToTitleGameClear() {
}

void UTresGameBlueprintLibrary::RestoreEnemyXIIIRetryParam(ETresEnemyXIIIPhaseType InNewPhaseType) {
}

void UTresGameBlueprintLibrary::ResetTresCameraPrevious(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::ResetTresCameraNormal(UObject* WorldContextObject, bool bForce) {
}

void UTresGameBlueprintLibrary::ResetTresCameraExceptActive(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::ResetGlobalGameSpeed(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, float InInterpTime) {
}

void UTresGameBlueprintLibrary::ResetActorVisibleImmediate(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel) {
}

void UTresGameBlueprintLibrary::ResetActorVisible(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel) {
}

void UTresGameBlueprintLibrary::ResetActorStop(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel) {
}

void UTresGameBlueprintLibrary::ResetActorCollisionDisable(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bImmediate) {
}

void UTresGameBlueprintLibrary::RemyMapJump(RemyAccessMethod accessMethod, TEnumAsByte<ETresMapJumpFadeKind> fadeKind) {
}

bool UTresGameBlueprintLibrary::RemyIsFirstPlay() {
    return false;
}

void UTresGameBlueprintLibrary::RemyGetFinalMilestoneRewardAndShowMsg(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool UTresGameBlueprintLibrary::RemyCanCooking() {
    return false;
}

bool UTresGameBlueprintLibrary::RemoteEventPassActor(UObject* WorldContextObject, FName EventName, AActor* inActor) {
    return false;
}

bool UTresGameBlueprintLibrary::RemoteEvent(UObject* WorldContextObject, FName EventName) {
    return false;
}

void UTresGameBlueprintLibrary::RegisterEnemyGaugeTarget(UObject* WorldContextObject, ATresCharPawnBase* InEnemy, bool bMulti) {
}

void UTresGameBlueprintLibrary::RegistComponentTickFunction(UActorComponent* Component, bool regist) {
}

void UTresGameBlueprintLibrary::RegistActorTickFunction(AActor* Actor, bool regist, bool isComponent) {
}

void UTresGameBlueprintLibrary::RecoveryPlayerStatusAllForCinematic(UObject* WorldContextObject) {
}

int32 UTresGameBlueprintLibrary::RandomSelect(bool inSuccess1, bool inSuccess2, bool inSuccess3, bool inSuccess4, bool inSuccess5, float inProbability1, float inProbability2, float inProbability3, float inProbability4, float inProbability5) {
    return 0;
}

void UTresGameBlueprintLibrary::PlayXIIIRetryVoice(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::PlayEnemyRetryVoice(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::PlayActorVoice(AActor* Speaker, UTresActorVoice* ActorVoice) {
}

void UTresGameBlueprintLibrary::NotifyDirectInfomationForGumi(UObject* WorldContextObject, const ETresGumiShipDirectNotifyType eType) {
}

bool UTresGameBlueprintLibrary::NotEqual_FlagLabel(FName Flag, FName label) {
    return false;
}

bool UTresGameBlueprintLibrary::LessEqual_FlagLabel(FName Flag, FName label) {
    return false;
}

bool UTresGameBlueprintLibrary::Less_FlagLabel(FName Flag, FName label) {
    return false;
}

bool UTresGameBlueprintLibrary::IsWaitCycleNeedMatineeImmediatePlay(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::IsUnlockedSecretMovie() {
    return false;
}

bool UTresGameBlueprintLibrary::IsUnlockdClearItem(FName ItemName) {
    return false;
}

bool UTresGameBlueprintLibrary::IsTresBluePrintDebugMode(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::IsTheaterMode() {
    return false;
}

bool UTresGameBlueprintLibrary::IsSnowCurlingSavedTreasure(int32 ID) {
    return false;
}

bool UTresGameBlueprintLibrary::IsOverlapTresCameraLocation(UObject* WorldContextObject, FVector Location, float Radius, bool bAddRadiusZ) {
    return false;
}

bool UTresGameBlueprintLibrary::IsOverlapTresCameraActor(UObject* WorldContextObject, AActor* Actor, FVector LocalOffset, float Radius) {
    return false;
}

bool UTresGameBlueprintLibrary::IsLookAtTargetXY(AActor* LookActor, AActor* AtActor, float Angle) {
    return false;
}

bool UTresGameBlueprintLibrary::IsLocalTresPlayerPawnBase(AActor* Actor) {
    return false;
}

bool UTresGameBlueprintLibrary::IsInViewportVector2D(const FVector2D& pos) {
    return false;
}

bool UTresGameBlueprintLibrary::IsInViewportActor(AActor* Actor) {
    return false;
}

bool UTresGameBlueprintLibrary::IsInFrustumVolumeLocation(APlayerCameraManager* PlayerCameraManager, const FVector& WorldLocation, float SphereRadius) {
    return false;
}

bool UTresGameBlueprintLibrary::IsInFrustumVolumeActor(APlayerCameraManager* PlayerCameraManager, AActor* Actor, float SphereRadius) {
    return false;
}

bool UTresGameBlueprintLibrary::IsGameCleared() {
    return false;
}

bool UTresGameBlueprintLibrary::IsFadeChange(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::IsExistGameFlagBoolean(FName FlagName) {
    return false;
}

bool UTresGameBlueprintLibrary::IsExistGameFlag(FName FlagName) {
    return false;
}

bool UTresGameBlueprintLibrary::IsBPTresCameraInterpChange(UObject* WorldContextObject, AActor* Camera) {
    return false;
}

bool UTresGameBlueprintLibrary::GreaterEqual_FlagLabel(FName Flag, FName label) {
    return false;
}

bool UTresGameBlueprintLibrary::Greater_FlagLabel(FName Flag, FName label) {
    return false;
}

TEnumAsByte<ETresWorldCode> UTresGameBlueprintLibrary::GetWorldCode(UObject* WorldContextObject) {
    return TRES_WCID_EX;
}

TEnumAsByte<ETresWorldAreaCode> UTresGameBlueprintLibrary::GetWorldAreaCode(UObject* WorldContextObject) {
    return TRES_WAID_AREA_00;
}

UTresTexturePump* UTresGameBlueprintLibrary::GetTresTexturePump(const FString& DataName) {
    return NULL;
}

ATresPlayerPawnBase* UTresGameBlueprintLibrary::GetTresPlayerPawnBase(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ATresPlayerControllerBase* UTresGameBlueprintLibrary::GetTresPlayerControllerBase(UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ATresLevelScriptActor* UTresGameBlueprintLibrary::GetTresLevelScriptActor(UObject* WorldContextObject, FName PackageName) {
    return NULL;
}

ATresGumiShipWorldSymbolActor* UTresGameBlueprintLibrary::GetTresGumiShipBossBattleLockTargetWorldSymbolActor(UObject* WorldContextObject) {
    return NULL;
}

ATresGameState* UTresGameBlueprintLibrary::GetTresGameState(UObject* WorldContextObject) {
    return NULL;
}

int32 UTresGameBlueprintLibrary::GetStaticMeshComponents(AActor* Target, TArray<UStaticMeshComponent*>& OutComponents) {
    return 0;
}

ATresPlayerPawnBase* UTresGameBlueprintLibrary::GetLocalTresPlayerPawnBase(UObject* WorldContextObject) {
    return NULL;
}

ATresPlayerControllerLowerBase* UTresGameBlueprintLibrary::GetLocalTresPlayerControllerLowerBase(UObject* WorldContextObject) {
    return NULL;
}

ATresPlayerControllerBase* UTresGameBlueprintLibrary::GetLocalTresPlayerControllerBase(const UObject* WorldContextObject) {
    return NULL;
}

ATresGumiShipPlayerPawnBase* UTresGameBlueprintLibrary::GetLocalTresGumiShipPlayerPawnBase(UObject* WorldContextObject) {
    return NULL;
}

ATresCameraManager* UTresGameBlueprintLibrary::GetLocalTresCameraManager(UObject* WorldContextObject) {
    return NULL;
}

APlayerController* UTresGameBlueprintLibrary::GetLocalPlayerController(UObject* WorldContextObject) {
    return NULL;
}

FString UTresGameBlueprintLibrary::GetLastPlayerStartTag() {
    return TEXT("");
}

void UTresGameBlueprintLibrary::GetGameModeTask(TSubclassOf<UTresTaskBase> Class, UTresTaskBase*& Out) {
}

bool UTresGameBlueprintLibrary::GetGameFlagBoolean(FName FlagName) {
    return false;
}

int32 UTresGameBlueprintLibrary::GetGameFlag(FName FlagName) {
    return 0;
}

float UTresGameBlueprintLibrary::GetFadeAmount(UObject* WorldContextObject) {
    return 0.0f;
}

FVector UTresGameBlueprintLibrary::GetBoneTranslationByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, TEnumAsByte<ETresBoneSpacesType> BoneSpace) {
    return FVector{};
}

FVector UTresGameBlueprintLibrary::GetBoneLocalTranslationByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName) {
    return FVector{};
}

FVector UTresGameBlueprintLibrary::GetBoneLocalTranslation(const USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex) {
    return FVector{};
}

FVector UTresGameBlueprintLibrary::GetBoneLocalScale3DByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName) {
    return FVector{};
}

FVector UTresGameBlueprintLibrary::GetBoneLocalScale3D(const USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex) {
    return FVector{};
}

FRotator UTresGameBlueprintLibrary::GetBoneLocalRotationByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName) {
    return FRotator{};
}

FRotator UTresGameBlueprintLibrary::GetBoneLocalRotation(const USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex) {
    return FRotator{};
}

float UTresGameBlueprintLibrary::GetAngleTwoVector(const FVector& v1, const FVector& v2) {
    return 0.0f;
}

void UTresGameBlueprintLibrary::GetAllActorsOfTag(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName TagName, TArray<AActor*>& OutActors) {
}

void UTresGameBlueprintLibrary::GetAllActorsOfName(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName ActorName, AActor*& OutActor) {
}

void UTresGameBlueprintLibrary::GetAllActorsOfBlueprintName(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName BlueprintName, TArray<AActor*>& OutActors) {
}

FVector2D UTresGameBlueprintLibrary::GetActorPosToScreenPosRate(AActor* Actor) {
    return FVector2D{};
}

FString UTresGameBlueprintLibrary::GetActorBlueprintName(const AActor* Actor) {
    return TEXT("");
}

void UTresGameBlueprintLibrary::FadeOutProjectile(UObject* WorldContextObject, ESQEX_ObjectType InObjType) {
}

void UTresGameBlueprintLibrary::FadeoutAllCameraShake(UObject* WorldContextObject, float FadeTime) {
}

bool UTresGameBlueprintLibrary::ExistsSecretMovieFile() {
    return false;
}

bool UTresGameBlueprintLibrary::ExistsEpilogueMovieFile() {
    return false;
}

bool UTresGameBlueprintLibrary::EqualEqual_FlagLabel(FName Flag, FName label) {
    return false;
}

void UTresGameBlueprintLibrary::EndXIIIRetryVoice(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::EndValidBPTresCameraArray(const TArray<ATresCameraBase*>& EndCameraArray, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams) {
}

void UTresGameBlueprintLibrary::EndValidBPTresCamera(ATresCameraBase* EndCamera, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams) {
}

void UTresGameBlueprintLibrary::EndLensEffectInstance(UObject* WorldContextObject, AEmitterCameraLensEffectBase* Emitter, bool bLoopEnd, float FadeTime) {
}

void UTresGameBlueprintLibrary::EndLensEffectClass(UObject* WorldContextObject, TSubclassOf<AEmitterCameraLensEffectBase> EmitterLensEffectClass, bool bLoopEnd, float FadeTime) {
}

void UTresGameBlueprintLibrary::EndEnemyRetryVoice(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::EndCameraPositionEffectInstance(UObject* WorldContextObject, UParticleSystemComponent* EffectInst, bool bLoopEnd, float FadeTime) {
}

void UTresGameBlueprintLibrary::EndCameraPositionEffect(UObject* WorldContextObject, UParticleSystem* Effect, bool bLoopEnd, float FadeTime) {
}

void UTresGameBlueprintLibrary::EndAllSameBPTresLatent(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::EndAllSameBPTresCameraOfName(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams, FName CameraName) {
}

void UTresGameBlueprintLibrary::EndAllSameBPTresCamera(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams) {
}

void UTresGameBlueprintLibrary::EndAllBPTresCameraOfName(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams, FName CameraName) {
}

void UTresGameBlueprintLibrary::EndAllBPTresCamera(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams) {
}

void UTresGameBlueprintLibrary::EnablePrecomputedVisibility(bool InEnable) {
}

void UTresGameBlueprintLibrary::EnableCollsionActors(const TArray<AActor*>& disablearra) {
}

void UTresGameBlueprintLibrary::EmptyFunction() {
}

void UTresGameBlueprintLibrary::DrawDebugActor(UObject* WorldContextObject, const AActor* inActor, FColor inDrawColor, float inLifeTime) {
}

TArray<AActor*> UTresGameBlueprintLibrary::DisableChildrenCollision(AActor* Actor) {
    return TArray<AActor*>();
}

void UTresGameBlueprintLibrary::DestroyAllProjectileForGumi(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::DestroyAllProjectile(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::DestroyAllEnemyPawn() {
}

void UTresGameBlueprintLibrary::DeleteAllComponentsByClass(AActor* Actor, TSubclassOf<UActorComponent> DeleteClass, bool bPromoteChildren) {
}

void UTresGameBlueprintLibrary::DebugTresDeleteFriend(bool isAll, int32 inIdx) {
}

ATresEnemyPawnBase* UTresGameBlueprintLibrary::DebugSimpleEnemySet(UObject* WorldContextObject, FName EnemyID, float OffsetX, float OffsetY, float OffsetZ) {
    return NULL;
}

void UTresGameBlueprintLibrary::DebugConsoleCommand(const FString& Command) {
}

UTresTimerTask* UTresGameBlueprintLibrary::CreateTresTaskTimerGameMode(UObject* WorldContextObject) {
    return NULL;
}

void UTresGameBlueprintLibrary::CreateTresTaskGameMode(UObject* WorldContextObject, UTresTaskBase*& Out, TSubclassOf<UTresTaskBase> Class, bool isSingleton) {
}

void UTresGameBlueprintLibrary::CreatePrize(UObject* WorldContextObject, const FVector InLocation, TEnumAsByte<PRIZE_KIND> InKind) {
}

void UTresGameBlueprintLibrary::ClientStopCameraShake(UObject* WorldContextObject, TSubclassOf<UCameraShake> ShakeClass) {
}

void UTresGameBlueprintLibrary::ClientPlayCameraShake(UObject* WorldContextObject, TSubclassOf<UCameraShake> ShakeClass, AActor* OwnerActor, float Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot) {
}

void UTresGameBlueprintLibrary::ClearLevelEntityRecord() {
}

void UTresGameBlueprintLibrary::ClearFlagBitLabel(FName Flag, FName label) {
}

void UTresGameBlueprintLibrary::CleanupForCinematic(UObject* WorldContextObject) {
}

bool UTresGameBlueprintLibrary::CanPlaySecretMovie() {
    return false;
}

bool UTresGameBlueprintLibrary::CanPlayEpilogueMovie() {
    return false;
}

void UTresGameBlueprintLibrary::CancelFade(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio) {
}

void UTresGameBlueprintLibrary::BPTresStartWipeOut(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BPTresStartWipeIn(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BPTresStartWhiteOut(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {
}

void UTresGameBlueprintLibrary::BPTresStartWhiteIn(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {
}

void UTresGameBlueprintLibrary::BPTresStartFadeOut(UObject* WorldContextObject, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {
}

void UTresGameBlueprintLibrary::BPTresStartFadeIn(UObject* WorldContextObject, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {
}

void UTresGameBlueprintLibrary::BPTresSetupChatMode(UObject* WorldContextObject, ATresCharPawnBase* InPawn1, ATresCharPawnBase* InPawn2) {
}

void UTresGameBlueprintLibrary::BPTresSetFadeColorAndAmount(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, FLinearColor InFadeColor, float InAmount) {
}

void UTresGameBlueprintLibrary::BPTresPlayerResetStyle(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BPTresPlayerDisableWallRunPhysXCollision(UObject* WorldContextObject, bool bDisable) {
}

bool UTresGameBlueprintLibrary::BPTresIsFadeChange(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer) {
    return false;
}

float UTresGameBlueprintLibrary::BPTresGetFadeAmount(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer) {
    return 0.0f;
}

void UTresGameBlueprintLibrary::BPTresDoAttractionFlowMarkerDraw(UObject* WorldContextObject, ATresCharPawnBase* InPawn) {
}

void UTresGameBlueprintLibrary::BPTresCinematicPlayerTrinityDie(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BPTresCinematicChrTurnTo(UObject* WorldContextObject, ATresCharPawnBase* InPawn, const FVector& InLocation, bool InDisableWeapon) {
}

bool UTresGameBlueprintLibrary::BPTresCheckSpecialShipLevel(UObject* WorldContextObject) {
    return false;
}

void UTresGameBlueprintLibrary::BPTresCancelFade(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed) {
}

void UTresGameBlueprintLibrary::BPTresActorMoveToLocation(UObject* WorldContextObject, AActor* MoveActor, FVector Destination, float Time, bool bSnapFloor, bool bRotationYaw, FLatentActionInfo LatentInfo) {
}

void UTresGameBlueprintLibrary::BPTresActorMoveToActor(UObject* WorldContextObject, AActor* MoveActor, AActor* DestinationActor, float Time, bool bSnapFloor, bool bRotationYaw, FLatentActionInfo LatentInfo) {
}

bool UTresGameBlueprintLibrary::BP_TresUpdateDlcChallengeAchievementRecord(UObject* WorldContextObject, ETresDlcChallengeRecordID InRecordID) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresUnlockBattlePortalRewardAction(UObject* WorldContextObject, FString& OutRewardStr) {
    return false;
}

void UTresGameBlueprintLibrary::BP_TresToSecondHalfForLevel(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresStopForceFeedbackAll(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresStopForceFeedback(UObject* WorldContextObject, int32 InPlayerIndex) {
}

void UTresGameBlueprintLibrary::BP_TresStartGameOverLoopSE(UObject* WorldContextObject, ETresGameOverKind InKind) {
}

void UTresGameBlueprintLibrary::BP_TresStartGameOverEvent(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresStartGameOver(UObject* WorldContextObject, ETresGameOverKind InGameOverKind, bool bPlayDeadSE) {
}

bool UTresGameBlueprintLibrary::BP_TresStartDlcCheatAchievement(UObject* WorldContextObject, ETresDlcCheatAchievementID InCheatAchievementID, int32 InOption, int32 InOption2) {
    return false;
}

void UTresGameBlueprintLibrary::BP_TresStartCinematicModeForLevel(UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bPlayerStateClear, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect, bool bChangeTPViewMode) {
}

void UTresGameBlueprintLibrary::BP_TresSetStateTableIndex(UObject* WorldContextObject, int32 dIndex, float fOverrideCoolDownTime) {
}

void UTresGameBlueprintLibrary::BP_TresSetShopLevel(UObject* WorldContextObject, int32 InShopLevel) {
}

void UTresGameBlueprintLibrary::BP_TresSetPlayerGrowthType(UObject* WorldContextObject, ETresPlayerGrowthType InGrowthType, ETresPlayerAbilityGrowthType InAbilityType) {
}

void UTresGameBlueprintLibrary::BP_TresSetKinematicEnable(bool bEnable, float InTime) {
}

void UTresGameBlueprintLibrary::BP_TresSetGumiShopLevel(UObject* WorldContextObject, int32 InShopLevel) {
}

void UTresGameBlueprintLibrary::BP_TresSetGameOverMenuType(UObject* WorldContextObject, ETresGameOverMenuType InKind) {
}

void UTresGameBlueprintLibrary::BP_TresSetEnableReplicaAttackForLevel(UObject* WorldContextObject, bool bEnable) {
}

void UTresGameBlueprintLibrary::BP_TresSetBattleLevelFromName(UObject* WorldContextObject, FName BattleLevelName) {
}

void UTresGameBlueprintLibrary::BP_TresSetBattleLevelAuto(UObject* WorldContextObject, FName FlagName) {
}

void UTresGameBlueprintLibrary::BP_TresSetBattleLevel(UObject* WorldContextObject, int32 InBattleLevel) {
}

void UTresGameBlueprintLibrary::BP_TresRiseShopLevel(UObject* WorldContextObject, int32 InShopLevel) {
}

void UTresGameBlueprintLibrary::BP_TresRiseGumiShopLevel(UObject* WorldContextObject, int32 InShopLevel) {
}

void UTresGameBlueprintLibrary::BP_TresRiseBattleLevel(UObject* WorldContextObject, int32 InBattleLevel) {
}

void UTresGameBlueprintLibrary::BP_TresReturnCharEquipItems(UObject* WorldContextObject, ETresChrUniqueID InChrID) {
}

void UTresGameBlueprintLibrary::BP_TresResetClipLength(UObject* WorldContextObject, const FName InGroupName, float InTransitionTime) {
}

void UTresGameBlueprintLibrary::BP_TresRequestToMickeyDownStateForLevel(UObject* WorldContextObject) {
}

bool UTresGameBlueprintLibrary::BP_TresRequestPreLastHolyForLevel(UObject* WorldContextObject) {
    return false;
}

void UTresGameBlueprintLibrary::BP_TresRequestFullFireLaser(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresRequestChangeStateToTiredForLevel(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresRequestActionStartForLevel(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresPlayVoiceAndLipForGameStartForLevel(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresPlayForceFeedback(UObject* WorldContextObject, ETresForceFeedbackKind InKind, bool InLooping, int32 InPlayerIndex) {
}

void UTresGameBlueprintLibrary::BP_TresOverwriteClipLength(UObject* WorldContextObject, float InOverwriteClipLength, const FName InGroupName, float InTransitionTime) {
}

void UTresGameBlueprintLibrary::BP_TresOnStartPreLastHolyForLevel(UObject* WorldContextObject) {
}

bool UTresGameBlueprintLibrary::BP_TresLineTraceByChannel(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsSimultaneoutWarpAttackStateForLevel(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsPlayerHoldCameraState(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsLuckyMarkRecorded(UObject* WorldContextObject, FName InMarkId) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsIdleStateForLevel(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsGameEnablePerformanceCamera(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsGameEnableForceFeedback(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsFoodstuffActorNeedSpawn(UObject* WorldContextObject, FName InKeyName) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsDlcEnableCheatMode(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsDlcEnableChallengeMode(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsDlcCheatAchievementClearAll() {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsDlcCheatAchievementClear(ETresDlcCheatAchievementID InCheatAchievementID) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsConfigEnablePerformanceCamera(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsConfigEnableForceFeedback(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresIsConfigEnableControlTypeB(UObject* WorldContextObject) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresHaveItem(UObject* WorldContextObject, FName InItemKeyName) {
    return false;
}

bool UTresGameBlueprintLibrary::BP_TresHaveAllSignKeyItem(UObject* WorldContextObject) {
    return false;
}

void UTresGameBlueprintLibrary::BP_TresGetVictoryBonus(UObject* WorldContextObject, FName InFlagName, bool bShowInfo) {
}

int32 UTresGameBlueprintLibrary::BP_TresGetShopLevel(UObject* WorldContextObject) {
    return 0;
}

void UTresGameBlueprintLibrary::BP_TresGetPrize(UObject* WorldContextObject, const TArray<TEnumAsByte<PRIZE_KIND>>& InPrizeItems) {
}

void UTresGameBlueprintLibrary::BP_TresGetItem(UObject* WorldContextObject, FName InItemKeyName, int32 InNum, bool bShowInfo) {
}

TEnumAsByte<ETresMiRxHolySealType> UTresGameBlueprintLibrary::BP_TresGetHolySealTypeForLevel(UObject* WorldContextObject) {
    return HOLY_SEAL_TYPE_NONE;
}

int32 UTresGameBlueprintLibrary::BP_TresGetGumiShopLevel(UObject* WorldContextObject) {
    return 0;
}

void UTresGameBlueprintLibrary::BP_TresGetCrabItem(UObject* WorldContextObject, int32 InItemNum) {
}

int32 UTresGameBlueprintLibrary::BP_TresGetBattleLevel(UObject* WorldContextObject) {
    return 0;
}

int32 UTresGameBlueprintLibrary::BP_TresGetBackyardItemNum(UObject* WorldContextObject, FName InItemKeyName) {
    return 0;
}

void UTresGameBlueprintLibrary::BP_TresGameSetMinigame(UObject* WorldContextObject, ETresGameMiniGameType InKind) {
}

void UTresGameBlueprintLibrary::BP_TresGameChangePlayer(UObject* WorldContextObject, ETresPlayerUniqueID InKind) {
}

bool UTresGameBlueprintLibrary::BP_TresDropBackyardItemOne(UObject* WorldContextObject, FName InItemKeyName) {
    return false;
}

void UTresGameBlueprintLibrary::BP_TresDlcEnableCheatMode(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_TresDlcEnableChallengeMode(UObject* WorldContextObject) {
}

FName UTresGameBlueprintLibrary::BP_TresConvertKeyItemIDtoKeyName(UObject* WorldContextObject, ETresItemDefKeyItem InBattleItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameWeapon(UObject* WorldContextObject, ETresItemDefWeapon InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameReport(UObject* WorldContextObject, ETresItemDefReport InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameProtector(UObject* WorldContextObject, ETresItemDefProtector InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameNavimap(UObject* WorldContextObject, ETresItemDefNavimap InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameMognet(UObject* WorldContextObject, ETresItemDefMognetItem InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameMaterial(UObject* WorldContextObject, ETresItemDefMaterial InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameLSIGame(UObject* WorldContextObject, ETresItemDefLSIGameItem InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameKeyitem(UObject* WorldContextObject, ETresItemDefKeyItem InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameGumiSticker(UObject* WorldContextObject, ETresItemDefGumiSticker InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameGumiShipBP(UObject* WorldContextObject, ETresItemDefGumiShipBP InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameGumiPattern(UObject* WorldContextObject, ETresItemDefGumiPattern InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameGumiParts(UObject* WorldContextObject, ETresItemDefGumiParts InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameGumiMaterial(UObject* WorldContextObject, ETresItemDefGumiMaterial InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameGumiEtc(UObject* WorldContextObject, ETresItemDefGumiEtc InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameFoodstuff(UObject* WorldContextObject, ETresItemDefFoodstuff InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameFood(UObject* WorldContextObject, ETresItemDefFood InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameCamp(UObject* WorldContextObject, ETresItemDefCampItem InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameBattle(UObject* WorldContextObject, ETresItemDefBattleItem InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertItemIDtoKeyNameAccessory(UObject* WorldContextObject, ETresItemDefAccessory InItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertFoodstuffItemIDtoKeyName(UObject* WorldContextObject, ETresItemDefFoodstuff InFoodstuffItemID) {
    return NAME_None;
}

FName UTresGameBlueprintLibrary::BP_TresConvertBattleItemIDtoKeyName(UObject* WorldContextObject, ETresItemDefBattleItem InBattleItemID) {
    return NAME_None;
}

void UTresGameBlueprintLibrary::BP_TresCheckPhotoHologramUnlock(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool UTresGameBlueprintLibrary::BP_TresCheckDlcCheatAchievement(UObject* WorldContextObject, ETresDlcCheatAchievementID InCheatAchievementID) {
    return false;
}

void UTresGameBlueprintLibrary::BP_TresChangeCharEquipWeapon(UObject* WorldContextObject, ETresChrUniqueID InChrID, ETresItemDefWeapon InWeaponID) {
}

void UTresGameBlueprintLibrary::BP_TresAddShopLevel(UObject* WorldContextObject, int32 InAddLevel) {
}

void UTresGameBlueprintLibrary::BP_TresAddGumiShopLevel(UObject* WorldContextObject, int32 InAddLevel) {
}

FVector UTresGameBlueprintLibrary::BP_SetVectorElement(const FVector& Vec, bool bSetX, float X, bool bSetY, float Y, bool bSetZ, float Z) {
    return FVector{};
}

FRotator UTresGameBlueprintLibrary::BP_SetRotatorElement(const FRotator& Rot, bool bSetX, float RollX, bool bSetY, float PitchY, bool bSetZ, float YawZ) {
    return FRotator{};
}

void UTresGameBlueprintLibrary::BP_SetFadeColorAndAmount(UObject* WorldContextObject, FLinearColor InFadeColor, float InAmount, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer) {
}

void UTresGameBlueprintLibrary::BP_ReqTresGameQuitMinigameNoMapJump(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::BP_ReqTresGameQuitMinigame(UObject* WorldContextObject) {
}

bool UTresGameBlueprintLibrary::BP_IsActorExistDirection(AActor* Actor1, TEnumAsByte<ETresdirectionType> DirType, AActor* Actor2) {
    return false;
}

void UTresGameBlueprintLibrary::BP_GotoTitle(UObject* WorldContextObject, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind) {
}

void UTresGameBlueprintLibrary::BP_GotoMemoryArchive(UObject* WorldContextObject, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind, FName ReturnMapName, FName ReturnPlayerStartTag) {
}

TEnumAsByte<ETresGameLevelID> UTresGameBlueprintLibrary::BP_GetGameLevel() {
    return TRES_GAME_LVID_BEGINNER;
}

FVector UTresGameBlueprintLibrary::BP_GetActorSpecifiedDirectionDistanceLocation(AActor* Actor, TEnumAsByte<ETresdirectionType> DirType, float Distance) {
    return FVector{};
}

bool UTresGameBlueprintLibrary::BP_FoodstuffGetTeamPrize(UObject* WorldContextObject, FName InKeyName) {
    return false;
}

void UTresGameBlueprintLibrary::BP_DebugSetStartMapTypeDLC(bool bReMindDLC) {
}

int32 UTresGameBlueprintLibrary::BP_ConvertIntDamage(int32 Damage) {
    return 0;
}

void UTresGameBlueprintLibrary::BP_CallFunctionByName(AActor* Actor, const FString& FunctionName) {
}

void UTresGameBlueprintLibrary::BP_AddMunny(int32 munny) {
}

void UTresGameBlueprintLibrary::AllPrizeCollection(UObject* WorldContextObject, ATresCharPawnBase* InPawn) {
}

void UTresGameBlueprintLibrary::AllEndLensEffect(UObject* WorldContextObject) {
}

void UTresGameBlueprintLibrary::AllEndCameraPositionEffect(UObject* WorldContextObject) {
}

UTresGameBlueprintLibrary::UTresGameBlueprintLibrary() {
}

