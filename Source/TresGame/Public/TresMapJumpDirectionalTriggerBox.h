#pragma once
#include "CoreMinimal.h"
#include "ETresMapJumpFadeKind.h"
#include "TresDirectionalTriggerBoxTickBase.h"
#include "TresMapJumpDirectionalTriggerBoxSignatureDelegate.h"
#include "TresMapJumpDirectionalTriggerBox.generated.h"

class UTresMapMarkerComponent;

UCLASS()
class ATresMapJumpDirectionalTriggerBox : public ATresDirectionalTriggerBoxTickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_MapName;
    
    UPROPERTY(EditAnywhere)
    FName m_TargetTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresMapJumpFadeKind> m_FadeType;
    
    UPROPERTY(EditAnywhere)
    bool m_BlueprintMapJump;
    
    UPROPERTY(BlueprintAssignable)
    FTresMapJumpDirectionalTriggerBoxSignature OnMapJump;
    
    UPROPERTY(EditInstanceOnly)
    float m_OverrideMarkerSize;
    
public:
    UPROPERTY(Export, VisibleAnywhere)
    UTresMapMarkerComponent* MapMarkerComponent;
    
    ATresMapJumpDirectionalTriggerBox();
    UFUNCTION(BlueprintCallable)
    void SetActiveMapMarker(bool Active);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMapJump();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_MapJump();
    
};

