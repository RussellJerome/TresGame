#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresEnemyDw405AttackPossibleKind.h"
#include "TresAction_e_dw405_Interface.h"
#include "TresAttack_e_dw405_Base.generated.h"

UCLASS(Abstract)
class UTresAttack_e_dw405_Base : public UTresAttackDefinitionBase, public ITresAction_e_dw405_Interface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnablePreWait: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PreWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisablePreWaitDamageReaction: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PostWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyDw405AttackPossibleKind> m_AttackPossibleKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackPossibleTargetSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandAppearOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AirAppearOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearHomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Deceleration;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnablePreWaitGravity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableGravity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsStyleChangeAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAerial: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearLocationCorrectionRate;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableComboLastAttackEffect: 1;
    
public:
    UTresAttack_e_dw405_Base();
    
    // Fix for true pure virtual functions not being implemented
};

