#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnvQueryGenerator_OnRing.h"
#include "TresEnvQueryGenerator_OnRingEx.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UTresEnvQueryGenerator_OnRingEx : public UTresEnvQueryGenerator_OnRing {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> CircleCenterRadius;
    
    UTresEnvQueryGenerator_OnRingEx();
};

