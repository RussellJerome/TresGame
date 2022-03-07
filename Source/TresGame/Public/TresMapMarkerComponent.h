// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGame.h"
#include "TresMapMarkerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresMapMarkerComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapMarkerComponent")
	ETresUIMapMarkerType m_MapMarkerType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapMarkerComponent")
	TArray<FName> m_MaskMapNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapMarkerComponent")
	bool m_EnableUpdatePosition;
};
