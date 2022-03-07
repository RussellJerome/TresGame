// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGame.h"
#include "TresRootComponent.h"
#include "TresAdhereObjBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresAdhereObjBase : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAdhereObjBase")
	UTresRootComponent* MyRoot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAdhereObjBase")
	class ATresCharPawnBase* m_pAttachPawn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAdhereObjBase")
	class AActor* m_pCauserActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAdhereObjBase")
	class AActor* m_pCauserOwner;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAdhereObjBase")
	class UTresChrBaseParam* m_pCauserBaseParam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAdhereObjBase")
	class UTresChrDataTableSet* m_pCauserDataTableSet;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAdhereObjBase")
	struct FTresDamageInfo m_CauserDamageInfo;

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
	};
};
