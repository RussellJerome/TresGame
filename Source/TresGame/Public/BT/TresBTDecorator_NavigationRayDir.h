// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_NavigationRayDir.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_NavigationRayDir : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_NavigationRayDir")
	class UClass* FilterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_NavigationRayDir")
	TEnumAsByte<ETresDecoratorNavigationRayDir::Type> m_Dir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_NavigationRayDir")
	float m_fAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_NavigationRayDir")
	float m_fTestDepth;
};
