#pragma once
#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresDirectionalTriggerBoxTickBase.generated.h"

class UTresDebugArrowComponent;

UCLASS()
class ATresDirectionalTriggerBoxTickBase : public ATresTriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_PermitAngle;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresDebugArrowComponent* DebugArrowComponent;
    
public:
    ATresDirectionalTriggerBoxTickBase();
    UFUNCTION(BlueprintCallable)
    void SetEnableExecute(bool Enable);
    
    UFUNCTION(BlueprintPure)
    bool IsEnableExecute();
    
};

