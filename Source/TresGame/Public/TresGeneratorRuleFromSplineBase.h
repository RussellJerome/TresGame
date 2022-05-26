#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresSpawnActorDataForGenerator.h"
#include "TresGeneratorRuleFromSplineBase.generated.h"

class ATresStaticActorGeneratorFromSplineSimple;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UTresGeneratorRuleFromSplineBase : public UObject {
    GENERATED_BODY()
public:
    UTresGeneratorRuleFromSplineBase();
    UFUNCTION(BlueprintPure)
    TArray<FTresSpawnActorDataForGenerator> GetDataArray(ATresStaticActorGeneratorFromSplineSimple* Parent);
    
};

