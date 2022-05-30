#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_UseItem.generated.h"

class ATresCharPawnBase;

UCLASS()
class UTresCharState_UseItem : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresCharPawnBase* m_pTargetPawn;
    
    UTresCharState_UseItem();
};

