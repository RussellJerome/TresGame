#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "ETresUICutsceneTextShowMethod.h"
#include "ETresItemDefFoodstuff.h"
#include "ETresUITextAlignV.h"
#include "ETresItemDefBattleItem.h"
#include "ETresChrUniqueID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ScreenFadeLayer -FallbackName=ESQEX_ScreenFadeLayer
#include "ETresUISubtitleUsage.h"
#include "ETresUITimerColor.h"
#include "UObject/NoExportTypes.h"
#include "ETresCinematicPlayerStyleType.h"
#include "ETresCinematicPlayerStateType.h"
#include "ETresGameHelp.h"
#include "ETresWorldAreaCode.h"
#include "UObject/NoExportTypes.h"
#include "ETresUICutsceneTextHideMethod.h"
#include "ETresUISnowSlideRank.h"
#include "ETresUIHudCommandExKind.h"
#include "ETresCommandKind.h"
#include "ETresUIOlafPartsType.h"
#include "ETresUISnowSlideCountDownType.h"
#include "TresLocText.h"
#include "ETresItemDefGumiPattern.h"
#include "ETresUILoadingScreenType.h"
#include "ETresUIMissionGageIconType.h"
#include "ETresUITextAlignH.h"
#include "ETresUIMissionGageColorType.h"
#include "ETresUIHudBlackPearlMarker.h"
#include "ETresUIHudSpecialShipMarker.h"
#include "ETresUICinematicCockpitID.h"
#include "ETresUIHudPuddingCountDown.h"
#include "TresGumiShipCinematicModeEventData.h"
#include "ETresUIHudBlackPearlAlert.h"
#include "ETresUIHudBaymaxResult.h"
#include "ETresUIHudBaymaxHero.h"
#include "ETresUIHudBaymaxKind.h"
#include "ETresUIHudBaymaxCountDown.h"
#include "ETresUIPadButtonType.h"
#include "UObject/NoExportTypes.h"
#include "ETresUIMessageBGColor.h"
#include "Engine/EngineTypes.h"
#include "ETresUIMessageTitleType.h"
#include "TresUIWindowSetting.h"
#include "ETresUILoadingScreenBGColor.h"
#include "ETresUIHudCommonIcon.h"
#include "ETresUIHudCommonKind.h"
#include "ETresUIGradeTextValue.h"
#include "ETresUIGameDataInstallMessageType.h"
#include "ETresUIDialogColor.h"
#include "ETresUIGigasGameGimmickType.h"
#include "Engine/EngineTypes.h"
#include "ETresMapJumpFadeKind.h"
#include "ETresVictoryBonusKind.h"
#include "ETresAbilityKind.h"
#include "TresVectorInt.h"
#include "UObject/NoExportTypes.h"
#include "ETresSavePointDispType.h"
#include "ETresPlayerAbilityGrowthType.h"
#include "UObject/NoExportTypes.h"
#include "ETresPlayerUniqueID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresKHSMaterialParameterIDVectorType -FallbackName=ETresKHSMaterialParameterIDVectorType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETresKHSMaterialParameterIDScalarType -FallbackName=ETresKHSMaterialParameterIDScalarType
#include "ETresObjTypeProcChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ObjectType -FallbackName=ESQEX_ObjectType
#include "ETresEnemyXIIIPhaseType.h"
#include "RemyAccessMethod.h"
#include "ETresGumiShipDirectNotifyType.h"
#include "ETresWorldCode.h"
#include "ETresItemDefCampItem.h"
#include "ETresBoneSpacesType.h"
#include "ETresItemDefMaterial.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ViewTargetTransitionParamsEx -FallbackName=ViewTargetTransitionParamsEx
#include "PRIZE_KIND.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraAnimPlaySpace -FallbackName=ECameraAnimPlaySpace
#include "ESQEX_Enums.h"
#include "ETresDlcChallengeRecordID.h"
#include "ETresGameOverKind.h"
#include "ETresDlcCheatAchievementID.h"
#include "ETresItemDefWeapon.h"
#include "ETresPlayerGrowthType.h"
#include "ETresGameOverMenuType.h"
#include "ETresForceFeedbackKind.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "ETresMiRxHolySealType.h"
#include "ETresGameMiniGameType.h"
#include "ETresItemDefKeyItem.h"
#include "ETresItemDefReport.h"
#include "ETresItemDefProtector.h"
#include "ETresItemDefNavimap.h"
#include "ETresItemDefMognetItem.h"
#include "ETresItemDefLSIGameItem.h"
#include "ETresItemDefGumiSticker.h"
#include "ETresItemDefGumiShipBP.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiMaterial.h"
#include "ETresItemDefGumiEtc.h"
#include "ETresItemDefFood.h"
#include "ETresItemDefAccessory.h"
#include "ETresdirectionType.h"
#include "ETresGameLevelID.h"
#include "TresCameraDebugOrthoTopView.h"
#include "TresGameBlueprintLibrary.generated.h"

class UObject;
class USceneComponent;
class ATresCharPawnBase;
class AActor;
class ATresGumiShipWorldSymbolActor;
class USkeletalMeshComponent;
class UTresFieldVoice;
class UTresTimerTask;
class USwfMovie;
class UTresUIDataAssetWorkshop;
class ATresPlayerPawnBase;
class ATresEnemyPawnBase;
class UTresTexturePump;
class UActorComponent;
class AMatineeActor;
class UMaterialInterface;
class AEmitterCameraLensEffectBase;
class ATresLgRxManager;
class UTresFriendComponent;
class ATresNpcPawn_c_npc;
class UInstancedStaticMeshComponent;
class ULightComponent;
class UTresMapSet;
class UTresActorVoice;
class UParticleSystemComponent;
class UParticleSystem;
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

