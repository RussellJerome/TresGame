#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "RootMotionScaleDataParam_e_ex781.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack19_e_ex781_WarpSlash.generated.h"

UCLASS()
class UTresAttack19_e_ex781_WarpSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_WarpGroundOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpAirOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpOffsetGroundHight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHitAfterMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseMoveEndWaitTIme;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion2ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion1ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DashSlashOnly;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_LoopMotionStart;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_LoopMotionEnd;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DontDashSlash;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_WarpEnd;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_InvisibleLockOnMarker;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_BodyCollSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_BodyCollOffsetPos;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_BindFailedDestroyBit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_turnRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartMotionWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseMotion;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MotionName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SkipMotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseRot;
    
    UTresAttack19_e_ex781_WarpSlash();
};

