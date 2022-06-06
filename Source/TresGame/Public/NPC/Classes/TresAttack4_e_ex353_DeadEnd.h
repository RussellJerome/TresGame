#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex353_Base.h"
#include "TresAttack4_e_ex353_DeadEnd.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack4_e_ex353_DeadEnd : public UTresAttack_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bFinishSlash: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitMinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrunDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PursueAppearMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PursueAppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PursueAppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PursueMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffectAsset;
    
    UTresAttack4_e_ex353_DeadEnd();
};

