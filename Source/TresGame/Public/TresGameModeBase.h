// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEX_GameMode.h"
#include "TresGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGameModeBase : public ASQEX_GameMode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameModeBase")
	class UTresGameInstance* m_pTresGameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameModeBase")
	class UTresTaskExecutor* m_pTaskExecuter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameModeBase")
	TArray<UObject*> m_pTempObjectArray;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameModeBase")
	//class UTresFieldVoiceManager* m_pFieldVoiceManager;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGameModeBase")
	//struct FTresGameModeBaseLastCleanupTickFunction m_LastCleanupTickFunction;

	UFUNCTION(BlueprintCallable, Category = "TresGameModeBase")
	static void TresRequestDestroyActor(AActor* Actor) {};
};
