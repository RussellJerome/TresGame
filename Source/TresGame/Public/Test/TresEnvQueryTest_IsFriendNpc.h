#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresChrUniqueID.h"
#include "TresEnvQueryTest_IsFriendNpc.generated.h"

UCLASS()
class UTresEnvQueryTest_IsFriendNpc : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresChrUniqueID FriendID;
    
    UTresEnvQueryTest_IsFriendNpc();
};

