// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresShopActor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresShopActor : public ATresGimmickSkeletalBase
{
	GENERATED_BODY()
public:
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActor")
	class UTresReactorComponent* MyReactor;*/

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActor")
	class UTresMapMarkerComponent* MyMapMarker;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActor")
	class UTresBodyCollComponent* MyBodyColl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActor")
	TEnumAsByte<ETresShopID> m_ShopID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActor")
	TEnumAsByte<ETresShopChrID> m_ShopChrID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShopActor")
	FName m_DefaultIdlingMotName;

	/*void OnChangeShopActorDispType(ETresSavePointDispType InDispType);
	void OnChangePlayerArtsMode(bool bIsArtsMode);
	void OnChangeCinematicMode(bool bIsCinematicMode);
	void OnChangeBattleMode(bool bIsBattleMode);*/
};
