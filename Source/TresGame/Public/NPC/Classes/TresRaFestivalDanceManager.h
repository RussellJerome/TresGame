#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EDanceActorType.h"
#include "EDancePerformType.h"
#include "DancePlayerAction.h"
#include "UObject/NoExportTypes.h"
#include "ETresUIHudDanceResult.h"
#include "TresDanceEffectColorParam.h"
#include "TresRaFestivalReplaceMesh.h"
#include "EDanceClapMissionType.h"
#include "SpecialMoveMissionParam.h"
#include "EDanceSpecialPerformType.h"
#include "Engine/LatentActionManager.h"
#include "TresRaFestivalDanceManager.generated.h"

class UObject;
class ATresCharPawnBase;
class UUserWidget;
class ATresRaPairDancePawn;
class USQEX_ParticleAttachDataAsset;
class AFestivalDancePawn_n_ra203;
class UMaterialParameterCollection;
class ATresRaDanceNpc;
class UParticleSystem;
class USoundBase;
class UTresRaFestivalDanceSplineComponent;
class ATresRaSpecialPerformActor;
class AFestivalDancePawn_n_ra201;
class USQEXSEADBGMSlotController;
class UTresTimerTask;
class UTresPlayerState_FestivalDance;

UCLASS()
class ATresRaFestivalDanceManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresOnWaveClearPerformEnd, int32, waveIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnDanceRhythmBeat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FTresOnDanceCameraPerform, ATresCharPawnBase*, InTargetChara, EDanceActorType, InPartnerType, int32, InChainCount, int32, InActionLevel, EDancePerformType, InPerformType);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerRotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Idle_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Idle_MotionName2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 IdleLoop_FourBeatCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDancePlayerAction Action_Spin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDancePlayerAction Action_Step;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetAreaRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Finish_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FinishFirstHalf_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SafeDistanceFromWall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairDance_Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairDance_SpeedInChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairDance_RotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionIn_Female;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionLoop_Female;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionOut_Female;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_Change;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_ChangeFailed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairDance_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PairDance_ExtraPerformCountMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PairDanceFourBeatCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExtraValidTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ScoreMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ChainCountMax;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> DanceUIBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRaPairDancePawn> PairDancePawnBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> SpecialMoveUIBP;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 SpecialMove_OrderReverse: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D SpecialMoveUI_ScreenPosition;
    
    UPROPERTY(EditDefaultsOnly)
    float SpecialMoveUI_IconInterval;
    
    UPROPERTY(EditAnywhere)
    int32 InputAcceptInterval;
    
    UPROPERTY(EditAnywhere)
    float InputAcceptRange;
    
    UPROPERTY(EditAnywhere)
    uint8 Flag_UseTimingBasePerform: 1;
    
    UPROPERTY(EditAnywhere)
    float InputAcceptRangeLv1;
    
    UPROPERTY(EditAnywhere)
    float InputAcceptRangeLv2;
    
    UPROPERTY(EditAnywhere)
    float InputAcceptRangeLv3;
    
    UPROPERTY(EditAnywhere)
    USQEX_ParticleAttachDataAsset* EffectDataAsset;
    
    UPROPERTY(EditAnywhere)
    int32 TargetMarkerEffectGroupID;
    
    UPROPERTY(EditAnywhere)
    int32 PairDanceEffectGroupID;
    
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* EffectMPC;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresDanceEffectColorParam> EffectColor_Spin;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresDanceEffectColorParam> EffectColor_Step;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresDanceEffectColorParam> EffectColor_Clap;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresDanceEffectColorParam> EffectColor_ClapSuccess;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraDistance_Normal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraDistance_Pair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraPitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraDistance_LerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Camera_ValidActionLevel;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraTargetChangeFlag_Male: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraTargetChangeFlag_Female: 1;
    
    UPROPERTY(EditAnywhere)
    int32 RapunzelDanceStartNum;
    
    UPROPERTY(EditAnywhere)
    int32 RapunzelDanceMaxNum;
    
    UPROPERTY(EditAnywhere)
    int32 RapunzelDanceMaxNumFirstTime;
    
    UPROPERTY(EditAnywhere)
    int32 RapunzelDanceAddNpcInterval;
    
    UPROPERTY(EditAnywhere)
    float RapunzelDanceTotalTime;
    
    UPROPERTY(EditAnywhere)
    float RapunzelDanceMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RapunzelDanceSuccessEffectGroupID;
    
    UPROPERTY(EditAnywhere)
    float FlynnSplineStayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RapunzelMarkerTotalBeatCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RapunzelMarkerUpdateStartCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float RapunzelMarkerSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RapunzelMarkerScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RapunzelCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RapunzelCameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RapunzelCameraPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RapunzelCameraPitchStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RapunzelCameraRotSpeed;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRaFestivalReplaceMesh> m_ReplaceMeshs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TensionUpDistance_PerformNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TensionUpDistance_PerformGreat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TensionUpEffectGroupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NpcPauseCheckRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NpcPauseDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NpcPauseTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NpcTakeDistanceTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ClapSpotSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    int32 ClapSpotCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClapSpotMinInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClapSpotShowTimeInterval;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float ClapSpotOffsetSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EDanceClapMissionType> ClapSpotMissionList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* TestEffect_ClapSpotEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClapSpotEffectScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ClapSuccessEffectGroupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_Success;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_ChangeSuccess;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_OutIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_Failed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* RapunzelDanceSE_Success;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* RapunzelDanceSE_Failed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* RapunzelDanceSE_Start;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* RapunzelDanceSE_Finish;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* ClapSE_Normal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* ClapSE_Spot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_NpcReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_Count;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_CountStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SE_Finish;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmSection_Wave1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmSection_Center1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmSection_Event1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmSection_Wave2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmSection_Center2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmSection_Event2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmSection_RevisitResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BgmEventSection_ChangeCount;
    
    UPROPERTY(EditAnywhere)
    uint8 DebugFlag_UseCustomRate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 DebugFlag_DebugDraw: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 DebugFlag_DebugDrawSpline: 1;
    
    UPROPERTY(EditAnywhere)
    float Debug_CustomRate;
    
    UPROPERTY(EditAnywhere)
    float Debug_CollisionAdjustDistance;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceRhythmBeat OnDanceRhythmBeat;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceRhythmBeat OnDanceRhythmTwoBeat;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceRhythmBeat OnDanceRhythmFourBeat;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceRhythmBeat OnDanceRhythmFourBeatNear;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceRhythmBeat OnDanceRhythmInputStart;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceRhythmBeat OnDanceRhythmInputCenter;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceCameraPerform OnPerformSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceCameraPerform OnPairDanceJoinStart;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceCameraPerform OnPairDanceMoveStart;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceCameraPerform OnPairDanceEnd;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceCameraPerform OnPairChangeSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDanceCameraPerform OnPairChangeFailed;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnWaveClearPerformEnd OnWaveClearPerformEnd;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRaFestivalDanceSplineComponent* MySplineMover;
    
    UPROPERTY()
    TArray<ATresRaDanceNpc*> m_NpcList;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresRaDanceNpc>> m_NormalDanceNpcList;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresRaDanceNpc>> m_RapunzelDanceNpcList;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresRaDanceNpc>> m_StandByNpcList;
    
    UPROPERTY()
    TArray<ATresRaSpecialPerformActor*> m_SpecialPerformActorList;
    
    UPROPERTY()
    AFestivalDancePawn_n_ra201* m_pRapunzel;
    
    UPROPERTY()
    AFestivalDancePawn_n_ra203* m_pFlynn;
    
    UPROPERTY()
    TWeakObjectPtr<ATresRaDanceNpc> m_pTargetNpc;
    
    UPROPERTY()
    TWeakObjectPtr<ATresRaDanceNpc> m_pPartnerNpc;
    
    UPROPERTY(Export)
    UUserWidget* m_DanceUI;
    
    UPROPERTY(Export)
    UUserWidget* m_SpecialMoveUI;
    
    UPROPERTY()
    TWeakObjectPtr<USQEXSEADBGMSlotController> m_pBgmSlot;
    
