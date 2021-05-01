// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresGame.h"
#include "TresWarpFriendNpcVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresWarpFriendNpcVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWarpFriendNpcVolume")
	bool m_bVolumeOutEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWarpFriendNpcVolume")
	bool m_bUsedWarpPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWarpFriendNpcVolume")
	float m_DelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWarpFriendNpcVolume")
	TArray<struct FTresFriendWarpPointData> m_WarpPointData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWarpFriendNpcVolume")
	float m_IntervalTime;
};
