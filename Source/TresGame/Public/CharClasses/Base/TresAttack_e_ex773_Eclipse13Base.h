#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex773_Eclipse13Base.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex773_Eclipse13Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bWarpUsePoint;
    
    UPROPERTY(EditDefaultsOnly)
    float WarpStartTime;
    
    UTresAttack_e_ex773_Eclipse13Base();
    UFUNCTION(BlueprintCallable)
    void StartEclipse13();
    
};

