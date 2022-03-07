// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresFlowComponentBase.h"
#include "TresPoleComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(OnTresStartPoleTurn);
DECLARE_MULTICAST_DELEGATE(OnTresEndPoleTurn);

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPoleComponent : public UTresFlowComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	float m_AttachRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	FVector m_BaseOffset1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	FVector m_BaseOffset2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	float m_CheckRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	bool m_bIsHorizontality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	FColor m_PoleColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	int m_OrderNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	int m_NextOrderNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	int m_PrevOrderNumber;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresProjectileBase")
	//FTresStartPoleTurn OnTresStartPoleTurn;
	
	//UPROPERTY(BlueprintAssignable, Category = "TresProjectileBase")
	//FTresEndPoleTurn OnTresEndPoleTurn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPoleComponent")
	class UParticleSystemComponent* m_pFreeRunEffect;

	UFUNCTION(BlueprintCallable, Category = "TresPoleComponent")
	void ReceiveTresStartPoleTurn() {};

	UFUNCTION(BlueprintCallable, Category = "TresPoleComponent")
	void ReceiveTresEndPoleTurn() {};
};