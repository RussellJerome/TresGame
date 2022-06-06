#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresTaskList.generated.h"

class UTresTaskBase;

UCLASS(BlueprintType)
class UTresTaskList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UTresTaskBase>> GameTaskList;
    
    UTresTaskList();
};

