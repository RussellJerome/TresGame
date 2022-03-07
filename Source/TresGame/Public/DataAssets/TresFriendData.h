// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresFriendData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresFriendData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendData")
	class UDataTable* m_FriendIdData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendData")
	class UDataTable* m_FriendRelationData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendData")
	class UDataTable* m_FriendHomePosData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendData")
	class UEnvQuery* WarpQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendData")
	class UEnvQuery* UnderwaterWarpQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendData")
	class UDataTable* m_FriendEvaluationData;
};
