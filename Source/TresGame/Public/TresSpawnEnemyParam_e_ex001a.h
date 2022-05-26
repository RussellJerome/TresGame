#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnEnemyParam_e_ex001a.generated.h"

class ATresEnemyPawnBase;

USTRUCT(BlueprintType)
struct FTresSpawnEnemyParam_e_ex001a {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HpRate;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATresEnemyPawnBase> SpawnEnemyClass;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnNum;
    
    TRESGAME_API FTresSpawnEnemyParam_e_ex001a();
};

