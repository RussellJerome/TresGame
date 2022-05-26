#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack3_e_ex309_RaijishiBase.generated.h"

class UAnimSequenceBase;
class UParticleSystem;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex309_RaijishiBase : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FinishAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScratchMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ProjectileSignEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSignEffectSpawnRandomTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSignEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_SpawnProjectileRadiusRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumSpawnProjectile;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_MinIntervalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AuraParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpInParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThunderParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ThunderEffectNumTurn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThunderEffectMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThunderEffectShakeWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThunderEffectColorChangeInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ThunderEffectColorChangeStartColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ThunderEffectColorChangeEndColor;
    
public:
    UTresAttack3_e_ex309_RaijishiBase();
};

