#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex801_Base.h"
#include "TresAttack4_e_ex801_Plasma.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;
class UParticleSystem;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack4_e_ex801_Plasma : public UTresAttack_e_ex801_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CollisionCenterHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ShotSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PlasmaEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumPlasma;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FollowGiveUpTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableAlwaysTargetMove: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
public:
    UTresAttack4_e_ex801_Plasma();
};

