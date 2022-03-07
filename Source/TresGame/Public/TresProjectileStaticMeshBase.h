// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectileStaticMeshBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresProjectileStaticMeshBase : public ATresProjectileBase
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileStaticMeshBase")
	//class UTresStaticMeshComponent* MyMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileStaticMeshBase")
	class UTresEffectAttachComponent* m_EffectAttach;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileStaticMeshBase")
	float m_fVisibleDelay;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileStaticMeshBase")
	int m_RespawnCount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileStaticMeshBase")
	TArray<class UClass*> m_ReSpawnProjectilesClassAry;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileStaticMeshBase")
	TArray<struct FTresEffectUnit> MyLifeOverEffects;
};
