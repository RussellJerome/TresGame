#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresAttack2_e_ex081_RotationGliding_HitWallReactionType.h"
#include "TresAttack2_e_ex081_RotationGliding.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex081_RotationGliding : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresAttack2_e_ex081_RotationGliding_HitWallReactionType> m_HitWallReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SwoopGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartRotationGlidingHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomigMinDistXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomigMinDistZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomigMinDistEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsHomingMaxAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TiltNormalRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ZigZagSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IgnoreStepHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackEndFlyUpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackEndFlyUpGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTransformHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelTransformSpeed;
    
public:
    UTresAttack2_e_ex081_RotationGliding();
};

