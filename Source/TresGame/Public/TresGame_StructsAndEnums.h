// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TresGame_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------
UENUM(BlueprintType)
enum ETresGrass
{
	RADIAL = 0,
	CLOCKWISE = 1,
	CCLOCKWISE = 2,
	MAX = 3,
	ETresGrass_MAX = 4
};

UENUM(BlueprintType)
enum ETresCollision
{
	SPHERE = 0,
	CAPSULE1 = 1,
	CAPSULE2 = 2,
	CAPSULE_RING = 3,
	BOX = 4,
	BOX_RING = 5,
	CONVEX = 6,
	LASER1 = 7,
	DCONVEX = 8,
	ETresCollision_1_MAX = 9,
	ETresCollision_MAX = 10
};

USTRUCT(BlueprintType)
struct FTresCollShapeAssetUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FName                                       m_GrpName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	TEnumAsByte<ETresCollision>                        ShapeType;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FVector                                     Size;                                                     // 0x000C(0x000C) (Edit, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FVector                                     RelativeLocation;                                         // 0x0018(0x000C) (Edit, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FRotator                                    RelativeRocation;                                         // 0x0024(0x000C) (Edit, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	FVector                                     Scale;                                                    // 0x0030(0x000C) (Edit, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FTresCollShapeAssetUnit")
	class UStaticMesh*                                 Mesh;                                                     // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

struct FTresRootComponentPostPhysicsTickFunction : public FTickFunction
{
	//appears empty
};