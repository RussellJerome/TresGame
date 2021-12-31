// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEX_DynamicBindAssetUserData.h"
#include "TresAnimNotifyState_KBDApplyKBDAssetElement.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_KBDApplyKBDAssetElement : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	FName TargetElementNameForBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	bool m_bIsResetForBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	bool m_bIsResetPoseForBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	int m_PreRollForBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	class USQEX_DynamicBindAssetUserData* m_KBDAssetUserDataForBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	bool m_KeepReferencesForBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	FName TargetElementNameForEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	bool m_bIsResetForEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	bool m_bIsResetPoseForEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	int m_PreRollForEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	class USQEX_DynamicBindAssetUserData* m_KBDAssetUserDataForEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_KBDApplyKBDAssetElement")
	bool m_KeepReferencesForEnd;
};
