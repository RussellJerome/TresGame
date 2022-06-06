#pragma once
#include "CoreMinimal.h"
#include "ETresMapJumpFadeKind.h"
#include "TresTriggerBox.h"
#include "TresMapJumpTriggerBoxSignatureDelegate.h"
#include "TresMapJumpTriggerBox.generated.h"

UCLASS()
class ATresMapJumpTriggerBox : public ATresTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_MapName;
    
    UPROPERTY(EditAnywhere)
    FName m_TargetTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresMapJumpFadeKind> m_FadeType;
    
    UPROPERTY(EditAnywhere)
    bool m_BlueprintMapJump;
    
    UPROPERTY(BlueprintAssignable)
    FTresMapJumpTriggerBoxSignature OnMapJump;
    
    ATresMapJumpTriggerBox();
    UFUNCTION(BlueprintCallable)
    void InvokeMapJump();
    
};

