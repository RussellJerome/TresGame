#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "ETresMapJumpFadeKind.h"
#include "TresMapJumpVolumeSignatureDelegate.h"
#include "TresMapJumpVolume.generated.h"

UCLASS()
class ATresMapJumpVolume : public ATresVolume {
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
    FTresMapJumpVolumeSignature OnMapJump;
    
    ATresMapJumpVolume();
    UFUNCTION(BlueprintCallable)
    void InvokeMapJump();
    
};

