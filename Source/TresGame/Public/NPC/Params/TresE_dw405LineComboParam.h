#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyDw405AttackPossibleKind.h"
#include "TresE_dw405LineComboAttackParam.h"
#include "TresE_dw405LineComboParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405LineComboParam {
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
    float AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearLocationCorrectionRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405LineComboAttackParam> AttackParams;
    
    TRESGAME_API FTresE_dw405LineComboParam();
};

