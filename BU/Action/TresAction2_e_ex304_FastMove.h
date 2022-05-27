#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyEx304FastMoveType.h"
#include "TresAction2_e_ex304_FastMove.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAction2_e_ex304_FastMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx304FastMoveType m_FastMoveType;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ActionEQSQuery;
    
    UTresAction2_e_ex304_FastMove();
};

