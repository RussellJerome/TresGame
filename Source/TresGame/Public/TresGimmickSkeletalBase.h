// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGame.h"
#include "TresGimmickSkeletalBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGimmickSkeletalBase : public ATresGimmickActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	class UTresRootComponent* MyRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	class UTresSkeletalMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	class UTresEffectAttachComponent* MyEffectAtt;

	//struct FScriptMulticastDelegate OnAnimationStarted;
	//struct FScriptMulticastDelegate OnAnimationEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	TEnumAsByte<ETresGimmickLookAtTrackingType> m_GltTrackType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	float m_LookAtRateMultiRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	float m_LookAtParamA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	TEnumAsByte<ETresGimmickLookAtType> m_GltLookAtType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickSkeletalBase")
	TArray<class UTresAnimSet*> m_AppendAnimSetMap;

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void ReceiveNotifyProjectileAttackHitBpEvent() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void ReceiveNotifyAttackHitBpEvent() {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void ReceiveAnimNotifyStartBpEvent(const FName& AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID> EventID, int Param) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void ReceiveAnimNotifyEndBpEvent(const FName& AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID> EventID, int Param) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void ReceiveAnimationStarted(class UAnimationAsset* AnimAsset) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void ReceiveAnimationEnded(class UAnimationAsset* AnimAsset, bool bInterrupted) {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickSkeletalBase")
	class USQEX_KBD_Component* GetKBDComponent() { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void BP_NotifyTiming(int InParam) {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickSkeletalBase")
	bool BP_IsAnimEnd(const FName& InSlotName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void BP_AnimStop(const FName& InSlotName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void BP_AnimSetCurrentTime(float InTime, const FName& InSlotName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void BP_AnimPlayAnimset(const FName& InAnimName, const FName& InSlotName, float InBlendInTime, bool InLoop, int InEffectGroup, float InPlayRate, int InVoiceGroup) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickSkeletalBase")
	void BP_AnimPlayAnimAsset(class UAnimationAsset* InAsset, const FName& InSlotName, float InBlendInTime, bool InLoop, int InEffectGroup, float InPlayRate, int InVoiceGroup) {};

	UFUNCTION(BlueprintPure, Category = "TresGimmickSkeletalBase")
	float BP_AnimGetCurrentTime(const FName& InSlotName) { return 0.0f; };

	/*void _OnAnimStarted(class UAnimationAsset* InAnimAsset);
	void _OnAnimEnded(class UAnimationAsset* InAnimAsset, bool bInterrupted);*/
};
