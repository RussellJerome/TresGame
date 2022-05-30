#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction1_n_ex010_Hop.generated.h"

UCLASS(HideDropdown)
class UTresAction1_n_ex010_Hop : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bSelectRight: 1;
    
public:
    UTresAction1_n_ex010_Hop();
};

