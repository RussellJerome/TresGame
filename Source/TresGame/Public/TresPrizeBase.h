// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPrizeBase.generated.h"

UCLASS()
class TRESGAME_API ATresPrizeBase : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	class USoundBase* m_SoundBound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	class USoundBase* m_SoundGet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	class UTresRootComponent* MyRoot;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	//class UTresPrizeMovementComponent* MyMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	float m_FrameRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	float m_Timer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	int m_Kind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	float m_fLivingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	bool m_bCanGetFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	bool m_bGetSeEndFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	class ATresCharPawnBase* m_pGetter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	float m_fLen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeBase")
	FVector m_vDir;

	//void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {};
};
