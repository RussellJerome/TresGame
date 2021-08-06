// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAIPawnBase.h"
#include "TresNpcPawn_c_npc.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresNpcPawn_c_npc : public ATresAIPawnBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_RecordName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_IdleAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_ActionSeqName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	int m_BodyColType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	int m_PoseGroupType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	TArray<FName> m_ReplaceMovePoints;

	/*unsigned char m_bBodyImmovable : 1;
	unsigned char m_bDisableStagger : 1;
	unsigned char m_bEnableBgCave : 1;
	unsigned char m_bDisableReactor : 1;
	unsigned char m_bDisableBodyCollision : 1;
	unsigned char m_bDisableNavModifier : 1;
	unsigned char m_bDisableLookAt : 1;
	unsigned char m_bUniqueComNpc : 1;
	unsigned char m_bForceAddComAction : 1;
	unsigned char m_bDisableTurn : 1;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	int m_ReactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_ReplaceMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	class UMaterialInterface* m_MatData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_RunSpeed;

	//struct FTresComNpcScaleData m_ScaleData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	TArray<class UTresAnimSet*> m_ReplaceAnimSets;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	//TArray<struct FTresComNpcMaterialInfo> m_MaterialInfos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_fNearCameraRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_LookAtBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_DefaultFaceEyeAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_DefaultFaceLipAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_FaceEyeBlinkMinTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_FaceEyeBlinkMaxTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_IdleBreakMinTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_IdleBreakMaxTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_IdleAnimNameStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_IdleAnimNameLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	FName m_IdleAnimNameEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_fTurnWaitTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_fLookAtBlendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_fMinDegree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	float m_fAddYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	TArray<FName> m_LinkActors;

	//unsigned char m_bDispDebugInfo : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcPawn_c_npc")
	class UTresReactorComponent* MyReactor;

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void SetSubMeshFacePlay(const FName& inSubMeshName, const FName& InLipAnimName, const FName& inEyeAnimName, float in_fBlendTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void SetSnowBallBody(int InType, bool inChatMode) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void SetBodyImmovable(bool InOnOff) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	bool RemoteEventComNpc(const FName& inEventName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void PlayLipAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void PlayEyeAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange, bool in_bNoBlink) {};

	UFUNCTION(BlueprintPure, Category = "TresNpcPawn_c_npc")
	bool IsRecordName(const FName& InName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void ChangeStarMode(float in_fTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	bool ChangeActionComNpc(const FName& inActionName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void BP_TalkTurnStart(float InReturnTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void BP_TalkTurnDefault() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void BP_SetTalkMotion(const FName& InAnimStart, const FName& InAnimLoop, const FName& InAnimEnd) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void BP_SetMaterial(const FName& InMaterialName, const FName& InParamName, float inValue) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	FVector BP_SetLookTarget(class AActor* inActor, const FVector& InLocation, float InReturnTime) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void BP_SetIdleMotion(const FName& InAnimName) {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void BP_ResetLookAt() {};

	UFUNCTION(BlueprintCallable, Category = "TresNpcPawn_c_npc")
	void BP_ReqEndMotion() {};
};
