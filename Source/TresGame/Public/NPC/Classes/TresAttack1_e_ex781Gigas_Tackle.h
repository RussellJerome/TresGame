#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex781Gigas_Tackle.generated.h"

class AActor;

UCLASS()
class UTresAttack1_e_ex781Gigas_Tackle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_StartMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsFallAfterAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsFlayModeLandAfterAttack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandHight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TackleLandHight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandPitchRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WallHitAfterWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartMotRotation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingStartDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxTurnMax;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_HomingYAWPITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAnglePITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnMaxPITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingTurnAccelPITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxTurnMaxPITCH;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScaleStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AddScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DestroyTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FieldDist;
    
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_MyTarget;
    
public:
    UTresAttack1_e_ex781Gigas_Tackle();
};

