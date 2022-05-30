#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroupInst.h"
#include "TresParamDispatcherInterpGroupInst.generated.h"

class ATresParamDispatcher;

UCLASS()
class TRESGAME_API UTresParamDispatcherInterpGroupInst : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresParamDispatcher* m_Dispatcher;
    
    UTresParamDispatcherInterpGroupInst();
};

