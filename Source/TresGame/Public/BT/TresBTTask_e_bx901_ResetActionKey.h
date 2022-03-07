// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_Action.h"
#include "TresBTTask_e_bx901_ResetActionKey.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_e_bx901_ResetActionKey : public UTresBTTask_Action
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_bx901_ResetActionKey")
	FName m_ActionKeName;
};
