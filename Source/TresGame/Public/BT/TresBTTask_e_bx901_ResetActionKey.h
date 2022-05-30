#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_Action.h"
#include "TresBTTask_e_bx901_ResetActionKey.generated.h"

UCLASS()
class UTresBTTask_e_bx901_ResetActionKey : public UTresBTTask_Action {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_ActionKeName;
    
    UTresBTTask_e_bx901_ResetActionKey();
};

