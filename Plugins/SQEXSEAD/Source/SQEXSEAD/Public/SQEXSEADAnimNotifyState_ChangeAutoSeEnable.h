// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADAnimNotifyState_ChangeAutoSeEnable.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAnimNotifyState_ChangeAutoSeEnable : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackCategoryVolumeFade")
	bool bEnableSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackCategoryVolumeFade")
	ESQEXSEADChangeAutoSeEnableNotifyEndBehavior NotifyEndBehavior;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackCategoryVolumeFade")
	bool bEnableContinuousDisabling;
};
