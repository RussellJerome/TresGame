// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Shot.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_Shot : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Shot")
	FName m_ProjectileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Shot")
	int LocationIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Shot")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Shot")
	bool m_bCastEffectContinue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Shot")
	bool m_bAttachFireEffect;
};
