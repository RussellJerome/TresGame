#pragma once
#include "CoreMinimal.h"
#include "EX901_ActionKey.generated.h"

USTRUCT(BlueprintType)
struct FEX901_ActionKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<FName> m_ActionKeyArray;
    
    TRESGAME_API FEX901_ActionKey();
};

