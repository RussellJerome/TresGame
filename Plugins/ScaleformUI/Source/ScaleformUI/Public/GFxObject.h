// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScaleformUI_StructsAndEnums.h"
#include "GFxObject.generated.h"

/**
 * 
 */
UCLASS()
class SCALEFORMUI_API UGFxObject : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetVisible(bool bVisible) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetScale(float XScale, float YScale) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetPosition(float X, float Y) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const FString& MemberName, TArray<struct FASValue> Input) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetMemberValue(const FString& MemberName, const struct FASValue& Input) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetDisplayTransform(const struct FTransform& DisplayTransform) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void SetColorTransform(const struct FASColorTransform& UnrealColorTransform) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	struct FASValue Invoke(const FString& FunctionName, TArray<struct FASValue> Params) { return FASValue::FASValue(); };

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void GotoAndStopI(int FrameNumber) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void GotoAndStop(const FString& FrameString) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void GotoAndPlayI(int FrameNumber) {};

	UFUNCTION(BlueprintCallable, Category = "GFxObject")
	void GotoAndPlay(const FString& FrameString) {};

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	bool GetVisible() { return false; };

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	bool GetScale(float& XScale, float& YScale) { return false; };

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	bool GetPosition(float& X, float& Y) { return false; };

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	TArray<struct FASValue> GetMemberValueArray(const FString& MemberName) { return TArray<struct FASValue>(); };

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	struct FASValue GetMemberValue(const FString& MemberName) { return FASValue::FASValue(); };

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	struct FTransform GetDisplayTransform() { return FTransform::FTransform(); };

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	struct FASDisplayInfo GetDisplayInfo() { return FASDisplayInfo::FASDisplayInfo(); };

	UFUNCTION(BlueprintPure, Category = "GFxObject")
	struct FASColorTransform GetColorTransform() { return FASColorTransform::FASColorTransform(); };
};
