#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "AITestProjectile_BoneCrush.generated.h"

UCLASS(Abstract)
class AAITestProjectile_BoneCrush : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bFollowsVelocity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFollowsVelRate;
    
public:
    AAITestProjectile_BoneCrush();
};

