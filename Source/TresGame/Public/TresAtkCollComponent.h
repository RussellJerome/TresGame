// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGame_StructsAndEnums.h"
#include "TresAtkCollComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAtkCollComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	TArray<class AActor*> m_IgnoreActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	class UTresChrBaseParam* m_pOwnerBaseParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	class UTresChrDataTableSet* m_pOwnerDataTableSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	TArray<FTresAtkCollShapeAssetUnit> CollisionShapesSrc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	TArray<FTresAtkColHitEffect> m_HitEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	float m_fHitEffectRandomOffsetRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	TArray<FTresAtkCollAutoActivate> m_CollAutoActivate;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	//TArray<class UTresAtkCollPrimitive*> m_AtkColls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAtkCollComponent")
	class ATresAtkCollManager* m_Mgr;
};
