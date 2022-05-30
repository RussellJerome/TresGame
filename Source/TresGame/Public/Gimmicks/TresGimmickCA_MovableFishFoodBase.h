#pragma once
#include "CoreMinimal.h"
#include "TresGimmickCA_MovableFishBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_MovableFishFoodBase.generated.h"

UCLASS()
class ATresGimmickCA_MovableFishFoodBase : public ATresGimmickCA_MovableFishBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_ReactorActiveRange;
    
public:
    ATresGimmickCA_MovableFishFoodBase();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnFishFoodReactorDeactivate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnFishFoodReactorActivate();
    
};

