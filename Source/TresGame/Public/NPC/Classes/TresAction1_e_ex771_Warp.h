#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEEX771_ACTION_1WARP_KIND.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex771_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex771_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyEEX771_ACTION_1WARP_KIND> m_WarpKind;
    
public:
    UTresAction1_e_ex771_Warp();
};

