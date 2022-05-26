#pragma once
#include "CoreMinimal.h"
#include "TresPlayerControllerLowerBase.h"
#include "UObject/NoExportTypes.h"
#include "TresSharedPlayerController.generated.h"

UCLASS(Abstract)
class ATresSharedPlayerController : public ATresPlayerControllerLowerBase {
    GENERATED_BODY()
public:
    ATresSharedPlayerController();
    UFUNCTION(BlueprintPure)
    float GetRightStickSlopeVectorLength() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightStickSlopeVector() const;
    
    UFUNCTION(BlueprintPure)
    float GetRightStickSlopeDegrees() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeftStickSlopeVectorLength() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLeftStickSlopeVector() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeftStickSlopeDegrees() const;
    
};

