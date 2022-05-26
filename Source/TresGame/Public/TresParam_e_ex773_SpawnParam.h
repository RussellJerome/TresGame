#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresParam_e_ex773_SpawnParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresParam_e_ex773_SpawnParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float Interval;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> SpawnClass;
    
    TRESGAME_API FTresParam_e_ex773_SpawnParam();
};

