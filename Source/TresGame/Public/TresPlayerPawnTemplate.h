// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresPlayerPawnTemplate.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPlayerPawnTemplate : public ATresPlayerPawnBase
{
	GENERATED_BODY()
public:
	//class UTresPlayerAttackStateDataSet* m_pAttackStateDataSet;
	//TArray<struct FVoiceAndLipParameter> m_VoiceAndLipParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnTemplate")
	FName m_StrongAddMotionNameForFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnTemplate")
	FName m_StrongAddMotionNameForBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnTemplate")
	FName m_StrongAddMotionSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerPawnTemplate")
	float m_fAddReactionCoolDownTime;

	/*void _OnDtorStateForBind(TEnumAsByte<ETresStateID> eStateID);
	void _OnCtorStateForBind(TEnumAsByte<ETresStateID> eStateID);*/
};
