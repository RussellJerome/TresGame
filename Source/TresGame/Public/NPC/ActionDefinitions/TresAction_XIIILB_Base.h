#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_XIIILB_Interface.h"
#include "TresAction_XIIILB_Base.generated.h"

UCLASS(Abstract, HideDropdown)
class UTresAction_XIIILB_Base : public UTresActionDefinitionBase, public ITresAction_XIIILB_Interface {
    GENERATED_BODY()
public:
    UTresAction_XIIILB_Base();
    
    // Fix for true pure virtual functions not being implemented
};

