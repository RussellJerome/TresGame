#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex356_Base.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex356_Base : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_TimeGageDamageValue;
    
public:
    ATresProjectile_e_ex356_Base();
};

