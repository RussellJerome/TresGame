#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex071_SingleShot.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex071_SingleShot : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UTresAction1_e_ex071_SingleShot();
};

