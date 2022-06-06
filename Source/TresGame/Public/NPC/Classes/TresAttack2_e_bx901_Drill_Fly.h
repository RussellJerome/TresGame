#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_bx901_Drill_Fly.generated.h"

class ATresProjectileBase;
class UAnimSequenceBase;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack2_e_bx901_Drill_Fly : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AimBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vAimBoneOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ActionKey_Move;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ActionKey_Wait;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRestartRailSlideOnEndAttack;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_RunStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffectClass;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectComp;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EffectAttachSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_EffectAttachOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffectShotTime;
    
    UTresAttack2_e_bx901_Drill_Fly();
};

