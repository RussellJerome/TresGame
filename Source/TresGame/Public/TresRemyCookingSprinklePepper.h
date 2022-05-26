#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingBase.h"
#include "RemyCookingGameState.h"
#include "SprinklePepperMainState.h"
#include "TresRemyCookingSprinklePepper.generated.h"

UCLASS()
class ATresRemyCookingSprinklePepper : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    ATresRemyCookingSprinklePepper();
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    SprinklePepperMainState GetMainCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

