#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex721_ThornChain.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex721_ThornChain : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BetweenMinDistance;
    
    UTresAction2_e_ex721_ThornChain();
};