public:
    ATresRaFestivalDanceManager();
    UFUNCTION(BlueprintCallable)
    void UpdateResult(int32 totalScore, int32 nGauge, int32 nGaugeMax);
    
    UFUNCTION(BlueprintCallable)
    void StartSpecialMove(TArray<FSpecialMoveMissionParam> MissionList, bool InOrder, float TotalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWaveClear(int32 waveIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimingBasePerformEnable(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialPerformReady(EDanceSpecialPerformType InPerformType);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialPerformEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelMissionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceStart();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceReady();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceFinishReady();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceEnd(bool bCommandFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetPairDanceSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetPairDanceRotateSpeed(float RotateSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetPairDanceFourBeatCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcActionSetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetHudLeftScore(int32 nScore);
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceNotifyFinish();
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceGauge(int32 nGauge, int32 nGaugeMax);
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceCountDown(int32 count);
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceAddedTime(float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraValidTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraPerformCountMax(int32 InCountMax);
    
    UFUNCTION(BlueprintCallable)
    void SetDanceSuspend();
    
    UFUNCTION(BlueprintCallable)
    void SetDanceStart(bool bRevisit, int32 nScoreRecord, int32 nChainRecord, int32 nStartWave);
    
    UFUNCTION(BlueprintCallable)
    void SetDanceResume();
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    void SetDanceResultMode(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDancePlayerStart();
    
    UFUNCTION(BlueprintCallable)
    void SetDanceEnd();
    
    UFUNCTION(BlueprintCallable)
    void ResetSpecialMove(bool IsTimeReset);
    
    UFUNCTION(BlueprintCallable)
    void ResetPairDanceSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetPairDanceRotateSpeed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveWaveClearPerformEnd(int32 waveIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTensionUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSpecialPerformStart(FName ActorName, ATresRaSpecialPerformActor* inActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSpecialPerformEnd(FName ActorName, ATresRaSpecialPerformActor* inActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSpecialMoveSucceed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRapunzelMissionUpdate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRapunzelInput(bool bIsSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRapunzelDanceStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRapunzelDanceOpeningStart(bool bIsWave2);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRapunzelDanceFinish(bool bCommandFinish);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRapunzelDanceEndingStart(bool bIsWave2);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerInput(bool bIsSuccess, bool bInPairDance, int32 tensionLevel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDebugTimerStop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDebugTimerResume();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveClapAction(bool bInClapSpot, int32 ComboCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveChainSucceed(int32 currentChainCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveChainFailed(int32 currentChainCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveChainEnd(int32 currentChainCount);
    
    UFUNCTION(BlueprintCallable)
    void OpenRevisitTimerCountDown(UTresTimerTask* pTask, float fStartTime, float fWarningTime, float fAlertTime);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    void OpenHudDanceResult(UObject* WorldContextObject, int32 nScore, int32 nChain, ETresUIHudDanceResult rankKind, FLatentActionInfo LatentInfo);
    
    UFUNCTION()
    void OnSpecialPerformStart(FName ActorName, ATresRaSpecialPerformActor* pActor);
    
    UFUNCTION()
    void OnSpecialPerformEnd(FName ActorName, ATresRaSpecialPerformActor* pActor);
    
    UFUNCTION()
    void OnPlayerPerformEnd(UTresPlayerState_FestivalDance* InPlayerState);
    
    UFUNCTION()
    void OnPlayerButtonInput(UTresPlayerState_FestivalDance* InPlayerState, EDancePerformType perform, int32 performLv);
    
    UFUNCTION(BlueprintPure)
    int32 GetPairDanceFourBeatCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHighestChainCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetExtraPerformCountMax() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentChainCount() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSpecialMove();
    
    UFUNCTION(BlueprintCallable)
    void CloseHudDanceResult();
    
    UFUNCTION(BlueprintCallable)
    void ActivateStandByNpc(int32 InGroupID);
    
};

