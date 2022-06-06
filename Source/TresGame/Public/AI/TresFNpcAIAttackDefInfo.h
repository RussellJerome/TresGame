#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIAttackDefType.h"
#include "ETresAbilityKind.h"
#include "TresFNpcAIAttackDefInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresFNpcAIAttackDefInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackParamKey;
    
    UPROPERTY(EditDefaultsOnly)
    ETresFNpcAIAttackDefType m_AttackDefType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AttackAbilityKind;
    
    TRESGAME_API FTresFNpcAIAttackDefInfo();
};

