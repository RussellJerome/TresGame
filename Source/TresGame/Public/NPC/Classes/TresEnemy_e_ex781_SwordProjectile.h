#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresEnemy_e_ex781_SwordProjectile.generated.h"

UCLASS()
class ATresEnemy_e_ex781_SwordProjectile : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveEndDist;
    
    ATresEnemy_e_ex781_SwordProjectile();
};

