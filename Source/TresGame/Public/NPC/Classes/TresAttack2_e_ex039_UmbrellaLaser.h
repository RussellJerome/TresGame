#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex039_UmbrellaLaser.generated.h"

class UAnimSequenceBase;
class UBlendSpaceBase;
class UParticleSystem;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex039_UmbrellaLaser : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_ChargeAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_ShotStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UBlendSpaceBase* m_ShotLoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ShotEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ReloadAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LaserParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LaserProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserInitialSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserExtendSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserMaxSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserEffectEndOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EmissionAndGlowEffectEndOffsetTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableResetAttackCount: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableLoopSkipOnWallHit: 1;
    
public:
    UTresAttack2_e_ex039_UmbrellaLaser();
};

