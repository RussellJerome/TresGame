#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealContractionSpeedParam_e_ex356.h"
#include "TresEnemyBigDealCardRotationEndParam_e_ex356.h"
#include "TresEnemyBigDealOneStepParam_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealOneStepParam_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 NotCardDesignNum;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyBigDealContractionSpeedParam_e_ex356> ContractionSpeedParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float CardRevolveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float PlainCardDamageAfterCardRevolveStopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float CardRotationEndIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyBigDealCardRotationEndParam_e_ex356> CardRotationEndParamList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> AttackStartTimeList;
    
    UPROPERTY(EditDefaultsOnly)
    float CardShuffleTime;
    
    TRESGAME_API FTresEnemyBigDealOneStepParam_e_ex356();
};

