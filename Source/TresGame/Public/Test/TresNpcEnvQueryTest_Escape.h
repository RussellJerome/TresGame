#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "TresNpcEnvQueryTest_Escape.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresNpcEnvQueryTest_Escape : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> EscapeContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue m_Radius;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue m_bEscapeToTargetActor;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue m_bEscapeToPlayerTeam;
    
    UTresNpcEnvQueryTest_Escape();
};

