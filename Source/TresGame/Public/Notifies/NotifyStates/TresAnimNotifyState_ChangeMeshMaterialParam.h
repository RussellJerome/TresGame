// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresGame.h"
#include "TresAnimNotifyState_ChangeMeshMaterialParam.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_ChangeMeshMaterialParam : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_ChangeMeshMa")
	TArray<struct FTresChangeMeshMaterialParamData> m_Params;
};
