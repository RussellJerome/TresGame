// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresNpcBTDecoratorBase.h"
#include "TresGame.h"
#include "TresNpcBTDecorator_IsCureInfoCommand.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_IsCureInfoCommand : public UTresNpcBTDecoratorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_IsCureInfoCommand")
	TEnumAsByte<ETresCommandKind> m_Command;
};
