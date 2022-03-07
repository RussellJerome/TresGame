// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_MercunaRaycast.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_MercunaRaycast : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_MercunaRaycast")
	TEnumAsByte<ETresDecoratorMercunaRaycast::Type> m_Dir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_MercunaRaycast")
	float m_fAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_MercunaRaycast")
	float m_fTestDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_MercunaRaycast")
	bool m_bUnuseMercunaProject;
};
