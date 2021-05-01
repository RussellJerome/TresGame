// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresGame.h"
#include "TresDetectMarkerComponentBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDetectMarkerComponentBase : public UTresGimmickComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	bool m_bDetectValid;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	bool m_bValidWhenOwnerVisible;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	bool m_bLimitRotRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_RotRangeProp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_RotRangePropHintRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	bool m_bLimitRollRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_RollRangeProp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_RollRangePropHintRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_ValidDistanceMin;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_ValidDistanceMax;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_ValidDistanceMaxHintRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_ValidScreenRatioMin;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_ValidScreenRatioMinHintRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	TArray<struct FTresCollShapeAssetUnit> m_CollisionShapesSrc;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	TArray<class AActor*> m_RaycastIgnoreList;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	FName m_RaycastIgnoreTag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	bool m_bRaycastIgnoreNpc;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	float m_HintFrameRatio;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	FColor m_MarkerSphereColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	bool m_bDrawLimitRotRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	FColor m_LimitRotRangeColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	FColor m_CollisionColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	TArray<FVector> m_CheckPointList;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDetectMarkerComponentBase")
	TArray<class UActorComponent*> m_ValidAreaBox;
	
	UPROPERTY()
	TArray<TWeakObjectPtr<class AActor>> m_RaycastIgnoreTagList;

	UFUNCTION(BlueprintCallable, Category = "TresDetectMarkerComponentBase")
	void SetDetectValid(bool bValid) {};
	
	UFUNCTION(Blueprintpure, Category = "TresDetectMarkerComponentBase")
	bool IsDetectValid() { return false; };
};
