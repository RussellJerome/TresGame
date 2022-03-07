// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MercunaNavSeed.generated.h"

UCLASS()
class MERCUNA_API AMercunaNavSeed : public AActor
{
	GENERATED_BODY()
public:
	virtual void OnConstruction(const FTransform& Transform) override
	{
		Super::OnConstruction(Transform);

		if (!IsValid(RootComponent))
		{
			auto NewRootComponent = NewObject<USceneComponent>(this, "RootComponent");
			NewRootComponent->CreationMethod = EComponentCreationMethod::Native;
			NewRootComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
			NewRootComponent->RegisterComponent();
			RootComponent = NewRootComponent;
		}
	};
};
