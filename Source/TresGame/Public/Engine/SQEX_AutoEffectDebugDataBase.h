// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEX_AutoEffectDebugDataBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API USQEX_AutoEffectDebugDataBase : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_AutoEffectDebugDataBase")
	FString Description;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_AutoEffectDebugDataBase")
	FString Command;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_AutoEffectDebugDataBase")
	float Timer; 
};
