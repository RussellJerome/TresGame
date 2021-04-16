// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAIPawnBase.h"
#include "TresNpcPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresNpcPawnBase : public ATresAIPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSavePointActor")
	class UTresReactorComponent* MyReactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float MyJumpPowerNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_JumpRotRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_JumpSpeedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_JumpDownBlendInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_SuperSlideSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_GripHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_FriendLinkPointMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_FriendLinkPointInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	TArray<TEnumAsByte<ETresCommandKind>> m_HaveFriendLinkCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	bool m_bDispDebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	bool m_bDispDebugAnimSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	bool m_bDispDebugAnimInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	bool m_bDispDebugLineAndSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	bool m_bDispDebugSmartphoneCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class UClass* m_SlopeSlide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class UClass* m_Swimming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class UEnvQuery* m_FollowPlayerEQSQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class UClass* m_Walk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class UCapsuleComponent* MyPhysObjHitComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class UTresFriendComponent* m_pFriendMan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class AActor* m_pActionTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class AActor* m_pActionPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_fCloudIntervalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_fSneezeIntervalTime;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	//class USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	FName m_DefaultFaceEyeAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	FName m_DefaultFaceLipAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_FaceEyeBlinkMinTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	float m_FaceEyeBlinkMaxTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawnBase")
	class UAudioComponent* m_pVoiceCompo;

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool SetTargetFNPC(TEnumAsByte<ETresChrUniqueID> UniqueId, bool InTargetActor, bool InDestination) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetTalkEventName(const FName& EventName) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetRailSlideAfterWarp(class AActor* inActor) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetNpcActorExistence2(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon, bool Invincible, bool LockOn) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetNpcActorExistence(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetLeaveFNPC(bool Leave) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetEnableWarp(bool EnableWarp) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetDisableBattleModeAI(bool InDisable) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetDefaultBT() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetBodyImmovable(bool InOnOff) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool SetBBLocation(const FName& InName, const FVector& InLocation) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool SetBBActor(const FName& InName, class AActor* inActor, bool InClear) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetBattleType(TEnumAsByte<ETresNpcActionOnType> Type) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetActionTargetInfo() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetActionTargetAndPoint(class AActor* InActionTarget, class AActor* InActionPoint) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void SetActionPoint(class AActor* InActionPoint) {};

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsStateMoving() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsSituationBattle() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsSelfOnDamageFloor() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsSameTargetAsPlayer() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsPlayerRecoveryNow() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsPlayerIdlingNow() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsPlayerBeingAttackedByEnemy() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsPlayerAttackNow() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsOverlappedForce() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsLeadSub() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsLeadMoveTypeToRun() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsLeadLeaderWaiting() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsLeadGoal() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsHostileTarget() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsFriendPointMax() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsFriendLinkPointMax() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsFriend(TEnumAsByte<ETresChrUniqueID> UniqueId) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsEnableChatMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsBreakPoseNow() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsBattleType(TEnumAsByte<ETresNpcActionOnType> Type) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsBattleFollowMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsBadStatus() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool IsActionOff() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	FName GetTalkEventName() { return FName::FName(); };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	float GetFriendPoint() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	float GetActionTime() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	int GetActionOnType() { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void ClearActionTargetInfo() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void ChangeBT(class UBehaviorTree* InBehaviorTree) {};

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanSetActionPoint(int InType) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanNpcMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanLeadWait() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanLeadAvoidanceMove() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanLead() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanFriendLinkBring() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanbeSwirlUpDamageReactionByEnemy() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool CanBattle() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_StartTalkEndReTurn() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_SetTalkEndReTurnInfo(float InTime, class AActor* inActor, const FVector& InLocation) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_SetFriendLinkPointDisable(bool Disable) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool BP_SetFriendLinkCommand(TEnumAsByte<ETresCommandKind> inCommand, float InReceptionTime, bool InAuto) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_SetCinematicStateFNPC() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_NpcUseItem(class AActor* InTargetActor, TEnumAsByte<ETresCommandKind> InItemCmd) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool BP_MethdNpcMotionStop() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool BP_MethdNpcMotionPlay(int MotionLoopMax, const FName& StartName, const FName& LoopName, const FName& EndName, bool ReTurnEndAnim) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool BP_MethdAnnihilationCatch(bool InCanbeCheck) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresNpcPawnBase")
	bool BP_IsNpcMotionPlay() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_InitTalkEnd() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_GetUsableBattleItem() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	bool BP_EndAnnihilationCatch() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_DelTalkEndReTurnInfo() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawnBase")
	void BP_ClearStateFNPC(bool CinematicClear) {};
};
