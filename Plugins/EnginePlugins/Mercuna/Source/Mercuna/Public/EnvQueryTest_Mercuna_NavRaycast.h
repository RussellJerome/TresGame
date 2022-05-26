#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MercunaQueryTest.h"
#include "EnvQueryTest_Mercuna_NavRaycast.generated.h"

class UEnvQueryContext;

UCLASS()
class MERCUNA_API UEnvQueryTest_Mercuna_NavRaycast : public UMercunaQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Mercuna_NavRaycast();
};

