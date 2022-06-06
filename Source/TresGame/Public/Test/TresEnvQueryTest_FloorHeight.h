#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ETresFloorTestMode.h"
#include "DataProviders/AIDataProvider.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresEnvQueryTest_FloorHeight.generated.h"

UCLASS()
class UTresEnvQueryTest_FloorHeight : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EArithmeticKeyOperation::Type> Operation;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FloorHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue TestHeight;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFloorTestMode::Type> TestMode;
    
    UTresEnvQueryTest_FloorHeight();
};

