#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresRotatorRuleBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresRotatorRuleBase : public UObject {
    GENERATED_BODY()
public:
    UTresRotatorRuleBase();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FRotator BPIE_ConvertRotator(const FTransform& ParentTransform, const FTransform& targetTransform, const FRotator& OffsetRotation);
    
};

