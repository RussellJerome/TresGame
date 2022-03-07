// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "TresGame.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "TresSkeletalMeshComponent.generated.h"

UENUM(BlueprintType)
enum ETresIkCollision
{
	/*SPHERE = 0,
	CAPSULE = 1,
	BOX = 2,
	MAX = 3 UMETA(Hidden),*/
	ETresIkCollision_MAX = 4 UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct FTresSkeletalFootStepUnit
{
	GENERATED_BODY()
public:
	FBoneReference m_Bone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FName m_BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	int m_BoneIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	TEnumAsByte<ETresIkCollision> m_ShapeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_OffsetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FRotator m_OffsetRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_CheckDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	float m_TouchedCheckDist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_EffectScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	class UTresFootStepSet* m_FootStepSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	FVector m_FootStepSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	ETresSkeletalFootStampDir m_FootStampDir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresSkeletalFootStepUnit")
	float m_StampCheckDist;
};

USTRUCT(BlueprintType)
struct FTresAnimNode_CollTwoBoneIK : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()
public:
	/*struct FBoneReference IKBone;
	FVector EffectorLocation;
	FVector JointTargetLocation;
	FName EffectorSpaceBoneName;
	bool bTakeRotationFromEffectorSpace;
	bool bMaintainEffectorRelRot;
	bool bAllowStretching;
	FVector2D StretchLimits;
	float StartStretchRatio;
	float MaxStretchScale;
	TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
	TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
	FName JointTargetSpaceBoneName;
	bool m_bMaintainEffectorHitNormal;
	float m_MaintainEffectorLimitRot;
	float m_MaintainEffectorStartInterpTime;
	float m_MaintainEffectorEndInterpTime;
	TEnumAsByte<ETresIkCollision> CollisionShape;
	FVector CollisionOffset;
	FRotator CollisionRotation;
	FVector CollisionSize;
	float CheckMin;
	float CheckMax;
	float IkOffset;*/
};

USTRUCT(BlueprintType)
struct FTresTwoBoneLegIKDefinition
{
	GENERATED_BODY()
public:
	/*bool bUseMayaSolver;
	struct FBoneReference IKBone;
	FVector EffectorLocation;
	FVector JointTargetLocation;
	FName EffectorSpaceBoneName;
	bool bTakeRotationFromEffectorSpace;
	bool bMaintainEffectorRelRot;
	bool bAllowStretching;
	float StartStretchRatio;
	float MaxStretchScale;
	TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;
	TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;
	FName JointTargetSpaceBoneName;
	bool bAllowTwist;
	struct FAxis TwistAxis;
	bool bMaintainEffectorHitNormal;
	float MaintainEffectorLimitRotX;
	float MaintainEffectorLimitRotY;
	float MaintainEffectorLimitRotZ;
	TEnumAsByte<ETresIkCollision> CollisionShape;
	FVector CollisionOffset;
	FRotator CollisionRotation;
	FVector CollisionSize;
	float CheckMin;
	float CheckMax;
	bool ShouldMimicOtherLimbWhenNoCollision;
	TArray<struct FBoneReference> LimbsToMimicWhenNoCollision;
	float LimitTwoBoneIkInternalAngle;
	bool ReturnEffectLocatonIfCollisionNoHit;*/
};


USTRUCT(BlueprintType)
struct FTresAnimNode_TwoBoneIKMultiped : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()
public:
	/*bool bUseMayaSolver;
	struct FBoneReference HipsTransform;
	float HipsOffsetPercentage;
	float HipsRotationLimit;
	float HipsRotationResetLimit;
	bool bLimitHipsTransHeight;
	bool bExHitpsRotateDetect;
	int ExHitpsRotateDetectSampleNum;
	float ExHitpsRotateDetectRadius;
	float ExHitpsRotateDetectCheckMax;
	float ExHitpsRotateDetectCheckMin;
	TArray<struct FTresTwoBoneLegIKDefinition> IKDefs;
	TArray<struct FMaskedJointChain> MaskedJointChains;
	float MyDeltaTime;
	float RaycastCacheMaximumTranslation;
	float RaycastCacheMaximumRotation;
	int RaycastForceFrameRate;
	bool m_RaycastCacheRootDisplacement;
	bool m_KeepHighestRaycastHitInSmallRadius;
	float m_KeepHighest_XY_MaxRadius;
	float m_KeepHighest_Z_Displacement;
	float FootSmoothingVelocity;
	float TimeStartSmoothing;
	bool DrawDebug;
	struct FPDControllerScalar HipsController;*/
};

/**
 * 
 */
UCLASS(editinlinenew, meta = (BlueprintSpawnableComponent))
class TRESGAME_API UTresSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bCanbeDetectAsBodyColl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FName m_BodyCollGrpName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_BodyCollIgnoreNameNoneGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	ETresBodyCollReactionType m_BodyCollReactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bNeedSnowRenderDepthPrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FName m_SnowTailAttachName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FVector m_SnowTailAttachRelativeOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	FVector m_SnowTailAttachScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bEnableSyncAnimPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bEnableBonamikWhenOwnerHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	bool m_bEnableCollisionFootStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	int m_bDisableCollisionFootStepLOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	TArray<FTresSkeletalFootStepUnit> m_CheckFootSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UPhysicalMaterial* m_pDetectPhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UPhysicalMaterial* m_pDetectWaterPhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UPhysicalMaterial* m_pDetectInnerWaterPhysMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	struct FHitResult m_WaterSurfaceInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSkeletalMeshComponent")
	class UParticleSystemComponent* m_pSnowTailComp;

	UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	void BP_MaterialSetVectorParamAll(TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, const struct FLinearColor& InVector) {};

	UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	void BP_MaterialSetVectorParam(int InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDVectorType> InParamType, const struct FLinearColor& InVector) {};

	UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	void BP_MaterialSetScalarParamAll(TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {};

	UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	void BP_MaterialSetScalarParam(int InMaterialIndex, TEnumAsByte<ETresKHSMaterialParameterIDScalarType> InParamType, float InScalar) {};

	UFUNCTION(BlueprintCallable, Category = "TresSkeletalMeshComponent")
	int BP_GetPredictedLODLevel() { return 0;  };
};
