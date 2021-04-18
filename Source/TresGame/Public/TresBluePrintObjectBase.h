// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresBluePrintObjectBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBluePrintObjectBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBluePrintObjectBase")
	FName m_UserName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBluePrintObjectBase")
	bool m_InitAfterExecute;

	UFUNCTION(BlueprintCallable, Category = "TresBluePrintObjectBase")
	void Tick(float Delta) {};

	UFUNCTION(BlueprintCallable, Category = "TresBluePrintObjectBase")
	void InitBluePrint() {};

	UFUNCTION(BlueprintCallable, Category = "TresBluePrintObjectBase")
	void Init() {};

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	FName GetUserName() { return FName::FName(); };

	UFUNCTION(BlueprintCallable, Category = "TresBluePrintObjectBase")
	void BeginPlayBluePrint() {};
};
