#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#include "TresEnvQueryTest_DistanceToPlane.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_DistanceToPlane : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvDirection Normal;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> BasePoint;
    
    UTresEnvQueryTest_DistanceToPlane();
};

