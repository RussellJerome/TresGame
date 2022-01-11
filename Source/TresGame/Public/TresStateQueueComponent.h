// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresStateBase.h"
#include "TresStateSet.h"
#include "TresGame.h"
#include "TresStateQueueComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresStateQueueComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	class UTresStateSet* MyStateAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	bool MyDisableAutoMainProc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	bool MyIsSetDefaultState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	TEnumAsByte<ETresStateID> MySetDefaultState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	class UClass* m_CinematicStateClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	class UTresStateBase* m_pCurrentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	TArray<class UTresStateBase*> m_StateQueue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateQueueComponent")
	TArray<class UTresStateBase*> m_RecycleState;
};