UCLASS()
class UTresGameBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTresGameBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void WaitForFriendRunningBehaviorTree(UObject* WorldContext, FLatentActionInfo LatentInfo, ETresChrUniqueID NpcChrID);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartWipeOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartWipeIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartWhiteOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartWhiteIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartGameOverWhiteOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartFadeOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartFadeIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartCinematicModeEx(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bDisableCameraMove, ETresCinematicPlayerStateType PlayerState, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion, bool bShowPlayerAuraEffect, bool bDisableIKinema, bool bPauseAI, bool bRecordLevelEntity);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresStartCinematicMode(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, ETresCinematicPlayerStateType InPlayerState, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresSetupChatMode(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawn1, ATresCharPawnBase* InPawn2);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresIsReadyCinematicMode(UObject* WorldContextObject, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresGetVictoryBonus(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, FName InFlagName);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresGetMultiItem2(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const TArray<FName>& InItemKeyNames, const TArray<int32>& InItemNums);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresGetMultiItem(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, FName InItemKeyName1, int32 InItemNum1, FName InItemKeyName2, int32 InItemNum2, FName InItemKeyName3, int32 InItemNum3, FName InItemKeyName4, int32 InItemNum4, FName InItemKeyName5, int32 InItemNum5);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresGetKeyitem(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, FName InItemKeyName);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresComNpcEndMotion(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawnComNpc, ATresCharPawnBase* InPawnTarget);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresCinematicPlayerIdling(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool InNormalIdle, float InTimeOut);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresCinematicChrTurnTo(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawn, const FVector& InLocation, bool InDisableWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresCinematicChrLand(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ATresCharPawnBase* InPawn, float InTime);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresCancelFade(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed, bool InGamePause);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresCameraNormalChange(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float InTimeOut);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresCameraInterpChange(UObject* WorldContextObject, AActor* Camera, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void WaitBPTresBattleModeEnd(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float InTimeOut);
    
    UFUNCTION(BlueprintCallable)
    static void TresWaitLevelStreaming(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool WaitMakeVisible, int32 WaitCount);
    
    UFUNCTION(BlueprintCallable)
    static void TresWaitCycle(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 WaitNum);
    
    UFUNCTION(BlueprintCallable)
    static void TresWaitCompleteDynamicNavMesh(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_WaitForVideoPrepare(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_WaitForVideoFinish(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_WaitForVideoComponentPrepare(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_WaitForBattleReport(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_StopVideo();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_StartCommandModeEx(ETresUIHudCommandExKind CommandKindEx);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_StartCommandMode(TEnumAsByte<ETresCommandKind> CommandKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ShowTimerNewRecord();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ShowHudUx();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ShowHudStatus();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ShowHudCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ShowHudCommand();
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_ShowGetTreasurePrizeSnowCurling(int32 PrizeCount, bool IsComplete);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_ShowGetBonusPointSnowCurling(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_ShowCountDownSnowCurling(ETresUISnowSlideCountDownType Type);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetVideoFinishRemoteEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetTimerRecordTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetTimerColor(ETresUITimerColor ColorType);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetSubtitleText(const FTresLocText& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_SetRightTimerRecordTimeSnowCurling(float fTime);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_SetRightTimerNewRecordSnowCurling();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetPauseHintText(const FTresLocText& HintText);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetPauseGameHelp(ETresGameHelp GameHelpID);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetNaviMapMarkerPcStart(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetMissionGageValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetMissionGageText(const FTresLocText& Text);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetMissionGageIconType(ETresUIMissionGageIconType Type);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetMissionGageColorType(ETresUIMissionGageColorType Type);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetMissionCounter(int32 count);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetMaxMissionGageValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetLyricsText(const FTresLocText& Text);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetLoadingScreenType(ETresUILoadingScreenType Type);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetLoadingScreenNewGame(FName DefineName);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetKairiCounter(int32 count);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetInitHudSpecialShipGoalMeter(float Start, float Goal);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudSpecialShipGoalMeter(float fMeter, ETresUIHudSpecialShipMarker markerKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudSpecialShipGoalMarker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudSpecialShipGoalDistance(float fMeter);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudPuddingStartCountDown(ETresUIHudPuddingCountDown CountKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudPuddingFinishCountDown(ETresUIHudPuddingCountDown CountKind);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_SetHudLeftScoreSnowCurling(int32 nScore);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudLeftScorePudding(int32 Score, bool Record);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_SetHudLeftScoreChainBonusSnowCurling(float fRate, int32 nCounter);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudLeftScore(int32 Score, bool Record);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBlackPearlChaseMeter(float Meter, ETresUIHudBlackPearlMarker markerKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBlackPearlChaseMarkerAlert(ETresUIHudBlackPearlAlert alertKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBlackPearlChaseAlert(bool IsAlert);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBaymaxTime(bool Record);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBaymaxScore(int32 Score, bool Record);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBaymaxLocationMarker(AActor* Marker, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBaymaxHeroMarker(ATresCharPawnBase* CharPawn, ETresUIHudBaymaxHero HeroKind, float Gauge, float Distance, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBaymaxFinish(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBaymaxEnemyMarker(ATresCharPawnBase* CharPawn, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetHudBaymaxCountDown(ETresUIHudBaymaxCountDown CountKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetGigasGameTotalScore(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetGigasGameGetScore(int32 GetScore);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetGigasGameChainBonus(float Bonus);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetGameHelpFlag(ETresGameHelp HelpId, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetEnableNaviMap(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetEnableKeepVisibleCockpitInCinematic(ETresUICinematicCockpitID CockpitID, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_SetCutsceneText(const FTresLocText& Text, bool IsScreenCenter, ETresUITextAlignH AlignH, ETresUITextAlignV AlignV, float DisplayTime, ETresUICutsceneTextShowMethod ShowMethod, float ShowTime, ETresUICutsceneTextHideMethod HideMethod, float HideTime);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetCodeMenuSecret();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetCodeMenuFirst(bool bCheat, bool bChallenge);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_SetActiveHudWorkshopPadGuide(TEnumAsByte<ETresUIPadButtonType> ButtonType, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ResumeVideo(int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_RestorePauseHintText();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ResetHudCommandState();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_RemoveOptionalGameOverHint(FName HintID);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ReleaseVideoSlotAll();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ReleaseVideoSlot(int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_PrepareVideo(const FString& MovieFilePath, bool PauseWhenPrepared, bool AlphaComposite, int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_PreInitializeHudSpecialShip();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_PlayVideoPhilharmonic(bool AlphaComposite, int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_PlayVideo(const FString& MovieFilePath, bool AlphaComposite, int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_PauseVideo();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenUINormalLoadScreen(const FColor BgColor);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenThankYouForPlaying(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float IgnoreInputTime, float DisplayTime);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_OpenTextWindow(float Left, float Top, float Right, float Bottom, const FString& Text, bool CloseOnLevelChange, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenSubtitle(const FTresLocText& Text, ETresUISubtitleUsage SubtitleUsage);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_OpenRightTimerCountUpSnowCurling(UTresTimerTask* pTask, float fStartTime);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_OpenRetryMenu();
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_OpenResultSnowCurling(UObject* WorldContextObject, FLatentActionInfo latentInfo_, float Time, int32 Score, int32 timeBonus, int32 damageBonus, int32 Total, int32 treasureCnt, bool bTimeUpdated, bool bScoreUpdated, bool bTreasureComplete, ETresUISnowSlideRank Rank);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_OpenPlayerSelectLR(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FTresLocText& TextNameL, const FTresLocText& TextNameR, int32& OutSelected, float fIgnoreInputTime, bool AutoClose);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenOptionWindow(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Left, float Top, float Right, float Bottom, const FString& Message, const FString& Option1, const FString& Option2, const FString& Option3, const FString& Option4, const FString& Option5, const FString& Option6, const FString& Option7, const FString& Option8, const FString& Option9, const FString& Option10, int32& Selected);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenOlafGage();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenMissionGage(FName DataTableKeyName);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenMissionCounter(int32 InitializeCount, FName DataTableKeyName, bool IsOverMaxCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_OpenMessage(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ETresUIMessageBGColor> BgColor, TEnumAsByte<ETresUIMessageTitleType> TitleType, const FTresLocText& MessageText, const FTresUIWindowSetting& WindowSetting);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenLoadingScreen(ETresUILoadingScreenBGColor BgColor);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenKairiCounter(int32 InitializeCount);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenInformation(const FTresLocText& InformationText, bool AutoClose, float OptionalDisplayTime);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudWorkshop(UTresUIDataAssetWorkshop* UIDataAssetWorkshop);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudPudding();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudLuxord(float fRedZonePlayer, float fRedZoneEnemy, float fRedZonePlayer2, float fRedZoneEnemy2);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_OpenHudLeftScoreSnowCurling(int32 nRecord);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudLeftScorePudding(ETresUIHudCommonKind ScoreKind, ETresUIHudCommonIcon Icon, int32 RecordScore);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudLeftScore(ETresUIHudCommonKind ScoreKind, ETresUIHudCommonIcon Icon, int32 RecordScore);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudBlackPearlChase(float Start, float Goal);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudBaymaxResult(float Time, int32 Score, int32 Bonus, ETresUIHudBaymaxResult rankKind, bool RecordTime, bool RecordScore);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudBaymaxLiveFeed(int32 Kind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHudBaymax(ETresUIHudBaymaxKind HudKind, float RecordTime, int32 RecordScore, UTresTimerTask* Task);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenHologramStartMenu(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FName ReturnMapName, FName ReturnPlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenGradeText(ETresUIGradeTextValue Value);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenGigasGame(UTresTimerTask* Task);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenGameHelpWithMessage(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ETresGameHelp HelpId, bool WithPause, bool bTutorial, const FString& MessageTextID, bool& OutExecMessage);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenGameHelp(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ETresGameHelp HelpId, bool WithPause);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_OpenGameDataInstallMessage(ETresUIGameDataInstallMessageType InstallMessageType, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenCountUpTimer(UTresTimerTask* Task, bool IsLeft);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenCountDownTimer(UTresTimerTask* Task, float StartTime, float WarningTime, float AlertTime, bool IsLeft);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_OpenConfirm(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TEnumAsByte<ETresUIMessageBGColor> BgColor, TEnumAsByte<ETresUIMessageTitleType> TitleType, const FTresLocText& MessageText, const TArray<FTresLocText> ButtonTexts, const FTresUIWindowSetting& WindowSetting, int32 DefaultSelectedIndex, int32& OutSelected);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenCodeMenu(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool bNoResetApFree);
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_OpenChoice(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FTresLocText& Text, const TArray<FTresLocText>& Choices, const FTresUIWindowSetting& WindowSetting, int32 DefaultSelectedIndex, int32& OutSelected, bool AutoClose, bool DecideSilent, ETresUIDialogColor DialogColor);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenCenterInformation(const FTresLocText& InformationText);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenCampMenuNeedCloseConfirm(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenCampMenu(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_OpenBattleReport();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_NotifyHudSpecialShipGoalMeterAlert(bool bAlert);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_MapInNoticeMessage(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool EnableBGMask);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_LoadMissionGageIcon(USwfMovie* IconAsset);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_IsPlayingVideo();
    
    UFUNCTION(BlueprintPure)
    static bool TresUI_IsOpenedGameHelpFlag(ETresGameHelp HelpId);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_IsGameDataInstallCompleted();
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_IsEmptyVideoSlot(int32 SlotNo);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_IsClosedLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_InitializeSnowSlide();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_HideHudUx();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_HideHudStatus();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_HideHudShining();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_HideHudCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_HideHudCommand();
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_GetMissionCounter();
    
    UFUNCTION(BlueprintCallable)
    static FColor TresUI_GetLoadingScreenFadeColor();
    
    UFUNCTION(BlueprintCallable)
    static int32 TresUI_GetKairiCounter();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_EndCommandModeEx(ETresUIHudCommandExKind CommandKindEx);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_EndCommandMode(TEnumAsByte<ETresCommandKind> CommandKind);
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_DisposeSnowSlide();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_DeleteHudGigasGimmickMarker(USceneComponent* Component, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_DeleteHudBaymaxLocationMarker();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_DeleteHudBaymaxHeroMarker(ETresUIHudBaymaxHero HeroKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_DeleteHudBaymaxEnemyMarker();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_DeleteAllActionCommand();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_DeleteActionCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx, bool bDecision);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CountUpOlafGage(ETresUIOlafPartsType Type);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CountDownOlafGage();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseWindow(int32 WindowHandle, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseUINormalLoadScreen();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseTimer();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseSubtitle();
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_CloseRightTimerSnowCurling();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseOlafGage();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseMissionGage();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseMissionCounter();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseKairiCounter();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseInformation();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudWorkshop();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudPudding();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudLuxord();
    
    UFUNCTION(BlueprintCallable)
    static bool TresUI_CloseHudLeftScoreSnowCurling();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudLeftScorePudding(bool NewRecordDisplay);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudLeftScore(bool NewRecordDisplay);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudBlackPearlChase();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudBaymaxLiveFeed();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseHudBaymax();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseGigasGameGetScoreAndChainBonus(int32 totalScore);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseGigasGame();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseCutsceneText(int32 WindowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CloseCenterInformation();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ClearPauseGameHelp();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ClearOptionalGameOverHint();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ClearNaviMapMarkerPcStart();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ClearLyricsText();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ClearInformationTextCache();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_CachePauseHintText();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_ApplyCustomize();
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddOptionalGameOverHint(FName HintID);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddHudGigasGimmickMarker(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddHudBaymaxLocationMarker(AActor* Marker, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddHudBaymaxHeroMarker(ATresCharPawnBase* CharPawn, ETresUIHudBaymaxHero HeroKind, float GaugeMax, FVector InitialLocation);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddHudBaymaxEnemyMarker(ATresCharPawnBase* CharPawn);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddHudBaymaxDataPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddGigasGameGimmickBonus(ETresUIGigasGameGimmickType Type, const FVector& Location, int32 Bonus);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddGigasGameCommonPoint(ATresEnemyPawnBase* DeadEnemy, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddGigasGameAcePoint(ATresEnemyPawnBase* DeadEnemy, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static void TresUI_AddActionCommandMode(TEnumAsByte<ETresCommandKind> CommandKind, ETresUIHudCommandExKind CommandKindEx);
    
    UFUNCTION(BlueprintCallable)
    static void TresStopShowMapNameSystem(bool Stop);
    
    UFUNCTION(BlueprintCallable)
    static void TresStopPumpingTextureStream();
    
    UFUNCTION(BlueprintCallable)
    static void TresStopPlayerHoldCamera(UObject* WorldContextObject, bool bStop);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartTextureResidentForTaggedActors(UObject* WorldContextObject, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartTextureResidentForActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartTextureResidentForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartTextureResident(UObject* WorldContextObject, FName ResidentTag, bool LoadTexture, bool Reset);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartTalkEvent(UObject* WorldContextObject, UTresFieldVoice* Asset, FName AnimName);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartPumpingTextureStream(UTresTexturePump* InTexturePump);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartCinematicModeEx(UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bDisableCameraMove, ETresCinematicPlayerStateType PlayerState, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion, bool bShowPlayerAuraEffect, bool bDisableIKinema, bool bPauseAI, bool bRecordLevelEntity);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartCinematicMode(UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bPlayerStateClear, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect, bool bChangeTPViewMode);
    
    UFUNCTION(BlueprintCallable)
    static void TresStartBossDefeatEffect(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresSpawnActorFromClassPath(const UObject* WorldContextObject, FLatentActionInfo LatentInfo, AActor*& SpawnedActor, const FString& ActorClassPath, const FVector& Location, const FRotator& Rotation, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, bool AsyncLoad);
    
    UFUNCTION(BlueprintCallable)
    static void TresShowMapName(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetVisibleGimmickAction(UObject* WorldContextObject, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetVisibleComNpc(UObject* WorldContextObject, bool bEnable, FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTransientComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTransientActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanWorldMinY(UObject* WorldContextObject, FName TagName, float WorldMinY);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanWorldMinX(UObject* WorldContextObject, FName TagName, float WorldMinX);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanWorldMaxY(UObject* WorldContextObject, FName TagName, float WorldMaxY);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanWorldMaxX(UObject* WorldContextObject, FName TagName, float WorldMaxX);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanWindSpeed(UObject* WorldContextObject, FName TagName, float WindSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanWindAngle(UObject* WorldContextObject, FName TagName, float WindAngle);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanWavelength(UObject* WorldContextObject, FName TagName, float Wavelength);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanTimeDilationFactor(UObject* WorldContextObject, FName TagName, float TimeDilationFactor);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanSteepness(UObject* WorldContextObject, FName TagName, float Steepness);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanSmallWaveSuppression(UObject* WorldContextObject, FName TagName, float SmallWaveSuppression);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanOppositeWaveSuppression(UObject* WorldContextObject, FName TagName, float OppositeWaveSuppression);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanOmegaPeriod(UObject* WorldContextObject, FName TagName, float OmegaPeriod);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_OceanAmplitude(UObject* WorldContextObject, FName TagName, float Amplitude);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_LOD(UObject* WorldContextObject, FName TagName, bool bForcedLodModelOverride, int32 ForcedLodModel, bool bSQEXForceLODDisableOverride, bool bSQEXForceLODDisable);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetTaggedActorProperty_DistanceCulling(UObject* WorldContextObject, FName TagName, bool bDesiredMaxDrawDistanceOverride, float DesiredMaxDrawDistance, bool bAllowCullDistanceVolumeOverride, bool bAllowCullDistanceVolume);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetSpecialBattleMode(UObject* WorldContextObject, bool bIsSpecialMode);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationWorldMinY(const UObject* WorldContextObject, float WorldMinY);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationWorldMinX(const UObject* WorldContextObject, float WorldMinX);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationWorldMaxY(const UObject* WorldContextObject, float WorldMaxY);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationWorldMaxX(const UObject* WorldContextObject, float WorldMaxX);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationWindSpeed(const UObject* WorldContextObject, float WindSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationWindAngle(const UObject* WorldContextObject, float WindAngle);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationUpdate(UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationTime(UObject* WorldContextObject, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationCPUReadBack(UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanSimulationAmplitude(const UObject* WorldContextObject, float Amplitude);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetOceanDiveModeEnvSwitch(UObject* WorldContextObject, bool bDiveMode, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetMatineeForMovie(AMatineeActor* MatineeActor, bool IsMovie);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetIKinemaEnable(const TArray<ATresCharPawnBase*>& TresCharPawns, bool Enable, bool Force);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetForceMipLevelsToBeResidentForTaggedActor(UObject* WorldContextObject, FName TagName, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float Duration, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetForceMipLevelsToBeResident(const TArray<UMaterialInterface*>& Materials, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float Duration, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetEventCutsceneMaxFPSMode(UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetDisableGamePause(UObject* WorldContextObject, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetDisableCampMenu(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetComponentMobility(USceneComponent* Component, TEnumAsByte<EComponentMobility::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetCacheSampleTransitionSpeed(float Value);
    
    UFUNCTION(BlueprintCallable)
    static void TresSaveVisibleLevelList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresResetTaggedActorProperty(UObject* WorldContextObject, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    static void TresResetAllTaggedActorProperty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresRecordComNpc(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresPrestreamTextures(const TArray<AActor*>& Actors, float Duration, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION(BlueprintCallable)
    static void TresPrepareMap(const TArray<FName>& SubLevelNames, const bool IsDisableEditor);
    
    UFUNCTION(BlueprintCallable)
    static void TresPlayFriendFaceAnimation(UObject* WorldContextObject, ETresChrUniqueID Character, FName AnimName);
    
    UFUNCTION(BlueprintCallable)
    static void TresPlayFriendAnimation(UObject* WorldContextObject, ETresChrUniqueID Character, FName AnimName, float BlendInTime, bool isLoop);
    
    UFUNCTION(BlueprintCallable)
    static void TresNotifyStopCutscene(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresNotifyPlayCutscene(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresNotifyOceanIslandTriggerBoxOverlap(UObject* WorldContextObject, bool Begin);
    
    UFUNCTION(BlueprintCallable)
    static void TresMovieClip(const FString& greatestMomentID, const FString& clipName, float timeSecond, float startTimeSecond);
    
    UFUNCTION(BlueprintCallable)
    static void TresMapJump(FName MapName, FName TargetTag, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind);
    
    UFUNCTION(BlueprintCallable)
    static void TresLoadVisibleLevelList(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresLevelListVisibility(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const TArray<FName>& Names, bool Visible);
    
    UFUNCTION(BlueprintCallable)
    static void TresLevelFlashGimmickActors(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool TresIsSpecialBattleMode();
    
    UFUNCTION(BlueprintCallable)
    static bool TresIsPrepareMap();
    
    UFUNCTION(BlueprintPure)
    static bool TresIsGame();
    
    UFUNCTION(BlueprintCallable)
    static int32 TresIsFindName(FName findName, const TArray<FName>& Names);
    
    UFUNCTION(BlueprintPure)
    static bool TresIsExistComNpc(UObject* WorldContextObject, FName InName);
    
    UFUNCTION(BlueprintCallable)
    static bool TresIsCommonAssetAsyncLoad();
    
    UFUNCTION(BlueprintCallable)
    static bool TresIsCinematicMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool TresIsBattleMode();
    
    UFUNCTION(BlueprintCallable)
    static bool TresIsAutoActorLoading();
    
    UFUNCTION(BlueprintCallable)
    static bool TresIsAutoActorEnd();
    
    UFUNCTION(BlueprintCallable)
    static void TresGumiShipStartCinematicMode(UObject* WorldContextObject, bool bPauseAI, bool bHideGumiShip, bool bHideCockpit, bool bDisableUserGumiShipControll, bool bDisableUserCameraControll, bool bResetTinyShipFormation, bool bResetGumiShipThrusterEffect, bool bResetGumiShipAuraEffect, bool bDestroyProjectile);
    
    UFUNCTION(BlueprintCallable)
    static void TresGumiShipNotifyCinematicModeEvent(UObject* WorldContextObject, const FTresGumiShipCinematicModeEventData& CinematicModeEvent);
    
    UFUNCTION(BlueprintCallable)
    static void TresGumiShipEndCinematicMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString TresGetVoiceLanguage();
    
    UFUNCTION(BlueprintCallable)
    static void TresGetVictoryBonus(UObject* WorldContextObject, ATresCharPawnBase* InPawn, ETresVictoryBonusKind InBonus, ETresAbilityKind InAbility);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetOceanSimulationWorldMinY(const UObject* WorldContextObject, float& WorldMinY);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetOceanSimulationWorldMinX(const UObject* WorldContextObject, float& WorldMinX);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetOceanSimulationWorldMaxY(const UObject* WorldContextObject, float& WorldMaxY);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetOceanSimulationWorldMaxX(const UObject* WorldContextObject, float& WorldMaxX);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetOceanSimulationWindSpeed(const UObject* WorldContextObject, float& WindSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetOceanSimulationWindAngle(const UObject* WorldContextObject, float& WindAngle);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetOceanSimulationAmplitude(const UObject* WorldContextObject, float& Amplitude);
    
    UFUNCTION(BlueprintCallable)
    static ATresLgRxManager* TresGetLgRxManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTresFriendComponent* TresGetFriendManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString TresGetCurrentLocale();
    
    UFUNCTION(BlueprintPure)
    static FString TresGetCurrentLanguageScript();
    
    UFUNCTION(BlueprintPure)
    static FString TresGetCurrentLanguage();
    
    UFUNCTION(BlueprintPure)
    static ATresNpcPawn_c_npc* TresGetComNpc(UObject* WorldContextObject, FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetActorsInLevel(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void TresGetActorsAll(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void TresFlushLOD(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresFlushILC(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresExecuteGarbageCollection();
    
    UFUNCTION(BlueprintCallable)
    static void TresEndTextureResidentForTaggedActors(UObject* WorldContextObject, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    static void TresEndTextureResidentForActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    static void TresEndTextureResidentForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void TresEndTextureResident(UObject* WorldContextObject, FName ResidentTag);
    
    UFUNCTION(BlueprintCallable)
    static void TresEndFriendFaceAnimation(UObject* WorldContextObject, ETresChrUniqueID Character);
    
    UFUNCTION(BlueprintCallable)
    static void TresEndCinematicMode(UObject* WorldContextObject, bool bBattleIdlingEnd, bool bInvokeRecordedLevelEntity);
    
    UFUNCTION(BlueprintCallable)
    static void TresEndBaymaxRideHud(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresEndAllTexturesResident();
    
    UFUNCTION(BlueprintCallable)
    static void TresEnableTemporalAA(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void TresEnableFriendChatMode(UObject* WorldContextObject, bool bEnable, ETresChrUniqueID InChrID);
    
    UFUNCTION(BlueprintCallable)
    static void TresEnableComNpcChatMode(UObject* WorldContextObject, bool bEnable, FName InName);
    
    UFUNCTION(BlueprintCallable)
    static void TresDisablePlayerDecoParts(UObject* WorldContextObject, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void TresDirectRideVehicle(UObject* WorldContextObject, AActor* inActor, int32 InParam, float InCameraYaw, int32 InBonamikPreRoll);
    
    UFUNCTION(BlueprintCallable)
    static void TresDirectReMindLgRx(UObject* WorldContextObject, AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static void TresDirectFRMountCurling(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresDirectBaymaxRide(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresDirectAFTeaCup(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresDestroyVehiclePawnGigasCylinder(FVector InCenterPos, float InRadiusXY, float InHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    static void TresDestroyEnemySpawnedVehiclePawnGigas();
    
    UFUNCTION(BlueprintCallable)
    static void TresDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresDefaultCacheSampleTransitionSpeed();
    
    UFUNCTION(BlueprintCallable)
    static void TresDebugUnlockSmartphone(UObject* WorldContextObject, bool bUnlock);
    
    UFUNCTION(BlueprintCallable)
    static void TresDebugPrintWarning(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void TresDebugPrintString(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration, FLinearColor Color, bool bEditorOnly);
    
    UFUNCTION(BlueprintCallable)
    static void TresDebugPrintError(const FString& str, bool bPrintToScreen, bool bPrintToLog, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void TresCreateMatrixInstancedStaticMesh(UInstancedStaticMeshComponent* cp, const FTresVectorInt& CreateNum, const FTransform& Transform, const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    static void TresCopyLightParam(ULightComponent* src, ULightComponent* Dest);
    
    UFUNCTION(BlueprintPure)
    static bool TresCompareComponentMobility(USceneComponent* Component, TEnumAsByte<EComponentMobility::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicStartPawnChatMode(UObject* WorldContextObject, ATresCharPawnBase* InPawn, bool InDisableWeapon);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicSetPawnIndividualCinematicMode(UObject* WorldContextObject, ATresCharPawnBase* InPawn, bool InAIStop, bool InChangeCinematicState);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicPlayerStateClearEx(UObject* WorldContextObject, bool bForceStateClear, ETresCinematicPlayerStyleType PlayerStyle, bool bContinueMotion);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicPlayerStateClear(UObject* WorldContextObject, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicPlayerAuraEffect(UObject* WorldContextObject, bool bShowPlayerAuraEffect);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicPauseAI(UObject* WorldContextObject, bool bEnemyAI, bool bFriendAI, bool bOtherAI, bool bEnemyCinematic, bool bFriendCinematic, bool bOtherCinematic);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicDisableShopActorEffect(UObject* WorldContextObject, ETresSavePointDispType InDispType);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicDisableSavePointEffect(UObject* WorldContextObject, ETresSavePointDispType InDispType);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicDisableRailSlideExStartActorEffect(UObject* WorldContextObject, ETresSavePointDispType InDispType);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicDisableChrFootEffect(UObject* WorldContextObject, bool bDisableFootEffect);
    
    UFUNCTION(BlueprintCallable)
    static void TresCinematicChangeTPViewMode(UObject* WorldContextObject, bool bChangeTPViewMode);
    
    UFUNCTION(BlueprintCallable)
    static void TresChangeBGMEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool TresChangeActionComNpc(UObject* WorldContextObject, FName InName, FName InAction);
    
    UFUNCTION(BlueprintCallable)
    static void TresCancelPrepareMap();
    
    UFUNCTION(BlueprintCallable)
    static void TresBonamikSetWeight(AActor* Actor, float Weight, float WeightChangeTime);
    
    UFUNCTION(BlueprintCallable)
    static void TresBonamikResetAndPreRoll(UObject* WorldContextObject, int32 PreRoll);
    
    UFUNCTION(BlueprintCallable)
    static void TresBonamikRemoveReference(AActor* ReferencingActor, AActor* ReferencedActor);
    
    UFUNCTION(BlueprintCallable)
    static void TresBonamikAddReference(AActor* ReferencingActor, AActor* ReferencedActor);
    
    UFUNCTION(BlueprintCallable)
    static void TresAutoDownResolutionMode(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void TresAutoActorLoad(FName ListPath, FVector ActorSpawnPoint, int32 FrameCount);
    
    UFUNCTION(BlueprintCallable)
    static void TresAutoActorActionLoad(FName ListPath, FVector ActorSpawnPoint, int32 FrameCount, bool PerfCPU);
    
    UFUNCTION(BlueprintCallable)
    static void TresAsyncLoadInitialAssets();
    
    UFUNCTION(BlueprintCallable)
    static void TresApplyMapSet(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UTresMapSet* MapSet, FName cmdName, bool isOneFrameExecute);
    
    UFUNCTION(BlueprintCallable)
    static void TresApplyAreaNameAndNavMap(FName dataTableKey, bool enableAreaName, bool showAreaNameUI, bool enableNavMap, float switchNavMapTime);
    
    UFUNCTION(BlueprintPure)
    static bool TestFlagBitLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintCallable)
    static void StoreEnemyXIIIRetryParam();
    
    UFUNCTION(BlueprintCallable)
    static void StopAllCameraShake(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StopActorVoice(AActor* Speaker, UTresActorVoice* ActorVoice);
    
    UFUNCTION(BlueprintCallable)
    static void StartWhiteOut(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    static void StartWhiteIn(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    static AEmitterCameraLensEffectBase* StartLensEffect(UObject* WorldContextObject, TSubclassOf<AEmitterCameraLensEffectBase> EmitterLensEffectClass, bool in_OverrideAllowMultipleInstances);
    
    UFUNCTION(BlueprintCallable)
    static void StartFadeOut(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    static void StartFadeIn(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    static void StartFade(UObject* WorldContextObject, FVector InFadeColor, FVector2D InFadeAlpha, float InFadeTime, bool InFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* SpawnCameraPositionEffect(UObject* WorldContextObject, UParticleSystem* Effect, FVector Offset, FRotator Rotation, FVector Scale, bool bCamRot, bool bCamRotYaw);
    
    UFUNCTION(BlueprintCallable)
    static void SignalTheaterSceneFinished();
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldResidentsEnable(bool EnableWorldResidents);
    
    UFUNCTION(BlueprintCallable)
    static void SetTresCameraNormalDefault(UObject* WorldContextObject, ATresCameraNormal* TresCameraNormal);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowSettingPS4Default();
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowSettingPCDefault();
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowRadiusThresholdDefault();
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowRadiusThreshold(float InVal);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowQualityLevelDefault();
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowQualityLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerIKinemaEnable(bool EnableIKinema);
    
    UFUNCTION(BlueprintCallable)
    static float SetOneActionState(UObject* WorldContextObject, FName MotionName, bool disableOverlappedForce);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialParameterValueVector(UMaterialInstanceDynamic* MaterialInstanceDynamic, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> ParamType, FLinearColor Val);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialParameterValueScalar(UMaterialInstanceDynamic* MaterialInstanceDynamic, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> ParamType, float Val);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalGameSpeed(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, float InNewTimeDilation, float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameFlagBoolean(FName FlagName, bool FlagValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameFlag(FName FlagName, int32 FlagValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlagLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlagBitLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneLocalTranslationByName(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, const FVector& Loc);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneLocalTranslation(USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex, const FVector& Loc);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneLocalScale3DByName(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, const FVector& Scl);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneLocalScale3D(USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex, const FVector& Scl);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneLocalRotationByName(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, const FRotator& Rot);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneLocalRotation(USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex, const FRotator& Rot);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllComponentVisible(AActor* Actor, bool Visible);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllComponentTickEnable(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllChildActorComponentClass(AActor* Actor, TSubclassOf<AActor> Class);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorVisibleOn(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorVisibleOff(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorVisibleByObjTypeImmediate(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorVisibleByObjType(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorStopOn(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorStopOff(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorStopByObjType(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bStop);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorCollisionDisableOn(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorCollisionDisableOff(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bPlayer, bool bFriend, bool bEnemy, bool bMap, bool bBackground, bool bGimmick, bool bProjectile, bool bNpc, bool bPrize, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorCollisionDisableByObjType(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, ESQEX_ObjectType InObjType, bool bDisable, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    static void SetAAModeDefault();
    
    UFUNCTION(BlueprintCallable)
    static ATresNote* SearchTresNote(FName ID);
    
    UFUNCTION(BlueprintCallable)
    static void ReturnToTitleGameClear();
    
    UFUNCTION(BlueprintCallable)
    static void RestoreEnemyXIIIRetryParam(ETresEnemyXIIIPhaseType InNewPhaseType);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTresCameraPrevious(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTresCameraNormal(UObject* WorldContextObject, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTresCameraExceptActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGlobalGameSpeed(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActorVisibleImmediate(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActorVisible(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActorStop(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel);
    
    UFUNCTION(BlueprintCallable)
    static void ResetActorCollisionDisable(UObject* WorldContextObject, ETresObjTypeProcChannel InChannel, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    static void RemyMapJump(RemyAccessMethod accessMethod, TEnumAsByte<ETresMapJumpFadeKind> fadeKind);
    
    UFUNCTION(BlueprintPure)
    static bool RemyIsFirstPlay();
    
    UFUNCTION(BlueprintCallable)
    static void RemyGetFinalMilestoneRewardAndShowMsg(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    static bool RemyCanCooking();
    
    UFUNCTION(BlueprintCallable)
    static bool RemoteEventPassActor(UObject* WorldContextObject, FName EventName, AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoteEvent(UObject* WorldContextObject, FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterEnemyGaugeTarget(UObject* WorldContextObject, ATresCharPawnBase* InEnemy, bool bMulti);
    
    UFUNCTION(BlueprintCallable)
    static void RegistComponentTickFunction(UActorComponent* Component, bool regist);
    
    UFUNCTION(BlueprintCallable)
    static void RegistActorTickFunction(AActor* Actor, bool regist, bool isComponent);
    
    UFUNCTION(BlueprintCallable)
    static void RecoveryPlayerStatusAllForCinematic(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 RandomSelect(bool inSuccess1, bool inSuccess2, bool inSuccess3, bool inSuccess4, bool inSuccess5, float inProbability1, float inProbability2, float inProbability3, float inProbability4, float inProbability5);
    
    UFUNCTION(BlueprintCallable)
    static void PlayXIIIRetryVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PlayEnemyRetryVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PlayActorVoice(AActor* Speaker, UTresActorVoice* ActorVoice);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyDirectInfomationForGumi(UObject* WorldContextObject, const ETresGumiShipDirectNotifyType eType);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_FlagLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_FlagLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintPure)
    static bool Less_FlagLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintPure)
    static bool IsWaitCycleNeedMatineeImmediatePlay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsUnlockedSecretMovie();
    
    UFUNCTION(BlueprintPure)
    static bool IsUnlockdClearItem(FName ItemName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTresBluePrintDebugMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTheaterMode();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSnowCurlingSavedTreasure(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOverlapTresCameraLocation(UObject* WorldContextObject, FVector Location, float Radius, bool bAddRadiusZ);
    
    UFUNCTION(BlueprintCallable)
    static bool IsOverlapTresCameraActor(UObject* WorldContextObject, AActor* Actor, FVector LocalOffset, float Radius);
    
    UFUNCTION(BlueprintPure)
    static bool IsLookAtTargetXY(AActor* LookActor, AActor* AtActor, float Angle);
    
    UFUNCTION(BlueprintPure)
    static bool IsLocalTresPlayerPawnBase(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsInViewportVector2D(const FVector2D& pos);
    
    UFUNCTION(BlueprintPure)
    static bool IsInViewportActor(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsInFrustumVolumeLocation(APlayerCameraManager* PlayerCameraManager, const FVector& WorldLocation, float SphereRadius);
    
    UFUNCTION(BlueprintPure)
    static bool IsInFrustumVolumeActor(APlayerCameraManager* PlayerCameraManager, AActor* Actor, float SphereRadius);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameCleared();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFadeChange(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistGameFlagBoolean(FName FlagName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistGameFlag(FName FlagName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBPTresCameraInterpChange(UObject* WorldContextObject, AActor* Camera);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_FlagLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_FlagLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ETresWorldCode> GetWorldCode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ETresWorldAreaCode> GetWorldAreaCode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UTresTexturePump* GetTresTexturePump(const FString& DataName);
    
    UFUNCTION(BlueprintPure)
    static ATresPlayerPawnBase* GetTresPlayerPawnBase(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    static ATresPlayerControllerBase* GetTresPlayerControllerBase(UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintPure)
    static ATresLevelScriptActor* GetTresLevelScriptActor(UObject* WorldContextObject, FName PackageName);
    
    UFUNCTION(BlueprintPure)
    static ATresGumiShipWorldSymbolActor* GetTresGumiShipBossBattleLockTargetWorldSymbolActor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATresGameState* GetTresGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStaticMeshComponents(AActor* Target, TArray<UStaticMeshComponent*>& OutComponents);
    
    UFUNCTION(BlueprintPure)
    static ATresPlayerPawnBase* GetLocalTresPlayerPawnBase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATresPlayerControllerLowerBase* GetLocalTresPlayerControllerLowerBase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATresPlayerControllerBase* GetLocalTresPlayerControllerBase(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATresGumiShipPlayerPawnBase* GetLocalTresGumiShipPlayerPawnBase(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATresCameraManager* GetLocalTresCameraManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static APlayerController* GetLocalPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLastPlayerStartTag();
    
    UFUNCTION(BlueprintPure)
    static void GetGameModeTask(TSubclassOf<UTresTaskBase> Class, UTresTaskBase*& Out);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameFlagBoolean(FName FlagName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGameFlag(FName FlagName);
    
    UFUNCTION(BlueprintCallable)
    static float GetFadeAmount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBoneTranslationByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, TEnumAsByte<ETresBoneSpacesType> BoneSpace);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBoneLocalTranslationByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBoneLocalTranslation(const USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBoneLocalScale3DByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBoneLocalScale3D(const USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetBoneLocalRotationByName(const USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetBoneLocalRotation(const USkeletalMeshComponent* SkeletalMeshComponent, int32 BoneIndex);
    
    UFUNCTION(BlueprintPure)
    static float GetAngleTwoVector(const FVector& v1, const FVector& v2);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfTag(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName TagName, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfName(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName ActorName, AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfBlueprintName(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName BlueprintName, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetActorPosToScreenPosRate(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FString GetActorBlueprintName(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutProjectile(UObject* WorldContextObject, ESQEX_ObjectType InObjType);
    
    UFUNCTION(BlueprintCallable)
    static void FadeoutAllCameraShake(UObject* WorldContextObject, float FadeTime);
    
    UFUNCTION(BlueprintPure)
    static bool ExistsSecretMovieFile();
    
    UFUNCTION(BlueprintPure)
    static bool ExistsEpilogueMovieFile();
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_FlagLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintCallable)
    static void EndXIIIRetryVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void EndValidBPTresCameraArray(const TArray<ATresCameraBase*>& EndCameraArray, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    static void EndValidBPTresCamera(ATresCameraBase* EndCamera, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    static void EndLensEffectInstance(UObject* WorldContextObject, AEmitterCameraLensEffectBase* Emitter, bool bLoopEnd, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void EndLensEffectClass(UObject* WorldContextObject, TSubclassOf<AEmitterCameraLensEffectBase> EmitterLensEffectClass, bool bLoopEnd, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void EndEnemyRetryVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void EndCameraPositionEffectInstance(UObject* WorldContextObject, UParticleSystemComponent* EffectInst, bool bLoopEnd, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void EndCameraPositionEffect(UObject* WorldContextObject, UParticleSystem* Effect, bool bLoopEnd, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void EndAllSameBPTresLatent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void EndAllSameBPTresCameraOfName(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams, FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    static void EndAllSameBPTresCamera(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    static void EndAllBPTresCameraOfName(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams, FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    static void EndAllBPTresCamera(UObject* WorldContextObject, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    static void EnablePrecomputedVisibility(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void EnableCollsionActors(const TArray<AActor*>& disablearra);
    
    UFUNCTION(BlueprintCallable)
    static void EmptyFunction();
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugActor(UObject* WorldContextObject, const AActor* inActor, FColor inDrawColor, float inLifeTime);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> DisableChildrenCollision(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAllProjectileForGumi(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAllProjectile(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyAllEnemyPawn();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteAllComponentsByClass(AActor* Actor, TSubclassOf<UActorComponent> DeleteClass, bool bPromoteChildren);
    
    UFUNCTION(BlueprintCallable)
    static void DebugTresDeleteFriend(bool isAll, int32 inIdx);
    
    UFUNCTION(BlueprintCallable)
    static ATresEnemyPawnBase* DebugSimpleEnemySet(UObject* WorldContextObject, FName EnemyID, float OffsetX, float OffsetY, float OffsetZ);
    
    UFUNCTION(BlueprintCallable)
    static void DebugConsoleCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    static UTresTimerTask* CreateTresTaskTimerGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTresTaskGameMode(UObject* WorldContextObject, UTresTaskBase*& Out, TSubclassOf<UTresTaskBase> Class, bool isSingleton);
    
    UFUNCTION(BlueprintCallable)
    static void CreatePrize(UObject* WorldContextObject, const FVector InLocation, TEnumAsByte<PRIZE_KIND> InKind);
    
    UFUNCTION(BlueprintCallable)
    static void ClientStopCameraShake(UObject* WorldContextObject, TSubclassOf<UCameraShake> ShakeClass);
    
    UFUNCTION(BlueprintCallable)
    static void ClientPlayCameraShake(UObject* WorldContextObject, TSubclassOf<UCameraShake> ShakeClass, AActor* OwnerActor, float Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    static void ClearLevelEntityRecord();
    
    UFUNCTION(BlueprintCallable)
    static void ClearFlagBitLabel(FName Flag, FName label);
    
    UFUNCTION(BlueprintCallable)
    static void CleanupForCinematic(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool CanPlaySecretMovie();
    
    UFUNCTION(BlueprintPure)
    static bool CanPlayEpilogueMovie();
    
    UFUNCTION(BlueprintCallable)
    static void CancelFade(UObject* WorldContextObject, float InFadeTime, bool InFadeAudio);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresStartWipeOut(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresStartWipeIn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresStartWhiteOut(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresStartWhiteIn(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresStartFadeOut(UObject* WorldContextObject, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresStartFadeIn(UObject* WorldContextObject, FLinearColor InFadeColor, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresSetupChatMode(UObject* WorldContextObject, ATresCharPawnBase* InPawn1, ATresCharPawnBase* InPawn2);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresSetFadeColorAndAmount(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, FLinearColor InFadeColor, float InAmount);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresPlayerResetStyle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresPlayerDisableWallRunPhysXCollision(UObject* WorldContextObject, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static bool BPTresIsFadeChange(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer);
    
    UFUNCTION(BlueprintCallable)
    static float BPTresGetFadeAmount(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresDoAttractionFlowMarkerDraw(UObject* WorldContextObject, ATresCharPawnBase* InPawn);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresCinematicPlayerTrinityDie(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresCinematicChrTurnTo(UObject* WorldContextObject, ATresCharPawnBase* InPawn, const FVector& InLocation, bool InDisableWeapon);
    
    UFUNCTION(BlueprintCallable)
    static bool BPTresCheckSpecialShipLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresCancelFade(UObject* WorldContextObject, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer, float InFadeTime, bool InApplyGameSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresActorMoveToLocation(UObject* WorldContextObject, AActor* MoveActor, FVector Destination, float Time, bool bSnapFloor, bool bRotationYaw, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void BPTresActorMoveToActor(UObject* WorldContextObject, AActor* MoveActor, AActor* DestinationActor, float Time, bool bSnapFloor, bool bRotationYaw, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresUpdateDlcChallengeAchievementRecord(UObject* WorldContextObject, ETresDlcChallengeRecordID InRecordID);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresUnlockBattlePortalRewardAction(UObject* WorldContextObject, FString& OutRewardStr);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresToSecondHalfForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresStopForceFeedbackAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresStopForceFeedback(UObject* WorldContextObject, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresStartGameOverLoopSE(UObject* WorldContextObject, ETresGameOverKind InKind);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresStartGameOverEvent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresStartGameOver(UObject* WorldContextObject, ETresGameOverKind InGameOverKind, bool bPlayDeadSE);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresStartDlcCheatAchievement(UObject* WorldContextObject, ETresDlcCheatAchievementID InCheatAchievementID, int32 InOption, int32 InOption2);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresStartCinematicModeForLevel(UObject* WorldContextObject, bool bHidePlayer, bool bHideCockpit, bool bDisableMove, bool bPlayerStateClear, bool bForceStateClear, bool bStyleChangeClear, bool bContinueMotion, bool bDisableCameraMove, bool bPauseAI, bool bDisableIKinema, bool bRecordLevelEntity, bool bShowPlayerAuraEffect, bool bChangeTPViewMode);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetStateTableIndex(UObject* WorldContextObject, int32 dIndex, float fOverrideCoolDownTime);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetShopLevel(UObject* WorldContextObject, int32 InShopLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetPlayerGrowthType(UObject* WorldContextObject, ETresPlayerGrowthType InGrowthType, ETresPlayerAbilityGrowthType InAbilityType);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetKinematicEnable(bool bEnable, float InTime);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetGumiShopLevel(UObject* WorldContextObject, int32 InShopLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetGameOverMenuType(UObject* WorldContextObject, ETresGameOverMenuType InKind);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetEnableReplicaAttackForLevel(UObject* WorldContextObject, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetBattleLevelFromName(UObject* WorldContextObject, FName BattleLevelName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetBattleLevelAuto(UObject* WorldContextObject, FName FlagName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresSetBattleLevel(UObject* WorldContextObject, int32 InBattleLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresRiseShopLevel(UObject* WorldContextObject, int32 InShopLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresRiseGumiShopLevel(UObject* WorldContextObject, int32 InShopLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresRiseBattleLevel(UObject* WorldContextObject, int32 InBattleLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresReturnCharEquipItems(UObject* WorldContextObject, ETresChrUniqueID InChrID);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresResetClipLength(UObject* WorldContextObject, const FName InGroupName, float InTransitionTime);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresRequestToMickeyDownStateForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresRequestPreLastHolyForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresRequestFullFireLaser(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresRequestChangeStateToTiredForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresRequestActionStartForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresPlayVoiceAndLipForGameStartForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresPlayForceFeedback(UObject* WorldContextObject, ETresForceFeedbackKind InKind, bool InLooping, int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresOverwriteClipLength(UObject* WorldContextObject, float InOverwriteClipLength, const FName InGroupName, float InTransitionTime);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresOnStartPreLastHolyForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresLineTraceByChannel(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsSimultaneoutWarpAttackStateForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsPlayerHoldCameraState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsLuckyMarkRecorded(UObject* WorldContextObject, FName InMarkId);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsIdleStateForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BP_TresIsGameEnablePerformanceCamera(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BP_TresIsGameEnableForceFeedback(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BP_TresIsFoodstuffActorNeedSpawn(UObject* WorldContextObject, FName InKeyName);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsDlcEnableCheatMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsDlcEnableChallengeMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsDlcCheatAchievementClearAll();
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresIsDlcCheatAchievementClear(ETresDlcCheatAchievementID InCheatAchievementID);
    
    UFUNCTION(BlueprintPure)
    static bool BP_TresIsConfigEnablePerformanceCamera(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BP_TresIsConfigEnableForceFeedback(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BP_TresIsConfigEnableControlTypeB(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresHaveItem(UObject* WorldContextObject, FName InItemKeyName);
    
    UFUNCTION(BlueprintPure)
    static bool BP_TresHaveAllSignKeyItem(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresGetVictoryBonus(UObject* WorldContextObject, FName InFlagName, bool bShowInfo);
    
    UFUNCTION(BlueprintCallable)
    static int32 BP_TresGetShopLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresGetPrize(UObject* WorldContextObject, const TArray<TEnumAsByte<PRIZE_KIND>>& InPrizeItems);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresGetItem(UObject* WorldContextObject, FName InItemKeyName, int32 InNum, bool bShowInfo);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ETresMiRxHolySealType> BP_TresGetHolySealTypeForLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 BP_TresGetGumiShopLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresGetCrabItem(UObject* WorldContextObject, int32 InItemNum);
    
    UFUNCTION(BlueprintCallable)
    static int32 BP_TresGetBattleLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 BP_TresGetBackyardItemNum(UObject* WorldContextObject, FName InItemKeyName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresGameSetMinigame(UObject* WorldContextObject, ETresGameMiniGameType InKind);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresGameChangePlayer(UObject* WorldContextObject, ETresPlayerUniqueID InKind);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresDropBackyardItemOne(UObject* WorldContextObject, FName InItemKeyName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresDlcEnableCheatMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresDlcEnableChallengeMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertKeyItemIDtoKeyName(UObject* WorldContextObject, ETresItemDefKeyItem InBattleItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameWeapon(UObject* WorldContextObject, ETresItemDefWeapon InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameReport(UObject* WorldContextObject, ETresItemDefReport InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameProtector(UObject* WorldContextObject, ETresItemDefProtector InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameNavimap(UObject* WorldContextObject, ETresItemDefNavimap InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameMognet(UObject* WorldContextObject, ETresItemDefMognetItem InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameMaterial(UObject* WorldContextObject, ETresItemDefMaterial InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameLSIGame(UObject* WorldContextObject, ETresItemDefLSIGameItem InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameKeyitem(UObject* WorldContextObject, ETresItemDefKeyItem InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameGumiSticker(UObject* WorldContextObject, ETresItemDefGumiSticker InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameGumiShipBP(UObject* WorldContextObject, ETresItemDefGumiShipBP InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameGumiPattern(UObject* WorldContextObject, ETresItemDefGumiPattern InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameGumiParts(UObject* WorldContextObject, ETresItemDefGumiParts InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameGumiMaterial(UObject* WorldContextObject, ETresItemDefGumiMaterial InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameGumiEtc(UObject* WorldContextObject, ETresItemDefGumiEtc InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameFoodstuff(UObject* WorldContextObject, ETresItemDefFoodstuff InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameFood(UObject* WorldContextObject, ETresItemDefFood InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameCamp(UObject* WorldContextObject, ETresItemDefCampItem InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameBattle(UObject* WorldContextObject, ETresItemDefBattleItem InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertItemIDtoKeyNameAccessory(UObject* WorldContextObject, ETresItemDefAccessory InItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertFoodstuffItemIDtoKeyName(UObject* WorldContextObject, ETresItemDefFoodstuff InFoodstuffItemID);
    
    UFUNCTION(BlueprintPure)
    static FName BP_TresConvertBattleItemIDtoKeyName(UObject* WorldContextObject, ETresItemDefBattleItem InBattleItemID);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresCheckPhotoHologramUnlock(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_TresCheckDlcCheatAchievement(UObject* WorldContextObject, ETresDlcCheatAchievementID InCheatAchievementID);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresChangeCharEquipWeapon(UObject* WorldContextObject, ETresChrUniqueID InChrID, ETresItemDefWeapon InWeaponID);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresAddShopLevel(UObject* WorldContextObject, int32 InAddLevel);
    
    UFUNCTION(BlueprintCallable)
    static void BP_TresAddGumiShopLevel(UObject* WorldContextObject, int32 InAddLevel);
    
    UFUNCTION(BlueprintCallable)
    static FVector BP_SetVectorElement(const FVector& Vec, bool bSetX, float X, bool bSetY, float Y, bool bSetZ, float Z);
    
    UFUNCTION(BlueprintCallable)
    static FRotator BP_SetRotatorElement(const FRotator& Rot, bool bSetX, float RollX, bool bSetY, float PitchY, bool bSetZ, float YawZ);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetFadeColorAndAmount(UObject* WorldContextObject, FLinearColor InFadeColor, float InAmount, TEnumAsByte<ESQEX_ScreenFadeLayer> InLayer);
    
    UFUNCTION(BlueprintCallable)
    static void BP_ReqTresGameQuitMinigameNoMapJump(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BP_ReqTresGameQuitMinigame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_IsActorExistDirection(AActor* Actor1, TEnumAsByte<ETresdirectionType> DirType, AActor* Actor2);
    
    UFUNCTION(BlueprintCallable)
    static void BP_GotoTitle(UObject* WorldContextObject, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind);
    
    UFUNCTION(BlueprintCallable)
    static void BP_GotoMemoryArchive(UObject* WorldContextObject, TEnumAsByte<ETresMapJumpFadeKind> InFadeKind, FName ReturnMapName, FName ReturnPlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ETresGameLevelID> BP_GetGameLevel();
    
    UFUNCTION(BlueprintCallable)
    static FVector BP_GetActorSpecifiedDirectionDistanceLocation(AActor* Actor, TEnumAsByte<ETresdirectionType> DirType, float Distance);
    
    UFUNCTION(BlueprintPure)
    static bool BP_FoodstuffGetTeamPrize(UObject* WorldContextObject, FName InKeyName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_DebugSetStartMapTypeDLC(bool bReMindDLC);
    
    UFUNCTION(BlueprintPure)
    static int32 BP_ConvertIntDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    static void BP_CallFunctionByName(AActor* Actor, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_AddMunny(int32 munny);
    
    UFUNCTION(BlueprintCallable)
    static void AllPrizeCollection(UObject* WorldContextObject, ATresCharPawnBase* InPawn);
    
    UFUNCTION(BlueprintCallable)
    static void AllEndLensEffect(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AllEndCameraPositionEffect(UObject* WorldContextObject);
    
};

