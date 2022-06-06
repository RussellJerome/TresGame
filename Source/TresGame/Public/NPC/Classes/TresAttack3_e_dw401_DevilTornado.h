#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemy_e_dw401_DevilTornadoParam.h"
#include "TresEnemy_e_dw401_CycloneEffectParam.h"
#include "TresAttack3_e_dw401_DevilTornado.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_dw401_DevilTornado : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_dw401_DevilTornadoParam> m_DevilTornadoParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushStartInterval;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_dw401_CycloneEffectParam> m_CycloneEffectParam;
    
    UTresAttack3_e_dw401_DevilTornado();
};

