// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresComNpcVoiceSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresComNpcVoiceSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcVoiceSet")
	TArray<struct FTresComNpcVoiceSetDatas> m_Datas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcVoiceSet")
	TArray<struct FTresComNpcRandomVoiceDatas> m_StaggerDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcVoiceSet")
	TArray<struct FTresComNpcRandomVoiceDatas> m_SpecialPerformDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcVoiceSet")
	TArray<struct FTresComNpcRandomVoiceDatas> m_GreetDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcVoiceSet")
	TArray<struct FTresComNpcRandomFieldVoiceDatas> m_HeroActionDatas;
};
