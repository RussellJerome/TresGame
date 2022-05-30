#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "PoleFireGroundStabEffectParam_e_ex043.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAttack3_e_ex043_PoleFire.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack3_e_ex043_PoleFire : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpawnHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileSpawnStartDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxProjectileNum_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxProjectileNum_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxProjectileNum_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSetWalkingHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam1_PreSpin;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam2_PostSpin;
    
    UPROPERTY(EditDefaultsOnly)
    FPoleFireGroundStabEffectParam_e_ex043 m_GroundStabEffectParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ProjectileSpawnEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffectFadeOutDelaySeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffectFadeOutSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffectFadeInDelaySeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffectFadeInSeconds;
    
    UTresAttack3_e_ex043_PoleFire();
};

