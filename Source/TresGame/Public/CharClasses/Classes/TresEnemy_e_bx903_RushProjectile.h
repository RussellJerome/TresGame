#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_bx903_RushProjectile.generated.h"

UCLASS()
class ATresEnemy_e_bx903_RushProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_ImpactedEndTime;
    
    ATresEnemy_e_bx903_RushProjectile();
};

