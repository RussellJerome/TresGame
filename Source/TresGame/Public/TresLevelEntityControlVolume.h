// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "Misc/Guid.h"
#include "TresLevelEntityControlVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresLevelEntityControlVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	class UTresLevelEntitySequence* m_EnterSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	class UTresLevelEntitySequence* m_ExitSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	TArray<class UTresLevelEntityControlVolumeData*> m_SharedData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	class UTresLevelEntityManager* m_Manager;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	//TODO ENGINE IMPLEMENTATION REQUIRED
	//ESQEX_ObjectType m_ControlObjectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	FGuid m_BattleVolumeGUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	TWeakObjectPtr<class UObject> m_BattleOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	bool m_WarpRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	float m_DistanceBattleOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolume")
	bool m_ImmediateInvoke;
	
	
	virtual void InvokeEndOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool ImmediateInvoke) {};
	
	virtual void InvokeBeginOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool ImmediateInvoke) {};
	
};
