#pragma once
#include "CoreMinimal.h"
#include "TresMiRxReplicaStatePattern.h"
#include "TresMiRxReplicaStateTable.generated.h"

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStateTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresMiRxReplicaStatePattern> m_Patterns;
    
public:
    TRESGAME_API FTresMiRxReplicaStateTable();
};

