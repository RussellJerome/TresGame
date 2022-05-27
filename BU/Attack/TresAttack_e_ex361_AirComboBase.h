#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresEnemyEx361ComboKind.h"
#include "TresAttack_e_ex361_AirComboBase.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack_e_ex361_AirComboBase : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx361ComboKind m_ComboKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootMotionMinScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootMotionMaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearHeight;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bMovedAheadCorrection2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bMovedCorrection: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bMovedCorrection2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MovedCorrectionRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GravityScale;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 m_bIsManualMoveModeChange: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_AimUpsideDistance;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UTresAttack_e_ex361_AirComboBase();
};

