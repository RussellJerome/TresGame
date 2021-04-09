// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScaleformUI_StructsAndEnums.h"
#include "GFxMoviePlayer.generated.h"

/**
 * 
 */
UCLASS()
class SCALEFORMUI_API UGFxMoviePlayer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	FString SwfAssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	class UGFxObject* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bDisplayWithHudOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bEnableGammaCorrection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bAllowInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bAllowFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bCloseOnLevelChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bOnlyOwnerFocusable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bDiscardNonOwnerInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bCaptureKeyboardInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bCaptureMouseInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bCaptureGamepadInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bCaptureTouchInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bIsSplitscreenLayoutModified;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bShowDefaultMouseCursor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bBlurLesserMovies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bHideLesserMovies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bIsPriorityBlurred;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bIsPriorityHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bIgnoreVisibilityEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bIgnoreBlurEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bRefreshed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bAlphaComposite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bPerformHitTest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	TEnumAsByte<EGFxHitTestType> HitTestType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	class UTextureRenderTarget2D* RenderTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	class UObject* ExternalInterface;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	//TArray<struct FKey> CaptureKeys;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	//TArray<struct FKey> FocusIgnoreKeys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	TArray<struct FExternalTexture> ExternalTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	TEnumAsByte<EGFxRenderTextureMode> RenderTextureMode;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	//unsigned char Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	TArray<struct FGFxWidgetBinding> WidgetBindings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	int SplitscreenLayoutYAdjust;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	struct FScriptMulticastDelegate OnFsCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	struct FScriptMulticastDelegate OnStartCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	struct FScriptMulticastDelegate OnCloseCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	struct FScriptMulticastDelegate OnTickCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	struct FScriptMulticastDelegate OnFocusGainedCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	struct FScriptMulticastDelegate OnFocusLostCommand;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	TArray<class UGFxObject*> CachedMovieClipsArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxMoviePlayer")
	bool bSwitchingPlayInThread;

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	bool Start(bool bRefresh) { return false; };

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetVisibility(const FString& MovieClipName, bool bVisible) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetViewScaleMode(TEnumAsByte<EGFxScaleMode> ScaleMode) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetViewport(int X, int Y, int Width, int Height) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetView3D(const struct FTransform& ViewTransform) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, TArray<struct FASValue> Value) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetVariableValue(const FString& MovieClipName, const FString& MemberName, const struct FASValue& Value) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetTimingMode(TEnumAsByte<EGFxTimingMode> TimingMode) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetScale(const FString& MovieClipName, float XScale, float YScale) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetPosition(const FString& MovieClipName, float X, float Y) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetPause(bool bPausePlayback) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetMovieCanReceiveInput(bool bCanReceiveInput) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus) {};

	//UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	//void SetFocusIgnoreKeys(TArray<struct FKey> Keys) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	bool SetExternalTexture(const FString& Resource, class UTexture* Texture) { return false; };

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetDisplayTransform(const FString& MovieClipName, const struct FTransform& DisplayTransform) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetDisplayInfo(const FString& MovieClipName, const struct FASDisplayInfo& Info) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetColorTransform(const FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform) {};

	//UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	//void SetCaptureKeys(TArray<struct FKey> Keys) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void SetAlignment(TEnumAsByte<EGFxAlign> Align) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void ReceiveGFxCommand(const FString& Command, const FString& Arguments) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	static class UGFxMoviePlayer* OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void OnTick(float DeltaTime) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void OnStart() {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void OnFocusLost(int LocalPlayerIndex) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void OnFocusGained(int LocalPlayerIndex) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void OnClose() {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	bool LoadAndStart(const FString& InSwfAssetName, bool bRefresh) { return false; };

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	struct FASValue Invoke(const FString& MovieClipName, const FString& FunctionName, TArray<struct FASValue> Params) { return FASValue::FASValue(); };

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void GotoAndStopI(const FString& MovieClipName, int Frame) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void GotoAndStop(const FString& MovieClipName, const FString& Frame) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void GotoAndPlayI(const FString& MovieClipName, int Frame) {};

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void GotoAndPlay(const FString& MovieClipName, const FString& Frame) {};

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	bool GetVisibility(const FString& MovieClipName) { return false; };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	struct FTransform GetView3D() { return FTransform::FTransform(); };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	TArray<struct FASValue> GetVariableValueArray(const FString& MovieClipName, const FString& MemberName) { return TArray<struct FASValue>(); };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	struct FASValue GetVariableValue(const FString& MovieClipName, const FString& MemberName) { return FASValue::FASValue(); };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	bool GetScale(const FString& MovieClipName, float& XScale, float& YScale) { return false; };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	bool GetPosition(const FString& MovieClipName, float& X, float& Y) { return false; };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	struct FASPerspectiveTransform GetPerspective3D() { return FASPerspectiveTransform::FASPerspectiveTransform(); };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	class UGFxObject* GetMovieClip(const FString& MovieClipName) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	struct FTransform GetDisplayTransform(const FString& MovieClipName) { return FTransform::FTransform(); };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	struct FASDisplayInfo GetDisplayInfo(const FString& MovieClipName) { return FASDisplayInfo::FASDisplayInfo(); };

	UFUNCTION(BlueprintPure, Category = "GFxMoviePlayer")
	struct FASColorTransform GetColorTransform(const FString& MovieClipName) { return FASColorTransform::FASColorTransform(); };

	UFUNCTION(BlueprintCallable, Category = "GFxMoviePlayer")
	void Close(bool Unload) {};
};
