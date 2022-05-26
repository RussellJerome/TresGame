#pragma once
#include "CoreMinimal.h"
#include "ASDisplayInfo.h"
#include "UObject/Object.h"
#include "ASValue.h"
#include "UObject/NoExportTypes.h"
#include "ASColorTransform.h"
#include "GFxObject.generated.h"

class UGFxMoviePlayer;

UCLASS(BlueprintType, Transient)
class SCALEFORMUI_API UGFxObject : public UObject {
    GENERATED_BODY()
public:
    UGFxObject();
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(float XScale, float YScale);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetMemberValueArray(UGFxMoviePlayer* MoviePlayer, const FString& MemberName, const TArray<FASValue>& Input);
    
    UFUNCTION(BlueprintCallable)
    void SetMemberValue(const FString& MemberName, const FASValue& Input);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayTransform(const FTransform& DisplayTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInfo(const FASDisplayInfo& UnrealDisplayInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetColorTransform(const FASColorTransform& UnrealColorTransform);
    
    UFUNCTION(BlueprintCallable)
    FASValue Invoke(const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStopI(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStop(const FString& FrameString);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlayI(int32 FrameNumber);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlay(const FString& FrameString);
    
    UFUNCTION(BlueprintCallable)
    bool GetVisible();
    
    UFUNCTION(BlueprintCallable)
    bool GetScale(float& XScale, float& YScale);
    
    UFUNCTION(BlueprintCallable)
    bool GetPosition(float& X, float& Y);
    
    UFUNCTION(BlueprintCallable)
    TArray<FASValue> GetMemberValueArray(const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    FASValue GetMemberValue(const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetDisplayTransform();
    
    UFUNCTION(BlueprintCallable)
    FASDisplayInfo GetDisplayInfo();
    
    UFUNCTION(BlueprintCallable)
    FASColorTransform GetColorTransform();
    
};

