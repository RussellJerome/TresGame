#pragma once
#include "CoreMinimal.h"
#include "TresPhantomBlitzQuickTurnaroundExecuteParam.h"
#include "TresAttack_e_ex357_Base.h"
#include "TresPhantomBlitzHomingParam.h"
#include "TresAttack3_e_ex357_PhantomBlitzBase.generated.h"

class USoundBase;
class UParticleSystem;

UCLASS(Abstract)
class UTresAttack3_e_ex357_PhantomBlitzBase : public UTresAttack_e_ex357_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartPlayVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_FinishPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableFinishPlayVoice2D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxAttackHitNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_QuickTurnaroundAfterMaxAttackHitNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartAnimYawHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartAnimPitchHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartAnimPitchHomingLimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_QuickTurnAnimYawHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_QuickTurnAnimPitchHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_QuickTurnAnimPitchHomingLimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponMoveSpeed[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_QuickTurnaroundAfterWeaponMoveSpeed[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnaroundWeaponMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FTresPhantomBlitzHomingParam m_HomingParamList[2];
    
    UPROPERTY(EditDefaultsOnly)
    FTresPhantomBlitzHomingParam m_QuickTurnaroundAfterHomingParamList[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponDirectionInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumTurnaround;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsTurnaroundCentrTarget: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTurnaroundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTurnaroundOvertakeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnaroundSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresPhantomBlitzQuickTurnaroundExecuteParam> m_QuickTurnaroundParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartQuickTurnaroundOvertakeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_QuickTurnaroundAfterAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableQuickTurnaroundAfterGuardBreakEffect: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponGroundEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponGroundEffectSpawnDistance;
    
public:
    UTresAttack3_e_ex357_PhantomBlitzBase();
};

