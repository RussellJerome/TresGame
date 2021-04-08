// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame_StructsAndEnums.h"
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
	TArray<FName>                               m_CmdArray;                                               // 0x0040(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSet")
	TArray<FTresMapSetObjData>                  m_ObjArray;                                               // 0x0050(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSet")
	TArray<FTresMapSetDataArray>                m_Data;
};
