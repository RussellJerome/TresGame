#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_AnglePosition.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresNpcEnvQueryTest_AnglePosition : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_StartPointContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_EndPointContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue m_bUseCameraRotation;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Angle;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Length;
    
    UTresNpcEnvQueryTest_AnglePosition();
};

