#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex359_KeyBlade.generated.h"

class UTresProjectileMeshComponent_e_ex359;

UCLASS(Abstract)
class ATresProjectile_e_ex359_KeyBlade : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresProjectileMeshComponent_e_ex359* m_ProjSkeletalMeshComp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisappearTime;
    
    ATresProjectile_e_ex359_KeyBlade();
};

