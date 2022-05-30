#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresContextPathDirectionMode.h"
#include "ETresItemPathDirectionMode.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Dot.h"
#include "TresEnvQueryTest_DirectionToPath.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS()
class UTresEnvQueryTest_DirectionToPath : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> PathStart;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> PathEnd;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresContextPathDirectionMode::Type> DirectionA;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresItemPathDirectionMode::Type> DirectionB;
    
    UPROPERTY(EditDefaultsOnly)
    EEnvTestDot TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAbsoluteValue;
    
    UTresEnvQueryTest_DirectionToPath();
};

