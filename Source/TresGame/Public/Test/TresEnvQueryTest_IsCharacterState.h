#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresStateID.h"
#include "TresEnvQueryTest_IsCharacterState.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_IsCharacterState : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresStateID> m_State;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bContextStateCheck;
    
    UTresEnvQueryTest_IsCharacterState();
};

