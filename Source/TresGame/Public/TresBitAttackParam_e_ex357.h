#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresBitAttackParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresBitAttackParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DisableAttackShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float DisableAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackToAllAttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AllAttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AllAttackShotIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AllAttackMoveStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AllAttackMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval AllAttackTargetRadiusRange;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval AllAttackTargetHeightRange;
    
    TRESGAME_API FTresBitAttackParam_e_ex357();
};

