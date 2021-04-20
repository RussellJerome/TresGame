// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresReactorComponent.h"
#include "TresTreasureBox.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresTreasureBox : public ATresGimmickSkeletalBase
{
	GENERATED_BODY()
public:

	/*ATresTreasureBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
	{
		MyReactor = ObjectInitializer.CreateDefaultSubobject<UTresReactorComponent>(this, TEXT("ReactorComponent"));
	}*/

	ATresTreasureBox()
	{
		PrimaryActorTick.bCanEverTick = true;

		//RootComponent = Cast<USceneComponent>(GetComponentByClass(USceneComponent::StaticClass()));
#if WITH_EDITORONLY_DATA
		RootComponent = CreateEditorOnlyDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
		MyReactor = CreateEditorOnlyDefaultSubobject<UTresReactorComponent>(TEXT("MyReactor"));
#endif
	};


	/*virtual void PostInitProperties() override
	{
		Super::PostInitProperties();

		//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

		/*if (IsValid(GetOwner()))
		{
			PrimaryActorTick.bCanEverTick = true;
			RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
		}*/
	//};

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	//class UTresReactorComponent* MyReactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	class UTresReactorComponent* MyReactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	FName m_TreasureID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	bool m_bIsLargeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	FVector m_OpenerRelativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	bool m_bUseKeyitemInfoWnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	class UParticleSystem* m_PreOpenEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	FVector m_PreOpenEffLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	FRotator m_PreOpenEffRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	bool m_bIsFakeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	bool m_bIsOptionalOpenedBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	class UParticleSystem* m_DisappearEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	class ATresCharPawnBase* m_pOpenner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTreasureBox")
	class ATresTreasureBox* m_pTrueTreasureBox;

	UFUNCTION(BlueprintCallable, Category = "TresTreasureBox")
	bool OpenOptionalOpenedBox() { return false; };
};
