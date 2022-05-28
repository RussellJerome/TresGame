#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove1_e_ex042_Caution.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove1_e_ex042_Caution : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_FallVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinAltitude_Start;
    
    UTresMove1_e_ex042_Caution();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetachWindParticle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttachWindParticle();
    
};

