#pragma once
#include "CoreMinimal.h"
#include "ETresUIDictionaryEnemyCategory.h"
#include "TresUIMobileDictionaryEnemyCategory.generated.h"

USTRUCT(BlueprintType)
struct FTresUIMobileDictionaryEnemyCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresUIDictionaryEnemyCategory Category;
    
    UPROPERTY(EditDefaultsOnly)
    FString TextId;
    
    TRESGAME_API FTresUIMobileDictionaryEnemyCategory();
};

