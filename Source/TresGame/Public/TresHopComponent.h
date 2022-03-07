// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresHopComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresHopComponent : public UTresGimmickComponentBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	FVector m_AttachOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	FVector m_BaseOffset1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	FVector m_BaseOffset2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	float m_CheckRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	FColor m_LineColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bIsOrder;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	int m_OrderNumber;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	TEnumAsByte<ETresHopMotionType> m_IdleMotionType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bIsEndPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	TEnumAsByte<ETresHopMotionType> m_EndMotionType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bIsClosing;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bIsSurfing;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bIsTripping;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bIsDangle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bIsHassou;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	bool m_bDisableEffect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	TEnumAsByte<ETresHopMotionType> m_HassouMotionType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresHopComponent")
	class UParticleSystemComponent* m_pFreeRunEffect; 
};
