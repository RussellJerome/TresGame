// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresNpcBTDecorator_IsTargetAttrResistKind.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_IsTargetAttrResistKind : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_IsTargetAttrResistKind")
		TEnumAsByte<ETresDamageAttribute> m_Attribute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_IsTargetAttrResistKind")
		TArray<TEnumAsByte<ETresAIAttrResistKind>> m_AttrResistKinds;
	
	
};
