#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "TresEnvQueryTest_PlayerIsVehicleMode.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_PlayerIsVehicleMode : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> TargetActorContext;
    
    UTresEnvQueryTest_PlayerIsVehicleMode();
};

