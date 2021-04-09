// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ScaleformUI_StructsAndEnums.generated.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

UENUM(BlueprintType)
enum EGFxHitTestType
{
	HitTest_Bounds = 0,
	HitTest_Shapes = 1,
	HitTest_ButtonEvents = 2,
	HitTest_ShapesNoInvisible = 3,
	HitTest_MAX = 4
};

UENUM(BlueprintType)
enum EGFxGCFlags
{
	Quick = 0,
	Medium = 1,
	Full = 2,
	EGFxGCFlags_MAX = 3
};

UENUM(BlueprintType)
enum EGFxTimingMode
{
	Game = 0,
	Real = 1,
	EGFxTimingMode_MAX = 2
};

UENUM(BlueprintType)
enum EGFxRenderTextureMode
{
	Opaque = 0,
	Alpha = 1,
	AlphaComposite = 2,
	EGFxRenderTextureMode_MAX = 3
};

UENUM(BlueprintType)
enum EGFxScaleMode
{
	NoScale = 0,
	ShowAll = 1,
	ExactFit = 2,
	NoBorder = 3,
	EGFxScaleMode_MAX = 4
};

UENUM(BlueprintType)
enum EGFxAlign
{
	Center = 0,
	TopCenter = 1,
	BottomCenter = 2,
	CenterLeft = 3,
	CenterRight = 4,
	TopLeft = 5,
	TopRight = 6,
	BottomLeft = 7,
	BottomRight = 8,
	EGFxAlign_MAX = 9
};

UENUM(BlueprintType)
enum EASType
{
	Undefined = 0,
	Null = 1,
	Boolean = 2,
	Int = 3,
	Number = 4,
	String = 5,
	StringW = 6,
	Object = 7,
	DisplayObject = 8,
	EASType_MAX = 9
};

UENUM(BlueprintType)
enum EFlashTextureRescale
{
	FlashTextureScale_High = 0,
	FlashTextureScale_Low = 1,
	FlashTextureScale_NextLow = 2,
	FlashTextureScale_Mult4 = 3,
	FlashTextureScale_None = 4,
	FlashTextureScale_MAX = 5
};

//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct FExternalTexture
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FExternalTexture")
	FString Resource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FExternalTexture")
	class UTexture* Texture;
};

USTRUCT(BlueprintType)
struct FGFxWidgetBinding
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FGFxWidgetBinding")
	FName WidgetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FGFxWidgetBinding")
	class UClass* WidgetClass;
};

USTRUCT(BlueprintType)
struct FASValue
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASValue")
	TEnumAsByte<EASType> ASType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASValue")
	bool ASBoolean;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASValue")
	int ASInt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASValue")
	float ASNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASValue")
	FString ASString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASValue")
	class UGFxObject* ASObject;
};

USTRUCT(BlueprintType)
struct FASPerspectiveTransform
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASPerspectiveTransform")
	FVector4 Row0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASPerspectiveTransform")
	FVector4 Row1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASPerspectiveTransform")
	FVector4 Row2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASPerspectiveTransform")
	FVector4 Row3;
};

USTRUCT(BlueprintType)
struct FASDisplayInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASDisplayInfo")
	FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASDisplayInfo")
	FVector Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASDisplayInfo")
	float Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASDisplayInfo")
	float XRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASDisplayInfo")
	float YRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASDisplayInfo")
	float Alpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASDisplayInfo")
	bool Visible;
};

USTRUCT(BlueprintType)
struct FASColorTransform
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASColorTransform")
	FLinearColor Multiply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FASColorTransform")
	FLinearColor Add;
};

USTRUCT(BlueprintType)
struct FGCReference
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FGCReference")
	class UObject* Object;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FGCReference")
	int RefCount;
};