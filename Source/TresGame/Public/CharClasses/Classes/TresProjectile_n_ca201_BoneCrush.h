#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_n_ca201_BoneCrush.generated.h"

class ATresCameraManager;

UCLASS(Abstract)
class ATresProjectile_n_ca201_BoneCrush : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bFollowsVelocity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFollowsVelRate;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnablePawnHitCollision: 1;
    
private:
    UPROPERTY()
    ATresCameraManager* m_CameraManager;
    
public:
    ATresProjectile_n_ca201_BoneCrush();
};

