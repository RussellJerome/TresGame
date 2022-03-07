// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresGame.h"
#include "TresBTService_BlackboardBoolValueModifierInOut.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_BlackboardBoolValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardBoolValueModifierInOut")
	TArray<FTresBlackboardBoolValueModifierInOutParam> m_InParamList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardBoolValueModifierInOut")
	TArray<FTresBlackboardBoolValueModifierInOutParam> m_OutParamList;
};
