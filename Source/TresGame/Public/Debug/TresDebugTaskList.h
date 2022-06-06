#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresDebugTaskList.generated.h"

class UTresDebugDisplayTask;
class UTresTaskBase;

UCLASS(BlueprintType)
class UTresDebugTaskList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UTresDebugDisplayTask>> DebugDisplayClassArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UTresTaskBase>> DebugTaskList;
    
    UTresDebugTaskList();
};

