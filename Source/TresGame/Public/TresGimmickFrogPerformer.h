// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickFrogPerformer.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGimmickFrogPerformer : public ATresGimmickActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	class UTresSkeletalMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	bool Broken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	class USoundBase* PlaySound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	class USoundBase* PlayBrokenSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	class AActor* AttachedSoundActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	class UAnimSequence* m_PerformAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	class UAnimSequence* m_IdleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickFrogPerformer")
	class UAnimSequence* m_BrokenAnim;
	
	UFUNCTION(BlueprintCallable, Category = "TresGimmickFrogPerformer")
	void SetSpeedRate(float Rate) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickFrogPerformer")
	void SetMasterFrog(class ATresGimmickFrogPerformer* pFrog) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickFrogPerformer")
	void SetBroken(bool _Broken) {};

	UFUNCTION(BlueprintCallable, Category = "TresGimmickFrogPerformer")
	void ChangeSpeedRate(float Rate) {};
};
