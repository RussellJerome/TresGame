// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresDirectionalVolume.generated.h"

//These Delegates may not be correct!
DECLARE_MULTICAST_DELEGATE(m_OnEnterVolume);

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresDirectionalVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	//UPROPERTY(BlueprintAssignable, Category = "TresDirectionalVolume")
	//FTresEnterVolume m_OnEnterVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_PlayerOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_Check_ActorDirrection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_X_Plus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_X_Minus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_Y_Plus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_Y_Minus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_Z_Plus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	bool m_Z_Minus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDirectionalVolume")
	TArray<class AActor*> m_InsideActors;
};
