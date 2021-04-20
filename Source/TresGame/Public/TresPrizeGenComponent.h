// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresPrizeGenComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPrizeGenComponent : public UTresGimmickComponentBase
{
	GENERATED_BODY()
public:
	//class UTresGimmickDropPrizeSet* m_PrizeDataAsset;
	//TArray<struct FTresGimmickDropPrizeTable> m_PrizeDatas;
	//struct FTresGimmickPrizeVelocityData m_PrizeVelocityData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPrizeGenComponent")
	float m_PrizeLivingTime;

	UFUNCTION(BlueprintCallable, Category = "TresPrizeGenComponent")
	void BP_SpawnPrize(int InIndex, bool InForMagicDraw) {};

	UFUNCTION(BlueprintCallable, Category = "TresPrizeGenComponent")
	void BP_SpawnFoodstuffPrize(const FName& InKeyName, bool InForMagicDraw) {};

	UFUNCTION(BlueprintPure, Category = "TresPrizeGenComponent")
	int BP_GetPrizeDataNum() { return 0; };

	//bool BP_CheckMagicAttack(const struct FTresDamageInfo& InDamageInfo) { return false; };
};
