// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresMapSet.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresMapSet : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSet")
	TArray<FName> m_CmdArray;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSet")
	TArray<FTresMapSetObjData> m_ObjArray;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSet")
	TArray<FTresMapSetDataArray> m_Data;
};
