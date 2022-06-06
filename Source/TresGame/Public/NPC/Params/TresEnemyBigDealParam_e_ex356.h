#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealContractionSpeedParam_e_ex356.h"
#include "TresEnemyBigDealParam_e_ex356.generated.h"

USTRUCT()
struct FTresEnemyBigDealParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName FailedDamageAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float ShuffleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackBeforeDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float EndRotationAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float EndRotationAccelerationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float EndRotationMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FirstSecondNotCardDesignNum;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyBigDealContractionSpeedParam_e_ex356> FirstSecondContractionSpeedParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float FirstSecondEndRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float FirstSecondCardRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float FirstSecondCardShaffleIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 LastNotCardDesignNum;
    
    UPROPERTY(EditDefaultsOnly)
    float LastContractionStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyBigDealContractionSpeedParam_e_ex356> LastContractionSpeedParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float LastEndRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float LastCardRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float LastCardShaffleIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> FirstSecondAttackStartRadiusList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> LastAttackStartRadiusList;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackTargetFollowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float CenterLocationCheckPlayerRadius;
    
    TRESGAME_API FTresEnemyBigDealParam_e_ex356();
};

