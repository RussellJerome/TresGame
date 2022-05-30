#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack20_e_ex781_ContinuesBreakSlash.generated.h"

class ATresProjectileGenerator_e_ex781_SlashWave;

UCLASS()
class UTresAttack20_e_ex781_ContinuesBreakSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DontWarp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex781_SlashWave> m_PatternSwordAttackState;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EffectId;
    
    UTresAttack20_e_ex781_ContinuesBreakSlash();
};

