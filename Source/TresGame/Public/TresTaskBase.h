// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame_StructsAndEnums.h"
#include "TresTaskBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTaskBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTaskBase")
	TArray<class UTresTaskExecutor*> m_TaskManArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTaskBase")
	class UObject* m_pParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTaskBase")
	class AActor* m_pParentActor;

	UFUNCTION(BlueprintPure, Category = "TresTaskBase")
	bool IsSetup() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresTaskBase")
	bool IsEnable() { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresTaskBase")
	void Destroy() {};

	UFUNCTION(BlueprintCallable, Category = "TresTaskBase")
	void BPEV_PostLoadMap() {};

	UFUNCTION(BlueprintCallable, Category = "TresTaskBase")
	void BPEV_NortifyDestroy() {};

	UFUNCTION(BlueprintCallable, Category = "TresTaskBase")
	void BP_Tick(float DeltaSeconds) {};

	UFUNCTION(BlueprintCallable, Category = "TresTaskBase")
	void BP_Setup() {};

	UFUNCTION(BlueprintCallable, Category = "TresTaskBase")
	void BP_SetEnable(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresTaskBase")
	void BP_Enable() {};
};
