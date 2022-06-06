#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_dw402_DevilDiveAppear.generated.h"

class ATresEnemyPawn_e_ex322a;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack4_e_dw402_DevilDiveAppear : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresEnemyPawn_e_ex322a* m_pUntiAquaPawn;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_SpawnMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ShadowEyeMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AppearDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ShadowDiveEffData;
    
public:
    UTresAttack4_e_dw402_DevilDiveAppear();
};

