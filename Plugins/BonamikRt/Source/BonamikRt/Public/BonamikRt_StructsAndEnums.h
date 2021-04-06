// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BonamikRt_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BonamikRt.SHAPEMATCHING_MODE
UENUM(BlueprintType) enum ESHAPEMATCHING_MODE
{
	ESQEX_Bonamik_SMMODE_CHAINSHAPEMATCH = 0,
	ESQEX_Bonamik_SMMODE_SEQCHAINMATCH = 1,
	ESQEX_Bonamik_SMMODE_VOLUMEMATCH = 2,
	ESQEX_Bonamik_SMMODE_MAX = 3
};


// Enum BonamikRt.ESQEX_Bonamik_FastMotionHandling
UENUM(BlueprintType) enum ESQEX_Bonamik_FastMotionHandling
{
	ESQEX_Bonamik_FMH_NONE = 0,
	ESQEX_Bonamik_FMH_LOCAL_FORCE = 1,
	ESQEX_Bonamik_FMH_LSS = 2,
	ESQEX_Bonamik_FMH_MAX = 3
};


// Enum BonamikRt.ESQEX_Bonamik_JointLinkSimulationMode
UENUM(BlueprintType) enum ESQEX_Bonamik_JointLinkSimulationMode
{
	ESQEX_Bonamik_JOINTLINK_MODE_SEQ = 0,
	ESQEX_Bonamik_JOINTLINK_MODE_BATCH = 1,
	ESQEX_Bonamik_JOINTLINK_MODE_MAX = 2
};


// Enum BonamikRt.ESQEX_Bonamik_ConstraintType
UENUM(BlueprintType) enum ESQEX_Bonamik_ConstraintType
{
	ESQEX_Bonamik_ConstraintType_None = 0,
	ESQEX_Bonamik_ConstraintType_Sphere = 1,
	ESQEX_Bonamik_ConstraintType_Spring = 2,
	ESQEX_Bonamik_ConstraintType_GroundAttach = 3,
	ESQEX_Bonamik_ConstraintType_SecondOrder_Sphere = 4,
	ESQEX_Bonamik_ConstraintType_MAX = 5
};


// Enum BonamikRt.ESQEX_Bonamik_CollisionShape
UENUM(BlueprintType) enum ESQEX_Bonamik_CollisionShape
{
	ESQEX_Bonamik_CollisionShape_None = 0,
	ESQEX_Bonamik_CollisionShape_Sphere = 1,
	ESQEX_Bonamik_CollisionShape_Capsule = 2,
	ESQEX_Bonamik_CollisionShape_Inverse_Sphere = 3,
	ESQEX_Bonamik_CollisionShape_Inverse_Capsule = 4,
	ESQEX_Bonamik_CollisionShape_ReservedA = 5,
	ESQEX_Bonamik_CollisionShape_Plane = 6,
	ESQEX_Bonamik_CollisionShape_ReservedB = 7,
	ESQEX_Bonamik_CollisionShape_Box = 8,
	ESQEX_Bonamik_CollisionShape_Self_Collision = 9,
	ESQEX_Bonamik_CollisionShape_MAX = 10
};


// Enum BonamikRt.ESQEX_Bonamik_LinkType
UENUM(BlueprintType) enum ESQEX_Bonamik_LinkType
{
	ESQEX_Bonamik_LinkType_Lateral = 0,
	ESQEX_Bonamik_LinkType_ParentChild = 1,
	ESQEX_Bonamik_LinkType_Bending = 2,
	ESQEX_Bonamik_LinkType_PinConstraint = 3,
	ESQEX_Bonamik_LinkType_KdiConstraint = 4,
	ESQEX_Bonamik_LinkType_ReactionTransfer = 5,
	ESQEX_Bonamik_LinkType_InverseFreeConstraint = 6,
	ESQEX_Bonamik_LinkType_MAX = 7
};


// Enum BonamikRt.ESQEX_Bonamik_OutOfCamera
UENUM(BlueprintType) enum ESQEX_Bonamik_OutOfCamera
{
	ESQEX_Bonamik_OutOfCamera_Default = 0,
	ESQEX_Bonamik_OutOfCamera_Override = 1,
	ESQEX_Bonamik_OutOfCamera_FullCheck = 2,
	ESQEX_Bonamik_OutOfCamera_UseGlobal = 3,
	ESQEX_Bonamik_OutOfCamera_MAX = 4
};


