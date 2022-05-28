#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351TimeRushComboDefine.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351TimeRushComboDefine {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bNoInOrderData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FString Comment;
    
    UPROPERTY(EditDefaultsOnly)
    int32 JoinNum;
    
    TRESGAME_API FTresEnemyEx351TimeRushComboDefine();
};

