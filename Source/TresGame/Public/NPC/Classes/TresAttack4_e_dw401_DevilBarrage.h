#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemy_e_dw401_CycloneEffectParam.h"
#include "TresAttack4_e_dw401_DevilBarrage.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_dw401_DevilBarrage : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkStartInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireIntervalRand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EndYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EndHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartPitchOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchBure;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StDiffusion;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EndDiffusion;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_DisableDistOver;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_dw401_CycloneEffectParam> m_CycloneEffectParam;
    
    UTresAttack4_e_dw401_DevilBarrage();
};

