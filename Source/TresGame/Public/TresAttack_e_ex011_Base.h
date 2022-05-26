#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex011_Base.generated.h"

UCLASS(Abstract)
class UTresAttack_e_ex011_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableExecuteNum: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ExecuteNum;
    
public:
    UTresAttack_e_ex011_Base();
};

