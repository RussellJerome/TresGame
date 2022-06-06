#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAIPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresCommandKind.h"
#include "ETresChrUniqueID.h"
#include "ETresNpcActionOnType.h"
#include "TresNpcPawnBase.generated.h"

class UTresReactorComponent;
class UEnvQuery;
class UCapsuleComponent;
class UTresLocomotionDefinitionBase;
class UTresFriendComponent;
class AActor;
class USQEXSEADSoundReferenceEnumSet;
class UAudioComponent;
class UBehaviorTree;

UCLASS(Abstract)
class ATresNpcPawnBase : public ATresAIPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MyJumpPowerNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpRotRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_JumpDownBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_GripHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FriendLinkPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FriendLinkPointInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<ETresCommandKind>> m_HaveFriendLinkCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugAnimSet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugAnimInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugLineAndSphere: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugSmartphoneCamera: 1;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_SlopeSlide;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_Swimming;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_FollowPlayerEQSQuery;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresLocomotionDefinitionBase> m_Walk;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* MyPhysObjHitComponent;
    
    UPROPERTY(Export)
    UTresFriendComponent* m_pFriendMan;
    
    UPROPERTY()
    AActor* m_pActionTarget;
    
    UPROPERTY()
    AActor* m_pActionPoint;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCloudIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSneezeIntervalTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Damage;
    
    UPROPERTY(EditAnywhere)
    FName m_DefaultFaceEyeAnimName;
    
    UPROPERTY(EditAnywhere)
    FName m_DefaultFaceLipAnimName;
    
    UPROPERTY(EditAnywhere)
    float m_FaceEyeBlinkMinTimer;
    
    UPROPERTY(EditAnywhere)
    float m_FaceEyeBlinkMaxTimer;
    
protected:
    UPROPERTY(Export)
    UAudioComponent* m_pVoiceCompo;
    
public:
    ATresNpcPawnBase();
    UFUNCTION(BlueprintCallable)
    bool SetTargetFNPC(ETresChrUniqueID UniqueId, bool InTargetActor, bool InDestination);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkEventName(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void SetRailSlideAfterWarp(const AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcActorExistence2(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon, bool Invincible, bool LockOn);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcActorExistence(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaveFNPC(bool Leave);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWarp(bool EnableWarp);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBattleModeAI(bool InDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBT();
    
    UFUNCTION(BlueprintCallable)
    void SetBodyImmovable(bool InOnOff);
    
    UFUNCTION(BlueprintCallable)
    bool SetBBLocation(FName InName, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    bool SetBBActor(FName InName, AActor* inActor, bool InClear);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleType(TEnumAsByte<ETresNpcActionOnType> Type);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetActionTargetAndPoint(AActor* InActionTarget, AActor* InActionPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetActionPoint(AActor* InActionPoint);
    
    UFUNCTION(BlueprintPure)
    bool IsStateMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSituationBattle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSelfOnDamageFloor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSameTargetAsPlayer() const;
    
    UFUNCTION()
    bool IsPlayerRecoveryNow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerIdlingNow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerBeingAttackedByEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerAttackNow() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverlappedForce() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadSub() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadMoveTypeToRun() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadLeaderWaiting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeadGoal() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHostileTarget() const;
    
    UFUNCTION()
    bool IsFriendPointMax() const;
    
    UFUNCTION()
    bool IsFriendLinkPointMax();
    
    UFUNCTION(BlueprintPure)
    bool IsFriend(ETresChrUniqueID UniqueId);
    
    UFUNCTION(BlueprintPure)
    bool IsEnableChatMode() const;
    
    UFUNCTION()
    bool IsBreakPoseNow() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleType(TEnumAsByte<ETresNpcActionOnType> Type);
    
    UFUNCTION(BlueprintPure)
    bool IsBattleFollowMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBadStatus();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionOff();
    
    UFUNCTION(BlueprintCallable)
    FName GetTalkEventName();
    
    UFUNCTION()
    float GetFriendPoint() const;
    
    UFUNCTION(BlueprintCallable)
    float GetActionTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetActionOnType();
    
    UFUNCTION(BlueprintCallable)
    void ClearActionTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBT(UBehaviorTree* InBehaviorTree);
    
    UFUNCTION(BlueprintPure)
    bool CanSetActionPoint(int32 InType) const;
    
    UFUNCTION(BlueprintPure)
    bool CanNpcMode() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLeadWait() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLeadAvoidanceMove() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLead() const;
    
    UFUNCTION()
    bool CanFriendLinkBring();
    
    UFUNCTION(BlueprintPure)
    bool CanbeSwirlUpDamageReactionByEnemy() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBattle() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_StartTalkEndReTurn();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTalkEndReTurnInfo(float InTime, AActor* inActor, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFriendLinkPointDisable(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    bool BP_SetFriendLinkCommand(TEnumAsByte<ETresCommandKind> inCommand, float InReceptionTime, bool InAuto);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetCinematicStateFNPC();
    
    UFUNCTION(BlueprintCallable)
    void BP_NpcUseItem(AActor* InTargetActor, TEnumAsByte<ETresCommandKind> InItemCmd);
    
    UFUNCTION(BlueprintCallable)
    bool BP_MethdNpcMotionStop();
    
    UFUNCTION(BlueprintCallable)
    bool BP_MethdNpcMotionPlay(int32 MotionLoopMax, const FName StartName, const FName LoopName, const FName EndName, bool ReTurnEndAnim);
    
    UFUNCTION(BlueprintCallable)
    bool BP_MethdAnnihilationCatch(bool InCanbeCheck);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsNpcMotionPlay();
    
    UFUNCTION(BlueprintCallable)
    void BP_InitTalkEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_GetUsableBattleItem();
    
    UFUNCTION(BlueprintCallable)
    bool BP_EndAnnihilationCatch();
    
    UFUNCTION(BlueprintCallable)
    void BP_DelTalkEndReTurnInfo();
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearStateFNPC(bool CinematicClear);
    
};

