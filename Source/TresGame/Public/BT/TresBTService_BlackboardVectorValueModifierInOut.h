// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTService_BlackboardValueModifierInOutBase.h"
#include "TresGame.h"
#include "TresBTService_BlackboardVectorValueModifierInOut.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_BlackboardVectorValueModifierInOut : public UTresBTService_BlackboardValueModifierInOutBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifierInOut")
	TArray<FTresBlackboardVectorValueModifierInOutParam> m_InParamList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifierInOut")
	TArray<FTresBlackboardVectorValueModifierInOutParam> m_OutParamList;
};
