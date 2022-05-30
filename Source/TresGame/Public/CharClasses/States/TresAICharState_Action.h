#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresAICharState_Action.generated.h"

UCLASS(Abstract)
class UTresAICharState_Action : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ActionNumber;
    
    UTresAICharState_Action();
};

