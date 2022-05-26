#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresEnemy_e_ex301_KeyBladeProjectileBase.generated.h"

UCLASS()
class ATresEnemy_e_ex301_KeyBladeProjectileBase : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ReflectedBulletSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplosionTime;
    
public:
    ATresEnemy_e_ex301_KeyBladeProjectileBase();
};

