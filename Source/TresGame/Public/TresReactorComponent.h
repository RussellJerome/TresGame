// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresReactorComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresReactorComponent : public UTresGimmickComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	FColor m_ShapeColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	bool m_bDrawBBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	FColor m_BBoxColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	TArray<struct FTresCollShapeAssetUnit> m_CollisionShapesSrc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	bool m_bLimitRotRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	float m_RotRangeProp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	bool m_bNeedRayCheck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	TEnumAsByte<ETresReactorCommandID> m_Command;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	class AActor* m_CmdTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	bool m_bDisableTargetMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	bool m_bDisableCommandDisp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresReactorComponent")
	class UBodySetup* m_pBodySetup;

	//struct FScriptMulticastDelegate OnReactorDoCommand;
};
