#pragma once
#include "CoreMinimal.h"
#include "EDanceActorType.h"
#include "TresCharPawnBase.h"
#include "TresRaDanceSplineInterface.h"
#include "EDanceActorAction.h"
#include "PairChangeActionParam.h"
#include "TresDanceNpcActionSet.h"
#include "ETresRaDanceAreaType.h"
#include "EDancePerformType.h"
#include "TresRaDanceNpc.generated.h"

class ATresRaPairDancePawn;
class UMaterialInterface;
class ATresRaFestivalDanceManager;
class ATresPlayerControllerBase;
class UTresPlayerState_FestivalDance;

UCLASS()
class ATresRaDanceNpc : public ATresCharPawnBase, public ITresRaDanceSplineInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnDancePerformanceSuccess);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDanceActorType ActorType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StandByGroupID;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Idle_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Idle_MotionName2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 IdleLoop_FourBeatCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Invite1_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Success1_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Invite2_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Success2_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Reaction_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RapunzelSpin_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RapunzelStep_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PairDance_MotionChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPairChangeActionParam> PairDance_ChangeActionDef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> PairDance_ChangeActionIndexList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PerformanceZoneDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetLockZoneDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SuccessBeatCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PairDanceBeatCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EDanceActorAction> ActionList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresDanceNpcActionSet> ActionSetList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPawnMotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpinSuccessRotTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSuccessRotTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SafeDistanceFromWall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClapHandsDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClapHandsApproachTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairDanceChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairDanceChangeWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairOutDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairOutDegree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PairOutInTurnStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxPairInDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StandByIdle_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresRaDanceAreaType DefaultSplineMoveMode;
    
    UPROPERTY(EditAnywhere)
    int32 TargetMarkerEffectID_Spin;
    
    UPROPERTY(EditAnywhere)
    int32 TargetMarkerEffectID_Step;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDancePerformanceSuccess OnDancePerformanceSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnDancePerformanceSuccess OnChainSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_ReplaceMesh;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_MatData;
    
private:
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
    UPROPERTY()
    ATresRaPairDancePawn* m_pDancePawn;
    
    UPROPERTY()
    UMaterialInterface* m_ReplaceMatData;
    
    UPROPERTY()
    ATresPlayerControllerBase* m_pPC;
    
public:
    ATresRaDanceNpc();
    UFUNCTION()
    bool OnPlayerPerformed(UTresPlayerState_FestivalDance* InPlayerState, EDancePerformType perform, int32 performLevel);
    
protected:
    UFUNCTION()
    void OnDanceRhythmBeatNear();
    
    UFUNCTION()
    void OnDanceRhythmBeat();
    
    
    // Fix for true pure virtual functions not being implemented
};

