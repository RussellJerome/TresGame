#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "RootMotionScaleDataParam_e_ex781.h"
#include "TresAttack10_e_ex781_TimeBreak.generated.h"

class ATresProjectileBase;
class UParticleSystem;

UCLASS()
class UTresAttack10_e_ex781_TimeBreak : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_TimeBreakTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeBreakAttackUpDataTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeBreakWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSubDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetSlowDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DoReflectionWarp;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion1ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion2ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BaildParticleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EndHITParticleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectChanceTime;
    
    UTresAttack10_e_ex781_TimeBreak();
};

