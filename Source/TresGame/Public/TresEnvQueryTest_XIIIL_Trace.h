#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_XIIIL_Trace.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_XIIIL_Trace : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData TraceData;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue TraceFromContext;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ContextHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UTresEnvQueryTest_XIIIL_Trace();
};

