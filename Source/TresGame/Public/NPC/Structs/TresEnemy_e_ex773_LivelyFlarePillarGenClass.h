#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_LivelyFlarePillarGenClass.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_LivelyFlarePillarGenClass {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ClassName;
    
    UPROPERTY(EditDefaultsOnly)
    FName AttackName;
    
    TRESGAME_API FTresEnemy_e_ex773_LivelyFlarePillarGenClass();
};

