#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyUniqueID.h"
#include "TresGameOverHintEnemyInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresGameOverHintEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyUniqueID ID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> AttackID;
    
    TRESGAME_API FTresGameOverHintEnemyInfo();
};

