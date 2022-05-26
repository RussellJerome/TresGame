#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "ETresEnvQueryTest_MercunaWallDistanceDir.h"
#include "TresEnvQueryTest_MercunaWallDistance.generated.h"

UCLASS()
class UTresEnvQueryTest_MercunaWallDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Distance;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnvQueryTest_MercunaWallDistanceDir::Type> m_Dir;
    
    UTresEnvQueryTest_MercunaWallDistance();
};

