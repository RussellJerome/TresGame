// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Engine/EngineBaseTypes.h"
#include "KineDriver_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

UENUM(BlueprintType)
enum ESQEX_KD_InterpolateType
{
	ESQEX_KD_InterpolateType_Step = 0,
	ESQEX_KD_InterpolateType_Linear = 1,
	ESQEX_KD_InterpolateType_Spline = 2,
	ESQEX_KD_InterpolateType_MAX = 3
};

UENUM(BlueprintType)
enum ESQEX_KD_ExtrapolateType
{
	ESQEX_KD_ExtrapolateType_Constant = 0,
	ESQEX_KD_ExtrapolateType_Gradient = 1,
	ESQEX_KD_ExtrapolateType_Cycle = 2,
	ESQEX_KD_ExtrapolateType_RelativeCycle = 3,
	ESQEX_KD_ExtrapolateType_MAX = 4
};

UENUM(BlueprintType)
enum ESQEX_KD_ParameterType
{
	ESQEX_KD_ParameterType_Other = 0,
	ESQEX_KD_ParameterType_TranslateX = 1,
	ESQEX_KD_ParameterType_TranslateY = 2,
	ESQEX_KD_ParameterType_TranslateZ = 3,
	ESQEX_KD_ParameterType_Distance = 4,
	ESQEX_KD_ParameterType_RotateQuatX = 5,
	ESQEX_KD_ParameterType_RotateQuatY = 6,
	ESQEX_KD_ParameterType_RotateQuatZ = 7,
	ESQEX_KD_ParameterType_RotateQuatW = 8,
	ESQEX_KD_ParameterType_RotateAngle = 9,
	ESQEX_KD_ParameterType_BendingQuatX = 10,
	ESQEX_KD_ParameterType_BendingQuatY = 11,
	ESQEX_KD_ParameterType_BendingQuatZ = 12,
	ESQEX_KD_ParameterType_BendingQuatW = 13,
	ESQEX_KD_ParameterType_BendingAngle = 14,
	ESQEX_KD_ParameterType_BendS = 15,
	ESQEX_KD_ParameterType_BendT = 16,
	ESQEX_KD_ParameterType_Roll = 17,
	ESQEX_KD_ParameterType_QuatAngle = 18,
	ESQEX_KD_ParameterType_ScaleX = 19,
	ESQEX_KD_ParameterType_ScaleY = 20,
	ESQEX_KD_ParameterType_ScaleZ = 21,
	ESQEX_KD_ParameterType_MAX = 22
};

