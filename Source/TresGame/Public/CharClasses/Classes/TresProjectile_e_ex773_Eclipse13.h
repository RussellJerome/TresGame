#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex773_Eclipse13Base.h"
#include "TresProjectile_e_ex773_Eclipse13.generated.h"

class UTresBodyCollPrimitive;

UCLASS(Abstract)
class ATresProjectile_e_ex773_Eclipse13 : public ATresProjectile_e_ex773_Eclipse13Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float NotifyBuildNavTime;
    
    UPROPERTY(EditAnywhere)
    float CircleScaleSpeed;
    
    UPROPERTY(EditAnywhere)
    float BaseShellSpeed;
    
    UPROPERTY(EditAnywhere)
    float MapObjHitSize;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTresBodyCollPrimitive* TresBodyCollPrimitive;
    
public:
    ATresProjectile_e_ex773_Eclipse13();
    UFUNCTION(BlueprintImplementableEvent)
    float BPE_ConvertScaleRate(float Rate);
    
};

