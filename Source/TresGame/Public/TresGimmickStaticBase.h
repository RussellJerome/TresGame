// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickStaticBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGimmickStaticBase : public ATresGimmickActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickStaticBase")
	class UTresRootComponent* MyRoot;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickStaticBase")
	//class UTresStaticMeshComponent* MyMesh;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickStaticBase")
	//class UTresEffectAttachComponent* MyEffectAtt;

	UFUNCTION(BlueprintCallable, Category = "TresGimmickStaticBase")
	void SetCanEverAffectNavigation(bool bRelevant) {};
};
