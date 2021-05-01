// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BonamikRt_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

UENUM(BlueprintType)
enum ESHAPEMATCHING_MODE
{
	ESQEX_Bonamik_SMMODE_CHAINSHAPEMATCH = 0 UMETA(DisplayName = "Chain Shape Match"),
	ESQEX_Bonamik_SMMODE_SEQCHAINMATCH = 1 UMETA(DisplayName = "SEQ Chain Match"),
	ESQEX_Bonamik_SMMODE_VOLUMEMATCH = 2 UMETA(DisplayName = "Volume Match"),
	ESQEX_Bonamik_SMMODE_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_FastMotionHandling
{
	ESQEX_Bonamik_FMH_NONE = 0 UMETA(DisplayName = "None"),
	ESQEX_Bonamik_FMH_LOCAL_FORCE = 1 UMETA(DisplayName = "Local Force"),
	ESQEX_Bonamik_FMH_LSS = 2 UMETA(DisplayName = "LSS"),
	ESQEX_Bonamik_FMH_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_JointLinkSimulationMode
{
	ESQEX_Bonamik_JOINTLINK_MODE_SEQ = 0 UMETA(DisplayName = "SEQ"),
	ESQEX_Bonamik_JOINTLINK_MODE_BATCH = 1 UMETA(DisplayName = "Batch"),
	ESQEX_Bonamik_JOINTLINK_MODE_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_ConstraintType
{
	ESQEX_Bonamik_ConstraintType_None = 0 UMETA(DisplayName = "None"),
	ESQEX_Bonamik_ConstraintType_Sphere = 1 UMETA(DisplayName = "Sphere"),
	ESQEX_Bonamik_ConstraintType_Spring = 2 UMETA(DisplayName = "Spring"),
	ESQEX_Bonamik_ConstraintType_GroundAttach = 3 UMETA(DisplayName = "Ground Attach"),
	ESQEX_Bonamik_ConstraintType_SecondOrder_Sphere = 4 UMETA(DisplayName = "Second Order Sphere"),
	ESQEX_Bonamik_ConstraintType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_CollisionShape
{
	ESQEX_Bonamik_CollisionShape_None = 0 UMETA(DisplayName = "None"),
	ESQEX_Bonamik_CollisionShape_Sphere = 1 UMETA(DisplayName = "Sphere"),
	ESQEX_Bonamik_CollisionShape_Capsule = 2 UMETA(DisplayName = "Capsule"),
	ESQEX_Bonamik_CollisionShape_Inverse_Sphere = 3 UMETA(DisplayName = "Inverse Sphere"),
	ESQEX_Bonamik_CollisionShape_Inverse_Capsule = 4 UMETA(DisplayName = "Inverse Capsule"),
	ESQEX_Bonamik_CollisionShape_ReservedA = 5 UMETA(DisplayName = "Reserved A"),
	ESQEX_Bonamik_CollisionShape_Plane = 6 UMETA(DisplayName = "Plane"),
	ESQEX_Bonamik_CollisionShape_ReservedB = 7 UMETA(DisplayName = "Reserved B"),
	ESQEX_Bonamik_CollisionShape_Box = 8 UMETA(DisplayName = "Box"),
	ESQEX_Bonamik_CollisionShape_Self_Collision = 9 UMETA(DisplayName = "Self Collision"),
	ESQEX_Bonamik_CollisionShape_MAX = 10 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_LinkType
{
	ESQEX_Bonamik_LinkType_Lateral = 0 UMETA(DisplayName = "Lateral"),
	ESQEX_Bonamik_LinkType_ParentChild = 1 UMETA(DisplayName = "Parent Child"),
	ESQEX_Bonamik_LinkType_Bending = 2 UMETA(DisplayName = "Bending"),
	ESQEX_Bonamik_LinkType_PinConstraint = 3 UMETA(DisplayName = "Pin Constraint"),
	ESQEX_Bonamik_LinkType_KdiConstraint = 4 UMETA(DisplayName = "Kdi Constraint"),
	ESQEX_Bonamik_LinkType_ReactionTransfer = 5 UMETA(DisplayName = "Reaction Transfer"),
	ESQEX_Bonamik_LinkType_InverseFreeConstraint = 6 UMETA(DisplayName = "Inverse Free Constraint"),
	ESQEX_Bonamik_LinkType_MAX = 7 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_OutOfCamera
{
	ESQEX_Bonamik_OutOfCamera_Default = 0 UMETA(DisplayName = "Default"),
	ESQEX_Bonamik_OutOfCamera_Override = 1 UMETA(DisplayName = "Override"),
	ESQEX_Bonamik_OutOfCamera_FullCheck = 2 UMETA(DisplayName = "Full Check"),
	ESQEX_Bonamik_OutOfCamera_UseGlobal = 3 UMETA(DisplayName = "Use Global"),
	ESQEX_Bonamik_OutOfCamera_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_Parameters
{
	ESQEX_Bonamik_Parameters_Mass = 0 UMETA(DisplayName = "Mass"),
	ESQEX_Bonamik_Parameters_Friction = 1 UMETA(DisplayName = "Friction"),
	ESQEX_Bonamik_Parameters_Damping = 2 UMETA(DisplayName = "Damping"),
	ESQEX_Bonamik_Parameters_Bounciness = 3 UMETA(DisplayName = "Bounciness"),
	ESQEX_Bonamik_Parameters_WindDrag = 4 UMETA(DisplayName = "Wind Drag"),
	ESQEX_Bonamik_Parameters_WindLift = 5 UMETA(DisplayName = "Wind Lift"),
	ESQEX_Bonamik_Parameters_LFCoeff = 6 UMETA(DisplayName = "LF Coeff"),
	ESQEX_Bonamik_Parameters_ParkRate = 7 UMETA(DisplayName = "Park Rate"),
	ESQEX_Bonamik_Parameters_MaxLF = 8 UMETA(DisplayName = "Max LF"),
	ESQEX_Bonamik_Parameters_LFDrag = 9 UMETA(DisplayName = "LF Drag"),
	ESQEX_Bonamik_Parameters_LFLift = 10 UMETA(DisplayName = "LF Lift"),
	ESQEX_Bonamik_Parameters_InnerConeStr = 11 UMETA(DisplayName = "Inner Cone Str"),
	ESQEX_Bonamik_Parameters_OuterConeStr = 12 UMETA(DisplayName = "Outer Cone Str"),
	ESQEX_Bonamik_Parameters_MAX = 13 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_GlobalOutOfCamera
{
	ESQEX_Bonamik_GlobalOutOfCamera_Default = 0 UMETA(DisplayName = "Default"),
	ESQEX_Bonamik_GlobalOutOfCamera_Override = 1 UMETA(DisplayName = "Override"),
	ESQEX_Bonamik_GlobalOutOfCamera_FullCheck = 2 UMETA(DisplayName = "Full Check"),
	ESQEX_Bonamik_GlobalOutOfCamera_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_EmissiveDirection
{
	ESQEX_Bonamik_EmissiveDirection_UpVec = 0 UMETA(DisplayName = "Up Vec"),
	ESQEX_Bonamik_EmissiveDirection_ModelSpace = 1 UMETA(DisplayName = "Model Space"),
	ESQEX_Bonamik_EmissiveDirection_WorldSpace = 2 UMETA(DisplayName = "World Space"),
	ESQEX_Bonamik_EmissiveDirection_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_WindOwnerType
{
	ESQEX_Bonamik_WindOwnerType_Actor = 0 UMETA(DisplayName = "Actor"),
	ESQEX_Bonamik_WindOwnerType_Preset = 1 UMETA(DisplayName = "Preset"),
	ESQEX_Bonamik_WindOwnerType_AnimNotify = 2 UMETA(DisplayName = "Anim Notify"),
	ESQEX_Bonamik_WindOwnerType_Matinee = 3 UMETA(DisplayName = "Manitee"),
	ESQEX_Bonamik_WindOwnerType_AllTypes = 4 UMETA(DisplayName = "All Types"),
	ESQEX_Bonamik_WindOwnerType_MAX = 5 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_WindAreaType
{
	ESQEX_Bonamik_WindAreaType_Global = 0 UMETA(DisplayName = "Global"),
	ESQEX_Bonamik_WindAreaType_Box = 1 UMETA(DisplayName = "Box"),
	ESQEX_Bonamik_WindAreaType_Sphere = 2 UMETA(DisplayName = "Sphere"),
	ESQEX_Bonamik_WindAreaType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_WindType_Notify
{
	ESQEX_Bonamik_WindType_Notify_Directional = 0 UMETA(DisplayName = "Directional"),
	ESQEX_Bonamik_WindType_Notify_PointBlast = 1 UMETA(DisplayName = "Point Blast"),
	ESQEX_Bonamik_WindType_Notify_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_CustomWindType
{
	ESQEX_Bonamik_CustomWindType_Directional = 0 UMETA(DisplayName = "Directional"),
	ESQEX_Bonamik_CustomWindType_Wave = 1 UMETA(DisplayName = "Wave"),
	ESQEX_Bonamik_CustomWindType_PointBlast = 2 UMETA(DisplayName = "Point Blast"),
	ESQEX_Bonamik_CustomWindType_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEX_Bonamik_WindType
{
	ESQEX_Bonamik_WindType_Directional = 0 UMETA(DisplayName = "Directional"),
	ESQEX_Bonamik_WindType_Wave = 1 UMETA(DisplayName = "Wave"),
	ESQEX_Bonamik_WindType_CustomWave = 2 UMETA(DisplayName = "Custom Wave"),
	ESQEX_Bonamik_WindType_PointBlast = 3 UMETA(DisplayName = "Point Blast"),
	ESQEX_Bonamik_WindType_MAX = 4 UMETA(Hidden)
};

//---------------------------------------------------------------------------
//Structs
//---------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct FSQEX_BonamikPresetWindSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPresetWindSettings")
	FName m_PresetName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPresetWindSettings")
	class USQEX_BonamikWindDesc* m_WindDesc;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPresetWindSettings")
	TArray<FString> m_TargetGroups;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikChangingParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikChangingParameter")
	TArray<FName> m_Groups;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikChangingParameter")
	TEnumAsByte<ESQEX_Bonamik_Parameters> m_Parameter;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikChangingParameter")
	float m_Value;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikFpsCorrectionDesc
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_FrameRate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_WindDrag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_WindLift;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_LocalForceDrag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_LocalForceLift;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_Damping;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_Mass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_Friction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_Bounce;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_LateralLink;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_BendingLink;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_LongRangeAttachment;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikFpsCorrectionDesc")
	float m_Cone;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikSceneManagerDesc
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	bool m_IsEnable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	bool m_IsUseGPU;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_SubStep;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	float m_Dt;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalGroup;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	FString m_GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	bool m_IsEnableLSS;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	float m_LSScoeff_tran;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	float m_LSScoeff_rot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	FString m_RootName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	bool m_IsEnableLocalForce;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	FVector m_Gravity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	FVector m_WindForce;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	FVector m_DirRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	FVector m_ForceRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalLinkBatches;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalLinksInBatch;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalConeBatches;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalConesInBatch;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalCollisionBatches;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalCollisionsInBatch;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalSelfCollisionBatches;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_TotalSelfCollisionsInBatch;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	TEnumAsByte<ESQEX_Bonamik_JointLinkSimulationMode> m_JointLinkSimulationMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	TEnumAsByte<ESQEX_Bonamik_FastMotionHandling> m_FastMotionHandlingMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	bool m_EnableGroundCollision;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	int32 m_RefUpVec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSceneManagerDesc")
	TArray<FSQEX_BonamikFpsCorrectionDesc> m_FpsCorrection;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikSolverDesc
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_GroupID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	FString m_GroupName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	bool m_IsEnable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	bool m_IsUseConeSEQ;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	bool m_IsEnableDraw;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_ColIter;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_ConsIter;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_ConeIter;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_LinkIter;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_SolverIter;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_TagId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int32 m_CollisionTagId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	bool m_EnableGround;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	float m_LODdistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	int m_RefUpVec;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikSolverDesc")
	TArray<FSQEX_BonamikFpsCorrectionDesc> m_FpsCorrection;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikBodyDesc
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	int32 m_Index;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	FString m_JointName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	FString m_ParentBodyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	FString m_ChildBodyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	int m_ParentId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	int m_ChildId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	int32 m_GroupID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	int m_ColId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	bool m_IsKinematic;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	bool m_IsCollision;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	bool m_IsMultipleCollisionObject;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_Mass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_Inertia;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_Radius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_Damping;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_Bounciness;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_Friction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_WindDrag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_WindLift;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_LocalTransCoeff;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_MaxLocalTrans;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	TEnumAsByte<ESQEX_Bonamik_CollisionShape> m_ColShape;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	TEnumAsByte<ESQEX_Bonamik_ConstraintType> m_AddiConstType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_AddiConstStr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_AddiConstRad;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	FVector m_LocalTransform;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	FQuat m_LocalRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	int32 m_CollisionBatchNo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	FVector m_LocalScale;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_ConcaveRatio;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_LFcoeff;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_ParkRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_MaxLF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_LFdrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikBodyDesc")
	float m_LFlift;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikLinkDesc
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	FString m_ParentBodyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	FString m_ChildBodyName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	int32 m_ParentId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	int32 m_ChildId;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	TEnumAsByte<ESQEX_Bonamik_LinkType> m_LinkType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	bool m_IsSelfCollision;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	bool m_EnableJointTwist;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	bool m_EnableCone;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	bool m_EnableConeAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LinkStr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LinkParentStr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_ConeInnerStr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_ConeOuterStr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_ConeParentStr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LimitY;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LimitZ;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_ConeOffsetY;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_ConeOffsetZ;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LimitOffsetY;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LimitOffsetZ;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	bool m_IsCollisionReceiver;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	bool m_IsCollisionRepulsor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	bool m_IsLRA;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LRAstr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_LRAdamping;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	int32 m_LinkBatchNo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	int32 m_ConeBatchNo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	int32 m_CollisionBatchNo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_PinRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_PinStr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_KdiTrans;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_KdiRot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikLinkDesc")
	float m_ConcaveRatio;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikPlaneDesc
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	int32 m_GroupID;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	FString m_ParticleAName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	FString m_ParticleBName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	FString m_ParticleCName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	int m_ParticleA;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	int m_ParticleB;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	int m_ParticleC;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	int32 m_Index;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	float m_Thickness;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	float m_Offset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	bool m_IsCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	int m_CollisionBatchNo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPlaneDesc")
	int m_ColId;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikShapeMatchingDesc
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikShapeMatchingDesc")
	int m_TotalParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikShapeMatchingDesc")
	int m_RegionSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikShapeMatchingDesc")
	float m_Stiffness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikShapeMatchingDesc")
	int32 m_ParticleIds;
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikGroupLOD
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikGroupLOD")
	TArray<FName> Groups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikGroupLOD")
	float MinSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikGroupLOD")
	float BlendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikGroupLOD")
	float PrerollTime;
};

USTRUCT(BlueprintType)
struct FCustomWindSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	TEnumAsByte<ESQEX_Bonamik_CustomWindType> m_WindType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	FVector m_WindForce;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	FVector m_RandomRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	float m_RandomTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	FVector m_WaveMagnitude;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	FVector m_WaveFrequency;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	FVector m_WaveMagOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	FVector m_WaveFreqOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	float m_WaveTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	float m_PointStrength;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	float m_BlastRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	float m_BlastSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	float m_PointRadius;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	float m_PeakInRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	int m_StartFrame;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCustomWindSettings")
	int m_LoopNum;
};