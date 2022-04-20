// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresUICommandInfoBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresUICommandInfoBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUICommandInfoBase")
	class AActor* m_Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUICommandInfoBase")
	class UPrimitiveComponent* m_Component;
};