UENUM(BlueprintType)
enum ESQEX_KD_OperatorType
{
	ESQEX_KD_OperatorType_Unknown = 0,
	ESQEX_KD_OperatorType_ComputeSpaceBases = 1,
	ESQEX_KD_OperatorType_Source = 2,
	ESQEX_KD_OperatorType_SourceTranslate = 3,
	ESQEX_KD_OperatorType_SourceRotate = 4,
	ESQEX_KD_OperatorType_SourceOther = 5,
	ESQEX_KD_OperatorType_TargetTranslate = 6,
	ESQEX_KD_OperatorType_TargetScale = 7,
	ESQEX_KD_OperatorType_TargetRotate = 8,
	ESQEX_KD_OperatorType_TargetBendRoll = 9,
	ESQEX_KD_OperatorType_TargetBendSTRoll = 10,
	ESQEX_KD_OperatorType_TargetPoscns = 11,
	ESQEX_KD_OperatorType_TargetOricns = 12,
	ESQEX_KD_OperatorType_TargetDircns = 13,
	ESQEX_KD_OperatorType_TargetOther = 14,
	ESQEX_KD_OperatorType_ConnectEquals = 15,
	ESQEX_KD_OperatorType_ConnectLinkWith = 16,
	ESQEX_KD_OperatorType_ConnectEZParamLink = 17,
	ESQEX_KD_OperatorType_ConnectEZParamLinkLinear = 18,
	ESQEX_KD_OperatorType_MAX = 19
};

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct FSQEX_KineDriver_AssetUserDataElement
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	int KineDriverIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	TArray<class USQEX_KineDriverData*> KineDriverData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	bool EnableScaleOpChildSSC = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	TEnumAsByte<ETickingGroup> TickGroup = ETickingGroup::TG_PrePhysics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	FName ComponentTag = FName("None");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	bool EnableLOD = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	float MinScreenSize = 0.01f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	bool EnableFrustumCulling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriver_AssetUserDataElement")
	bool EnableCheckDrawn = false;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverOperatorHead
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverOperatorHead")
	int Owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverOperatorHead")
	int WorkIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverOperatorHead")
	TEnumAsByte<ESQEX_KD_OperatorType> OpType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverOperatorHead")
	int OperatorBody;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverComputeSpaceBases
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverComputeSpaceBases")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverComputeSpaceBases")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverComputeSpaceBases")
	bool IsScaleOpChild;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSource
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	int Source0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FName SourceBoneName0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	int Source1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FName SourceBoneName1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	float BlendWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FVector NeutralTranslate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FQuat NeutralRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FVector AimVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FVector UpVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSource")
	FVector CrossVector;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSourceTranslate
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceTranslate")
	TArray<int> SourceArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceTranslate")
	TArray<FName> SourceBoneNameArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceTranslate")
	TArray<float> WeightArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceTranslate")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceTranslate")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceTranslate")
	FVector NeutralTranslate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceTranslate")
	FQuat NeutralRotate;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSourceRotate
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	TArray<int> SourceArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	TArray<FName> SourceBoneNameArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	TArray<float> WeightArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	bool SegmentScaleCompensate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	FQuat NeutralRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	FVector AimVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	FVector UpVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceRotate")
	FVector CrossVector;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverSourceOther
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceOther")
	int SourceObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverSourceOther")
	FName SourceObjectBoneName;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetTranslate
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetTranslate")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetTranslate")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetTranslate")
	FVector Translate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetTranslate")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetTranslate")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetTranslate")
	FVector NeutralTranslate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetTranslate")
	FQuat NeutralRotate;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetScale
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetScale")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetScale")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetScale")
	FVector Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetScale")
	bool ClampZero;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetScale")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetScale")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetScale")
	bool SegmentScaleCompensate;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetRotate
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	int SourceQuat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	float QuatWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	bool AsQuatAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	bool SegmentScaleCompensate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetRotate")
	FQuat NeutralRotate;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetBendRoll
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	int SourceQuat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	float QuatWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	bool AsQuatAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	float Roll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	bool SegmentScaleCompensate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	FQuat NeutralRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendRoll")
	FVector AimVector;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetBendSTRoll
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	float BendS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	float BendT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	float Roll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	int BaseSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	FName BaseSpaceBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	bool SegmentScaleCompensate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	FQuat NeutralRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	FVector AimVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	FVector UpVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetBendSTRoll")
	FVector CrossVector;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetPoscns
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	bool OrientAffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	bool ScaleAffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	FVector OffsetTranslate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	TArray<int> SourceArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	TArray<FName> SourceBoneNameArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	TArray<float> WeightArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetPoscns")
	TArray<FVector> OffsetArray;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetOricns
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOricns")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOricns")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOricns")
	FQuat OffsetRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOricns")
	TArray<int> SourceArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOricns")
	TArray<FName> SourceBoneNameArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOricns")
	TArray<float> WeightArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOricns")
	TArray<FQuat> OffsetArray;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetDircns
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	int TargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FName TargetObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	int AimObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FName AimObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	int UpObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FName UpObjectBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FQuat NeutralRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FVector AimVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FVector UpVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FVector CrossVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FVector AimSrcOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	FVector UpSrcOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	bool AimTransformAffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetDircns")
	bool UpTransformAffect;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverTargetOther
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOther")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOther")
	FString SubType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOther")
	TArray<FName> ParamNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverTargetOther")
	TArray<float> Params;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEquals
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEquals")
	int InOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEquals")
	TEnumAsByte<ESQEX_KD_ParameterType> InParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEquals")
	int OutOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEquals")
	TEnumAsByte<ESQEX_KD_ParameterType> OutParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEquals")
	int OtherTargetParamIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEquals")
	float Coef;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverCurveKey
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverCurveKey")
	float X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverCurveKey")
	float Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverCurveKey")
	float LeftTanX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverCurveKey")
	float LeftTanY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverCurveKey")
	float RightTanX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverCurveKey")
	float RightTanY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverCurveKey")
	TEnumAsByte<ESQEX_KD_InterpolateType> InterpType;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectLinkWith
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectLinkWith")
	int InOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectLinkWith")
	TEnumAsByte<ESQEX_KD_ParameterType> InParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectLinkWith")
	int OutOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectLinkWith")
	TEnumAsByte<ESQEX_KD_ParameterType> OutParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectLinkWith")
	int OtherTargetParamIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectLinkWith")
	TEnumAsByte<ESQEX_KD_ExtrapolateType> ExtrapType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectLinkWith")
	TArray<struct FSQEX_KineDriverCurveKey> Keys;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEZParamLink
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	int InOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	TEnumAsByte<ESQEX_KD_ParameterType> InParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	int OutOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	TEnumAsByte<ESQEX_KD_ParameterType> OutParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	int OtherTargetParamIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PX0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float VX1_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float VX2_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float Grad0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float Grad1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PY0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PY0A;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PY0B;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PY1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PY1A;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PY1B;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	float PY2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLink")
	bool ByCoef;
};

USTRUCT(BlueprintType)
struct FSQEX_KineDriverConnectEZParamLinkLinear
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	int InOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	TEnumAsByte<ESQEX_KD_ParameterType> InParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	int OutOperator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	TEnumAsByte<ESQEX_KD_ParameterType> OutParameterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	int OtherTargetParamIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	float Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	float Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	float ClampMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	float ClampMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	bool EnableMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_KineDriverConnectEZParamLinkLinear")
	bool EnableMax;
};

USTRUCT(BlueprintType)
struct FAnimNode_SQEX_KineDriver : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAnimNode_SQEX_KineDriver")
	int KineDriverIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAnimNode_SQEX_KineDriver")
	TArray<class USQEX_KineDriverData*> KineDriverData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAnimNode_SQEX_KineDriver")
	bool EnableScaleOpChildSSC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAnimNode_SQEX_KineDriver")
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAnimNode_SQEX_KineDriver")
	bool EnableLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAnimNode_SQEX_KineDriver")
	float MinScreenSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAnimNode_SQEX_KineDriver")
	bool EnableCheckDrawn;
};