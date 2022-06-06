#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "ProjectileParam_e_ex322a.h"
#include "TresAttack1_e_ex322a_IllusionBlizzaga.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;
class UTresActionDefinitionBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack1_e_ex322a_IllusionBlizzaga : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Height;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FProjectileParam_e_ex322a> m_ProjectileParams;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsBlizzagaAppearTimingAnimStart: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlizzagaVelocityRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_NextActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAppearEffectSpawnGround: 1;
    
public:
    UTresAttack1_e_ex322a_IllusionBlizzaga();
};

