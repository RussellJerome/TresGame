#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresSnowShaderController.generated.h"

class UPrimitiveComponent;

UCLASS()
class ATresSnowShaderController : public AActor {
    GENERATED_BODY()
public:
    ATresSnowShaderController();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSnowRenderResolutionWidth(int32 inWidth);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSnowRenderHeightRatio(float inHeightRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSnowRenderDepthLocation(FVector pos);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSnowRenderCaptureOffset(float InOffset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveDepthRender(UPrimitiveComponent* inPrimitive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisableSnowRenderDepthFollowPlayer(bool inbDisable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearSnowRenderDepth();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddDepthRender(UPrimitiveComponent* inPrimitive);
    
};

