#pragma once
#include "CoreMinimal.h"
#include "TresComNpcMaterialInfo.h"
#include "TresAIPawnBase.h"
#include "TresComNpcScaleData.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_c_npc.generated.h"

class UMaterialInterface;
class AActor;
class UTresAnimSet;
class UTresReactorComponent;

UCLASS()
class ATresNpcPawn_c_npc : public ATresAIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_RecordName;
    
    UPROPERTY(EditAnywhere)
    FName m_IdleAnimName;
    
    UPROPERTY(EditAnywhere)
    FName m_ActionSeqName;
    
    UPROPERTY(EditAnywhere)
    int32 m_BodyColType;
    
    UPROPERTY(EditAnywhere)
    int32 m_PoseGroupType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_ReplaceMovePoints;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bBodyImmovable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableStagger: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bEnableBgCave: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDisableReactor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableBodyCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableNavModifier: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableLookAt: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUniqueComNpc: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bForceAddComAction: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDisableTurn: 1;
    
    UPROPERTY(EditAnywhere)
    int32 m_ReactionType;
    
    UPROPERTY(EditAnywhere)
    FName m_ReplaceMesh;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_MatData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WalkSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RunSpeed;
    
    UPROPERTY(EditAnywhere)
    FTresComNpcScaleData m_ScaleData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcMaterialInfo> m_MaterialInfos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNearCameraRange;
    
    UPROPERTY(EditAnywhere)
    FName m_LookAtBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_DefaultFaceEyeAnimName;
    
    UPROPERTY(EditAnywhere)
    FName m_DefaultFaceLipAnimName;
    
    UPROPERTY(EditAnywhere)
    float m_FaceEyeBlinkMinTimer;
    
    UPROPERTY(EditAnywhere)
    float m_FaceEyeBlinkMaxTimer;
    
    UPROPERTY(EditAnywhere)
    float m_IdleBreakMinTimer;
    
    UPROPERTY(EditAnywhere)
    float m_IdleBreakMaxTimer;
    
    UPROPERTY(EditAnywhere)
    FName m_IdleAnimNameStart;
    
    UPROPERTY(EditAnywhere)
    FName m_IdleAnimNameLoop;
    
    UPROPERTY(EditAnywhere)
    FName m_IdleAnimNameEnd;
    
    UPROPERTY(EditAnywhere)
    float m_fTurnWaitTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLookAtBlendTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinDegree;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAddYaw;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_LinkActors;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDispDebugInfo: 1;
    
protected:
    UPROPERTY(Export, Transient)
    UTresReactorComponent* MyReactor;
    
public:
    ATresNpcPawn_c_npc();
    UFUNCTION(BlueprintCallable)
    void SetSubMeshFacePlay(FName inSubMeshName, FName InLipAnimName, FName inEyeAnimName, float in_fBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowBallBody(int32 InType, bool inChatMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyImmovable(bool InOnOff);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEventComNpc(FName inEventName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLipAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange);
    
    UFUNCTION(BlueprintCallable)
    void PlayEyeAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange, bool in_bNoBlink);
    
    UFUNCTION(BlueprintPure)
    bool IsRecordName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStarMode(float in_fTime);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeActionComNpc(FName inActionName);
    
    UFUNCTION(BlueprintCallable)
    void BP_TalkTurnStart(float InReturnTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_TalkTurnDefault();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTalkMotion(FName InAnimStart, FName InAnimLoop, FName InAnimEnd);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaterial(FName InMaterialName, FName InParamName, float inValue);
    
    UFUNCTION(BlueprintCallable)
    FVector BP_SetLookTarget(AActor* inActor, FVector InLocation, float InReturnTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetIdleMotion(FName InAnimName);
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLookAt();
    
    UFUNCTION(BlueprintCallable)
    void BP_ReqEndMotion();
    
};

