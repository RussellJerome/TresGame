#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex105_Cube.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS()
class ATresProjectile_e_ex105_Cube : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_CollRadius;
    
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_CubeEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AtkCubeEff;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CubeEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_AtkCubeEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CubeBreakEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CubeLightLowEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CubeLightMiddleEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_CubeLightHighEffData;
    
    ATresProjectile_e_ex105_Cube();
};

