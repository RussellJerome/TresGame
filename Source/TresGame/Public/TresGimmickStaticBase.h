// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresRootComponent.h"
#include "TresStaticMeshComponent.h"
#include "TresEffectAttachComponent.h"
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
	UTresRootComponent* MyRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickStaticBase")
	UTresStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickStaticBase")
	UTresEffectAttachComponent* MyEffectAtt;

	UFUNCTION(BlueprintCallable, Category = "TresGimmickStaticBase")
	void SetCanEverAffectNavigation(bool bRelevant) {};

	virtual void OnConstruction(const FTransform& Transform) override
	{
		Super::OnConstruction(Transform);

		if (!IsValid(MyRoot))
		{
			MyRoot = NewObject<UTresRootComponent>(this);
			MyRoot->CreationMethod = EComponentCreationMethod::Native;
			MyRoot->RegisterComponent();
			RootComponent = MyRoot;
		}
		if (!IsValid(MyMesh))
		{
			MyMesh = NewObject<UTresStaticMeshComponent>(this);
			MyMesh->CreationMethod = EComponentCreationMethod::Native;
			MyMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
			MyMesh->RegisterComponent();
		}
		if (!IsValid(MyEffectAtt))
		{
			MyEffectAtt = NewObject<UTresEffectAttachComponent>(this);
			MyEffectAtt->CreationMethod = EComponentCreationMethod::Native;
			MyEffectAtt->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
			MyEffectAtt->RegisterComponent();
		}
	};
};
