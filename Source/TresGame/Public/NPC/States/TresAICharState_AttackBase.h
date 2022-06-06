#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresAICharState_AttackBase.generated.h"

class ATresCharPawnBase;

UCLASS(Abstract)
class UTresAICharState_AttackBase : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<ATresCharPawnBase> m_AttackTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_PlayAnimName;
    
    UTresAICharState_AttackBase();
};

