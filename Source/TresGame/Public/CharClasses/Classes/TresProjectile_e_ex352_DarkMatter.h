#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex352_DarkMatter.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_DarkMatter : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DefaultMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DefaultAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DefaultDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_MaxRotationSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FRotator m_MaxRotationCorrectionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PlanetBlasterChargeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PlanetBlasterExplodeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_PlanetBlasterProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DelayedSpawnPlanetBlasterProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AtkColInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RestraintAtkColInterval;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_PlanetBlasterEffectCmp;
    
public:
    ATresProjectile_e_ex352_DarkMatter();
};

