// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KineDriver_StructsAndEnums.h"
#include "SQEX_KineDriverData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class KINEDRIVERRT_API USQEX_KineDriverData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	class USkeleton* Skeleton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	int WorkNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<int> PreComputeObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<FName> PreComputeObjectBoneNameArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<int> ComputedObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<FName> ComputedObjectBoneNameArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverOperatorHead> Operators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverComputeSpaceBases> ComputeSpaceBasesBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverSource> SourceBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverSourceTranslate> SourceTranslateBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverSourceRotate> SourceRotateBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverSourceOther> SourceOtherBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetTranslate> TargetTranslateBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetScale> TargetScaleBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetRotate> TargetRotateBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetBendRoll> TargetBendRollBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetBendSTRoll> TargetBendSTRollBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetPoscns> TargetPoscnsBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetOricns> TargetOricnsBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetDircns> TargetDircnsBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverTargetOther> TargetOtherBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverConnectEquals> ConnectEqualsBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverConnectLinkWith> ConnectLinkWithBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverConnectEZParamLink> ConnectEZParamLinkBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX")
	TArray<struct FSQEX_KineDriverConnectEZParamLinkLinear> ConnectEZParamLinkLinearBody;
};
