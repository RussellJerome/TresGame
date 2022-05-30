#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_FreeWalkHeightCheck.generated.h"

UCLASS()
class UTresNpcEnvQueryTest_FreeWalkHeightCheck : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_HeightBorder;
    
    UTresNpcEnvQueryTest_FreeWalkHeightCheck();
};

