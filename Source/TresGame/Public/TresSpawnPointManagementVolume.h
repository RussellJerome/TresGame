// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresGame.h"
#include "TresSpawnPointManagementVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresSpawnPointManagementVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSpawnPointManagementVolume")
	bool m_WeldOuterInitial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSpawnPointManagementVolume")
	TArray<struct FTresSpawnPointSet> m_PointSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSpawnPointManagementVolume")
	TArray<class ATresSpawnPointManagementVolume*> m_InnerVolumes;

	UFUNCTION(BlueprintCallable, Category = "TresSpawnPointManagementVolume")
	void SetWeldOuter(bool WeldOuter) {};

	UFUNCTION(BlueprintPure, Category = "TresSpawnPointManagementVolume")
	bool GetWeldOuter() { return false; };
};
