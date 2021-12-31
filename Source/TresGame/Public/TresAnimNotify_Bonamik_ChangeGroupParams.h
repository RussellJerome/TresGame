// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BonamikRt_StructsAndEnums.h"
#include "TresAnimNotify_Bonamik_ChangeGroupParams.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_Bonamik_ChangeGroupParams : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_ChangeGroupParams")
	TArray<struct FSQEX_BonamikChangingParameter> m_GroupParams;
};
