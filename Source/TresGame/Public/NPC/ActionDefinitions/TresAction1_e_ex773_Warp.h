#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyEEX773_ACTION_1WARP_KIND.h"
#include "TresAction1_e_ex773_Warp.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction1_e_ex773_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEEX773_ACTION_1WARP_KIND m_WarpKind;
    
public:
    UTresAction1_e_ex773_Warp();
};

