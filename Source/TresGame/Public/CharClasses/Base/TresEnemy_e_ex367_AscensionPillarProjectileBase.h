#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex367_AscensionPillarProjectileBase.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresEnemy_e_ex367_AscensionPillarProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DistanceMax;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsDestroyBattleArea;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistanceSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistanceAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistanceSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NumberEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LightParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PillarDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PillarStraightSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnTailIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TailAttackProjData;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_NumberEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LightParticle;
    
public:
    ATresEnemy_e_ex367_AscensionPillarProjectileBase();
};

