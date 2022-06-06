#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_CureHpCheck.generated.h"

UCLASS()
class UTresNpcEnvQueryTest_CureHpCheck : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_HpRatio_Often;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_HpRatio_Pinch;
    
    UTresNpcEnvQueryTest_CureHpCheck();
};

