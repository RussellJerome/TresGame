#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresDirectionalVolumeTickBase.generated.h"

class UTresDebugArrowComponent;

UCLASS(Abstract)
class ATresDirectionalVolumeTickBase : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_PermitAngle;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresDebugArrowComponent* DebugArrowComponent;
    
public:
    ATresDirectionalVolumeTickBase();
    UFUNCTION(BlueprintCallable)
    void SetEnableExecute(bool Enable);
    
    UFUNCTION(BlueprintPure)
    bool IsEnableExecute();
    
};

