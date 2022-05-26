#pragma once
#include "CoreMinimal.h"
#include "TresCommunicationTerminalInterface.h"
#include "TresCharPawnBase.h"
#include "TresMiRxPawn.generated.h"

UCLASS(Abstract)
class ATresMiRxPawn : public ATresCharPawnBase, public ITresCommunicationTerminalInterface {
    GENERATED_BODY()
public:
    ATresMiRxPawn();
    
    // Fix for true pure virtual functions not being implemented
};

