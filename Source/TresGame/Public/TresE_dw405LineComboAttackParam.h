#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresE_dw405LineComboAttackParam.generated.h"

class UTresAttack_e_dw405_Base;

USTRUCT(BlueprintType)
struct FTresE_dw405LineComboAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttack_e_dw405_Base> AttackDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableBeforeEndAttackStart: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float AttackStartOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearOffsetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearDistance;
    
    TRESGAME_API FTresE_dw405LineComboAttackParam();
};

