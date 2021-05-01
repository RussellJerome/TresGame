// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresBluePrintObjectBase.h"
#include "TresGame.h"
#include "TresBluePrintFieldVoiceBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBluePrintFieldVoiceBase : public UTresBluePrintObjectBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBluePrintFieldVoiceBase")
	class UTresFieldVoiceCommonParam* m_pCommonParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBluePrintFieldVoiceBase")
	TEnumAsByte<ETresFieldVoiceExecuteMode> m_ExecuteMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBluePrintFieldVoiceBase")
	bool m_Infinity;

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsSameExecuter() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsSameBruePrintClass() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsPlayingVoice() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsPlaying() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsPlayAfterTime(float Time) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsOverLastExecuteSameGroupTime(float Time) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsInCenter(const FVector2D& posRate, const FVector2D& InRate) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	bool IsCinematic() { return false; };

	//UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	//static class UTresFieldVoice* GetRandomFieldVoice(TArray<class UTresFieldVoice*> targetArray) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	class ATresAIPawnBase* GetPlayer() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	float GetPlayAfterTime() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "TresBluePrintObjectBase")
	int GetExecuteNum() { return 0; };

	UFUNCTION(BlueprintCallable, Category = "TresBluePrintObjectBase")
	bool Execute() { return false; };
};
