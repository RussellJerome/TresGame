#pragma once
#include "CoreMinimal.h"
#include "TresGimmickCA_TreeBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_TreeB.generated.h"

UCLASS(Abstract)
class ATresGimmickCA_TreeB : public ATresGimmickCA_TreeBase {
    GENERATED_BODY()
public:
    ATresGimmickCA_TreeB();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_RequestStartDropSeed(FTransform SpawnLocation);
    
};

