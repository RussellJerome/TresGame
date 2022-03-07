// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Kismet/GameplayStatics.h"
#include "MercunaNavOctree.h"
#include "MercunaNavVolume.generated.h"

/**
 * 
 */
UCLASS()
class MERCUNA_API AMercunaNavVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY()
	AMercunaNavOctree* NavOctree;

	virtual void OnConstruction(const FTransform& Transform) override
	{
		Super::OnConstruction(Transform);

		if (!IsValid(NavOctree))
		{
			if (UWorld* World = GetWorld())
			{
				TArray<AActor*> ActorsToFind;
				UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMercunaNavOctree::StaticClass(), ActorsToFind);
				if (ActorsToFind.Num() > 0)
				{
					for (AActor* MercunaNavOctreeActor : ActorsToFind)
					{
						NavOctree = Cast<AMercunaNavOctree>(MercunaNavOctreeActor);

					}
				}
				else
				{
					FActorSpawnParameters SpawnInfo;
					SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
					NavOctree = GetWorld()->SpawnActor<AMercunaNavOctree>(SpawnInfo);
				}
			}
		}
	};
};
