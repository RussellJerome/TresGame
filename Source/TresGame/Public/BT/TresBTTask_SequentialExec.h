// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "Engine/DataTable.h"
#include "TresBTTask_SequentialExec.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_SequentialExec : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SequentialExec")
	TArray<FDataTableRowHandle> m_CommonDataTableRowHandle;
};
