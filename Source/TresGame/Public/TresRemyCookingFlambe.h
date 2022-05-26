#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingBase.h"
#include "RemyCookingGameState.h"
#include "TresRemyCookingFlambe.generated.h"

UCLASS()
class ATresRemyCookingFlambe : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    ATresRemyCookingFlambe();
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

