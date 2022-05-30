#pragma once
#include "CoreMinimal.h"
#include "TresEx353EveryDirectionShotParam.h"
#include "TresAttack_e_ex353_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack5_e_ex353_EveryDirectionShot.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack5_e_ex353_EveryDirectionShot : public UTresAttack_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LaserShotFireAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_IgnoreGuardLaserShotFireAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnimStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ShotMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ShotMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EraseNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MissEraseNum;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEx353EveryDirectionShotParam> m_EveryDirectionShotParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MissMaxDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EveryDirectionShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ChooseNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MissChooseNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsUseFlushEffect: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnFlushTime;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_ChooseRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_IgnoreGuardProjectileTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IgnoreGuardProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IgnoreGuardDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_IgnoreGuardShotMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_IgnoreGuardShotMaxAngle;
    
    UTresAttack5_e_ex353_EveryDirectionShot();
};

