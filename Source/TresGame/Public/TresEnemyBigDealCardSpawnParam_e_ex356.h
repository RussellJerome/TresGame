#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealCardSpawnParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealCardSpawnParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float CardRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float CardHeightDistance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OneStepCardNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 StepNum;
    
    TRESGAME_API FTresEnemyBigDealCardSpawnParam_e_ex356();
};

