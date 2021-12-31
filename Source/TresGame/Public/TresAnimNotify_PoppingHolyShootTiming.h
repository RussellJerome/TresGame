// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAnimNotify_GenericTiming.h"
#include "TresGame.h"
#include "TresAnimNotify_PoppingHolyShootTiming.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_PoppingHolyShootTiming : public UTresAnimNotify_GenericTiming
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PoppingHolyShootTiming")
	struct FTresPoppingHolyBulletShootParameter m_HolyBulletShootParameter;
};
