// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectileSkeletalMeshBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresProjectileSkeletalMeshBase : public ATresProjectileBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileSkeletalMeshBase")
	class UTresSkeletalMeshComponent* MyMesh;

	//class UTresEffectAttachComponent* m_EffectAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileSkeletalMeshBase")
	int m_AttachEffectGroupID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileSkeletalMeshBase")
	class USQEX_ParticleAttachDataAsset* m_AttachData;
};
