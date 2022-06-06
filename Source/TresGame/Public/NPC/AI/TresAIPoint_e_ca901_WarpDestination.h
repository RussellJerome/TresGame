#pragma once
#include "CoreMinimal.h"
#include "TresAIPoint.h"
#include "ETresEnemyca901WarpKind.h"
#include "TresAIPoint_e_ca901_WarpDestination.generated.h"

UCLASS()
class ATresAIPoint_e_ca901_WarpDestination : public ATresAIPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemyca901WarpKind> m_WarpKind;
    
public:
    ATresAIPoint_e_ca901_WarpDestination();
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ETresEnemyca901WarpKind> BP_GetWarpKind();
    
    UFUNCTION(BlueprintCallable)
    bool BP_CompareWarpKind(const TEnumAsByte<ETresEnemyca901WarpKind> WarpKind);
    
};

