#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack22_e_ex781_Rush.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class UTresAttack22_e_ex781_Rush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowDownDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AvatarForwardDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AvatarDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseMoveEndWaitTIme;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_LoopMotionStart;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_AtackMode;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_BodyCollSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_BodyCollOffsetPos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackUpDataTime;
    
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
    TSubclassOf<UTresActionDefinitionBase> m_AvatarAction;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EffectId;
    
    UTresAttack22_e_ex781_Rush();
};

