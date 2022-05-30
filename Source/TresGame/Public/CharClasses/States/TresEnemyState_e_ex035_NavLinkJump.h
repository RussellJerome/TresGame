#pragma once
#include "CoreMinimal.h"
#include "TresAICharState_NavLinkJumpCodeDriven.h"
#include "TresEnemyState_e_ex035_NavLinkJump.generated.h"

class ATresReserveActor_e_ex035;

UCLASS()
class UTresEnemyState_e_ex035_NavLinkJump : public UTresAICharState_NavLinkJumpCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresReserveActor_e_ex035* ReserveActor;
    
public:
    UTresEnemyState_e_ex035_NavLinkJump();
};

