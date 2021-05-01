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
	HitTest_Bounds = 0 UMETA(DisplayName = "Bounds"),
	HitTest_Shapes = 1 UMETA(DisplayName = "Shapes"),
	HitTest_ButtonEvents = 2 UMETA(DisplayName = "Button Events"),
	HitTest_ShapesNoInvisible = 3 UMETA(DisplayName = "Shapes No Invisible"),
	HitTest_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EGFxGCFlags
{
	Quick = 0 UMETA(DisplayName = "Quick"),
	Medium = 1 UMETA(DisplayName = "Medium"),
	Full = 2 UMETA(DisplayName = "Full"),
	EGFxGCFlags_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EGFxTimingMode
{
	Game = 0 UMETA(DisplayName = "Game"),
	Real = 1 UMETA(DisplayName = "Real"),
	EGFxTimingMode_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EGFxRenderTextureMode
{
	Opaque = 0 UMETA(DisplayName = "Opaque"),
	Alpha = 1 UMETA(DisplayName = "Alpha"),
	AlphaComposite = 2 UMETA(DisplayName = "Alpha Composite"),
	EGFxRenderTextureMode_MAX = 3 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EGFxScaleMode
{
	NoScale = 0 UMETA(DisplayName = "No Scale"),
	ShowAll = 1 UMETA(DisplayName = "Show All"),
	ExactFit = 2 UMETA(DisplayName = "Exact Fit"),
	NoBorder = 3 UMETA(DisplayName = "No Border"),
	EGFxScaleMode_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EGFxAlign
{
	Center = 0 UMETA(DisplayName = "Center"),
	TopCenter = 1 UMETA(DisplayName = "Top Center"),
	BottomCenter = 2 UMETA(DisplayName = "Bottom Center"),
	CenterLeft = 3 UMETA(DisplayName = "Center Left"),
	CenterRight = 4 UMETA(DisplayName = "Center Right"),
	TopLeft = 5 UMETA(DisplayName = "Top Left"),
	TopRight = 6 UMETA(DisplayName = "Top Right"),
	BottomLeft = 7 UMETA(DisplayName = "Bottom Left"),
	BottomRight = 8 UMETA(DisplayName = "Bottom Right"),
	EGFxAlign_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EASType
{
	Undefined = 0 UMETA(DisplayName = "Undefined"),
	Null = 1 UMETA(DisplayName = "Null"),
	Boolean = 2 UMETA(DisplayName = "Boolean"),
	Int = 3 UMETA(DisplayName = "Int"),
	Number = 4 UMETA(DisplayName = "Number"),
	String = 5 UMETA(DisplayName = "String"),
	StringW = 6 UMETA(DisplayName = "StringW"),
	Object = 7 UMETA(DisplayName = "Object"),
	DisplayObject = 8 UMETA(DisplayName = "Display Object"),
	EASType_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum EFlashTextureRescale
{
	FlashTextureScale_High = 0 UMETA(DisplayName = "High"),
	FlashTextureScale_Low = 1 UMETA(DisplayName = "Low"),
	FlashTextureScale_NextLow = 2 UMETA(DisplayName = "Next Low"),
	FlashTextureScale_Mult4 = 3 UMETA(DisplayName = "Mult 4"),
	FlashTextureScale_None = 4 UMETA(DisplayName = "None"),
	FlashTextureScale_MAX = 5 UMETA(Hidden)
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