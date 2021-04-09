// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScaleformUI_StructsAndEnums.h"
#include "ScaleformBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SCALEFORMUI_API UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "ScaleformBlueprintLibrary")
	static class UGFxMoviePlayer* OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "ScaleformBlueprintLibrary")
	static struct FASValue InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const FString& FunctionName) { return FASValue::FASValue(); };

	UFUNCTION(BlueprintCallable, Category = "ScaleformBlueprintLibrary")
	static struct FASValue Invoke(class UGFxMoviePlayer* MoviePlayer, const FString& FunctionName, TArray<struct FASValue> Params) { return FASValue::FASValue(); };

	UFUNCTION(BlueprintPure, Category = "ScaleformBlueprintLibrary")
	static class UGFxObject* GetVariable(class UGFxMoviePlayer* MoviePlayer, const FString& VariablePath) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "ScaleformBlueprintLibrary")
	static class UGFxObject* GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const FString& MovieClipName) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "ScaleformBlueprintLibrary")
	static class UGFxObject* GetMember(class UGFxMoviePlayer* MoviePlayer, const FString& MemberName) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "ScaleformBlueprintLibrary")
	static void CloseMovie(class UGFxMoviePlayer* MoviePlayer) {};
};
