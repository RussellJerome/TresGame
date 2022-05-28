#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405NormalComboAttackParamType.h"
#include "ETresEnemyDw405AttackPossibleKind.h"
#include "TresE_dw405CounterAttackParam.h"
#include "TresE_dw405NormalComboParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405NormalComboParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyDw405AttackPossibleKind> AttackPossibleKind;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDisableLastAttackNotifyDisappear: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float LastAttackPostWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableFixedAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405CounterAttackParam> CounterAttackParam;
    
    UPROPERTY(EditDefaultsOnly)
    float CounterRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405NormalComboAttackParamType> AttackParams;
    
    TRESGAME_API FTresE_dw405NormalComboParam();
};

