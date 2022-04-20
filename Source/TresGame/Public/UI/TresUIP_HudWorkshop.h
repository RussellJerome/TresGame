// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/TresCockpitParts.h"
#include "GFxObject.h"
#include "TresUIP_HudWorkshop.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIP_HudWorkshop : public UTresCockpitParts
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconBaseL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconBaseR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconGrowL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconGrowR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconTextL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconTextR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconGrowInL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_HudWorkshop")
	class UGFxObject* m_ObjIconGrowInR;
};
