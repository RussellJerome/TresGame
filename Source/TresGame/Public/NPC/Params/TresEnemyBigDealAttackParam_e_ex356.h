#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealAttackParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealAttackParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float TargetFollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float StartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float LuxordSideCardAttackSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float LuxordSideCardAttackTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float LuxordSideCardAttackScale;
    
    UPROPERTY(EditDefaultsOnly)
    float LuxordSideCardAttackScaleUpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float LuxordSideCardAttackRotationEndDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float LuxordSideCardAttackMoveStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName LuxordSideCardAttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName LuxordSideCardAttackAttackDtataIDName;
    
    TRESGAME_API FTresEnemyBigDealAttackParam_e_ex356();
};

