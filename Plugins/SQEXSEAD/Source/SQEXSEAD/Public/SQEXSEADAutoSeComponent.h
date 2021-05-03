// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADAutoSeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SQEXSEAD_API USQEXSEADAutoSeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	class USQEXSEADAutoSeComponentCallback* AutoSeCallback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	class USQEXSEADAutoSeComponentSetting* SettingData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	class USQEXSEADAutoSeComponentAssetTable* AssetTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	class USQEXSEADAutoSeDetectionSetting* DetectionSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	bool bEnableClip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	bool bAlwaysMotionOnlyMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	class USkeletalMeshComponent* CachedMeshReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAutoSeComponent")
	class UPawnMovementComponent* CachedMovementComponent;
};
