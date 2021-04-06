// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEX_BonamikWindCollectionAsset.h"
#include "SQEX_BonamikWindPreset_Actor.generated.h"

UCLASS()
class BONAMIKRT_API ASQEX_BonamikWindPreset_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASQEX_BonamikWindPreset_Actor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_BonamikWindPreset_Actor")
	USQEX_BonamikWindCollectionAsset* m_BonamikWindCollectionAsset;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
