#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "TresEnvQueryTest_Hate.generated.h"

class UEnvQueryContext;

UCLASS()
class UTresEnvQueryTest_Hate : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> HateFrom;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue HateFromItems;
    
    UTresEnvQueryTest_Hate();
};

