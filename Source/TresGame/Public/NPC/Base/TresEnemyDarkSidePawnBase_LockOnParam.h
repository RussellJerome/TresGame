#pragma once
#include "CoreMinimal.h"
#include "ETresEnemydw407Region.h"
#include "TresEnemyDarkSidePawnBase_LockOnParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyDarkSidePawnBase_LockOnParam {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ETresEnemydw407Region> Region;
    
    UPROPERTY(EditDefaultsOnly)
    FName BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float BoneOffset;
    
    TRESGAME_API FTresEnemyDarkSidePawnBase_LockOnParam();
};

