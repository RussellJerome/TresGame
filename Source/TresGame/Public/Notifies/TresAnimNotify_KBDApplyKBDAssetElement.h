// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEX_DynamicBindAssetUserData.h"
#include "TresAnimNotify_KBDApplyKBDAssetElement.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_KBDApplyKBDAssetElement : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_KBDApplyKBDAssetElement")
	FName TargetElementName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_KBDApplyKBDAssetElement")
	bool m_bIsReset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_KBDApplyKBDAssetElement")
	bool m_bIsResetPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_KBDApplyKBDAssetElement")
	int m_PreRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_KBDApplyKBDAssetElement")
	class USQEX_DynamicBindAssetUserData* m_KBDAssetUserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_KBDApplyKBDAssetElement")
	bool m_KeepReferences;
};
