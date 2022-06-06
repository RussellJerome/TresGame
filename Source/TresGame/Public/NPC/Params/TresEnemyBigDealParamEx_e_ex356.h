#pragma once
#include "CoreMinimal.h"
#include "TresEnemyBigDealMoveParam_e_ex356.h"
#include "TresEnemyBigDealAttackParam_e_ex356.h"
#include "TresEnemyBigDealOneStepParam_e_ex356.h"
#include "TresEnemyBigDealActionParam_e_ex356.h"
#include "TresEnemyBigDealParamEx_e_ex356.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyBigDealParamEx_e_ex356 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName FailedDamageAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float EndRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float CenterLocationCheckPlayerRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float FirstScondEndExplodeIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyBigDealMoveParam_e_ex356 MoveParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyBigDealAttackParam_e_ex356 AttackParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyBigDealOneStepParam_e_ex356 FirstOneStepParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyBigDealOneStepParam_e_ex356 SecondOneStepParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyBigDealOneStepParam_e_ex356 LastOneStepParam;
    
    UPROPERTY(EditDefaultsOnly)
    float LastContractionStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyBigDealActionParam_e_ex356> LastActionParamList;
    
    TRESGAME_API FTresEnemyBigDealParamEx_e_ex356();
};

