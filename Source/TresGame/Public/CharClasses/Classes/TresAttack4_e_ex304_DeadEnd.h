#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresAttack4_e_ex304_DeadEnd.generated.h"

class UParticleSystem;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex304_DeadEnd : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrunDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PursueAppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PursueAppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AnnihilationStartVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AnnihilationFinishVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_StartVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_FinishVoice;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_LimitMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitMinPitch;
    
    UTresAttack4_e_ex304_DeadEnd();
};

