// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BonamikRt_StructsAndEnums.h"
#include "TresAnimNotifyState_Bonamik_ChangeGroupParams.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_Bonamik_ChangeGroupParams : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_Bonamik_ChangeGroupParams")
	TArray<struct FSQEX_BonamikChangingParameter> m_GroupParams;
};
