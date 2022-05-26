#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_XIIIE_LeaderChangeWarpEnd.generated.h"

UCLASS(HideDropdown)
class UTresAction2_XIIIE_LeaderChangeWarpEnd : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bContactPatch: 1;
    
    UTresAction2_XIIIE_LeaderChangeWarpEnd();
};

