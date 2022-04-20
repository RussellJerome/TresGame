// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharStates/TresCharState_ShopMenu.h"
#include "TresPlayerState_ShopMenu.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPlayerState_ShopMenu : public UTresCharState_ShopMenu
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_ShopMenu")
	class AActor* m_pTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerState_ShopMenu")
	class UPrimitiveComponent* m_pComponent;
};
