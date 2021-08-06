// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGumiShipPawnBase.h"
#include "TresGumiShipCharaPawnBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGumiShipCharaPawnBase : public ATresGumiShipPawnBase
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate m_OnChangeHpDispather;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	class USceneComponent* m_pCameraBasePoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	class USceneComponent* m_pMeshBasePoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	class UTresSkeletalMeshComponent* m_pSkeletalMesh;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	//class UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	//class UTresGumiShipAtkCollisionSetCompo* m_pAtkComllision;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	//class UTresGumiShipWeaponSequence* m_pWeaponSequence;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	//class UTresEffectAttachComponent* m_pEffectAttach;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	//TArray<class UTresInterpGroup*> m_InterpGroup;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipCharaPawnBase")
	//TArray<class UTresInterpGroupInst*> m_InterpGroupInst;

	/*void TresGumiShipDefeated__DelegateSignature(class AActor* pTarget);
	void TresGumiShipDead__DelegateSignature();
	void TresGumiShipChangeHp__DelegateSignature(int dOldHp, int dNewHp, float fRatio);
	void TresGumiShipCauseDamage__DelegateSignature(class AActor* pTarget, float fDamage);*/

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	void SetVisibility(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	void SetMeshFadeRate(float fFadeRate, bool bCheckVisibility) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	void SetInvincible(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	void SetEnableReaction(bool bIn) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	int SetEffectGroupID(int GroupID) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	void SetBodyCollisionEnable(bool bIn, bool bForce) {};

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	bool IsInvincible() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	bool IsDead() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	bool IsCinematicMode() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	FHitResult GetLastHitResult() { return FHitResult::FHitResult(); };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	float GetHPRatio() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	int GetHPMax() { return 0; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	int GetHP() { return 0; };


	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	bool BP_IsAnimEnd(const FName& SlotName) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresGumiShipCharaPawnBase")
	float BP_GetAnimCurrentTime(const FName& SlotName) { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	void BP_AnimStop(float fBlendOut, const FName& SlotName) {};

	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCharaPawnBase")
	float BP_AnimPlay(const FName& AnimName, bool bIsLoop) { return 0.0f; };


	/*void _ReceiveTakeReaction(ETresGumiShipReactionType eReactionType, const struct FVector& rvImpactNormal);
	void _ReceiveTakeDamage(class AActor* pDamageCauser, class UPrimitiveComponent* pHitComponent, float fDamagePoint);
	void _ReceiveTakeBadState(ETresGumiShipBadStateType eBadStateType);
	void _ReceivePreTakeDamage(class AActor* pDamageCauser, class UPrimitiveComponent* pHitComponent, float fDamagePoint);
	void _ReceivePreDead();
	void _ReceiveDead();
	void _ReceiveChangeHp(int dOldHp, int dNewHp, float fRatio);
	void _OnHitComponent(class UPrimitiveComponent* pHitComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, const struct FVector& vNormalImpulse, const struct FHitResult& rHit);
	void _OnBeginOverlapComponent(class UPrimitiveComponent* pOverlappedComponent, class AActor* pOtherActor, class UPrimitiveComponent* pOtherComp, int dOtherBodyIndex, bool bFromSweep, const struct FHitResult& rSweepResult);*/
};