// Enum BonamikRt.ESQEX_Bonamik_Parameters
UENUM(BlueprintType) enum ESQEX_Bonamik_Parameters
{
	ESQEX_Bonamik_Parameters_Mass = 0,
	ESQEX_Bonamik_Parameters_Friction = 1,
	ESQEX_Bonamik_Parameters_Damping = 2,
	ESQEX_Bonamik_Parameters_Bounciness = 3,
	ESQEX_Bonamik_Parameters_WindDrag = 4,
	ESQEX_Bonamik_Parameters_WindLift = 5,
	ESQEX_Bonamik_Parameters_LFCoeff = 6,
	ESQEX_Bonamik_Parameters_ParkRate = 7,
	ESQEX_Bonamik_Parameters_MaxLF = 8,
	ESQEX_Bonamik_Parameters_LFDrag = 9,
	ESQEX_Bonamik_Parameters_LFLift = 10,
	ESQEX_Bonamik_Parameters_InnerConeStr = 11,
	ESQEX_Bonamik_Parameters_OuterConeStr = 12,
	ESQEX_Bonamik_Parameters_MAX = 13
};


// Enum BonamikRt.ESQEX_Bonamik_GlobalOutOfCamera
UENUM(BlueprintType) enum ESQEX_Bonamik_GlobalOutOfCamera
{
	ESQEX_Bonamik_GlobalOutOfCamera_Default = 0,
	ESQEX_Bonamik_GlobalOutOfCamera_Override = 1,
	ESQEX_Bonamik_GlobalOutOfCamera_FullCheck = 2,
	ESQEX_Bonamik_GlobalOutOfCamera_MAX = 3
};


// Enum BonamikRt.ESQEX_Bonamik_EmissiveDirection
UENUM(BlueprintType) enum ESQEX_Bonamik_EmissiveDirection
{
	ESQEX_Bonamik_EmissiveDirection_UpVec = 0,
	ESQEX_Bonamik_EmissiveDirection_ModelSpace = 1,
	ESQEX_Bonamik_EmissiveDirection_WorldSpace = 2,
	ESQEX_Bonamik_EmissiveDirection_MAX = 3
};


// Enum BonamikRt.ESQEX_Bonamik_WindOwnerType
UENUM(BlueprintType) enum ESQEX_Bonamik_WindOwnerType
{
	ESQEX_Bonamik_WindOwnerType_Actor = 0,
	ESQEX_Bonamik_WindOwnerType_Preset = 1,
	ESQEX_Bonamik_WindOwnerType_AnimNotify = 2,
	ESQEX_Bonamik_WindOwnerType_Matinee = 3,
	ESQEX_Bonamik_WindOwnerType_AllTypes = 4,
	ESQEX_Bonamik_WindOwnerType_MAX = 5
};


// Enum BonamikRt.ESQEX_Bonamik_WindAreaType
UENUM(BlueprintType) enum ESQEX_Bonamik_WindAreaType
{
	ESQEX_Bonamik_WindAreaType_Global = 0,
	ESQEX_Bonamik_WindAreaType_Box = 1,
	ESQEX_Bonamik_WindAreaType_Sphere = 2,
	ESQEX_Bonamik_WindAreaType_MAX = 3
};


// Enum BonamikRt.ESQEX_Bonamik_WindType_Notify
UENUM(BlueprintType) enum ESQEX_Bonamik_WindType_Notify
{
	ESQEX_Bonamik_WindType_Notify_Directional = 0,
	ESQEX_Bonamik_WindType_Notify_PointBlast = 1,
	ESQEX_Bonamik_WindType_Notify_MAX = 2
};


// Enum BonamikRt.ESQEX_Bonamik_CustomWindType
UENUM(BlueprintType) enum ESQEX_Bonamik_CustomWindType
{
	ESQEX_Bonamik_CustomWindType_Directional = 0,
	ESQEX_Bonamik_CustomWindType_Wave = 1,
	ESQEX_Bonamik_CustomWindType_PointBlast = 2,
	ESQEX_Bonamik_CustomWindType_MAX = 3
};


// Enum BonamikRt.ESQEX_Bonamik_WindType
UENUM(BlueprintType) enum ESQEX_Bonamik_WindType
{
	ESQEX_Bonamik_WindType_Directional = 0,
	ESQEX_Bonamik_WindType_Wave = 1,
	ESQEX_Bonamik_WindType_CustomWave = 2,
	ESQEX_Bonamik_WindType_PointBlast = 3,
	ESQEX_Bonamik_WindType_MAX = 4
};

USTRUCT(BlueprintType)
struct FSQEX_BonamikPresetWindSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPresetWindSettings")
	FName                                       m_PresetName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPresetWindSettings")
	class USQEX_BonamikWindDesc*                       m_WindDesc;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEX_BonamikPresetWindSettings")
	TArray<FString>                              m_TargetGroups;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
};