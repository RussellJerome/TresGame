#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex306_Claymore_Base.h"
#include "TresProjectile_e_ex306_Claymore_Throw.generated.h"

class AActor;
class UTresLockonTargetComponent;

UCLASS(Abstract)
class ATresProjectile_e_ex306_Claymore_Throw : public ATresProjectile_e_ex306_Claymore_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UTresLockonTargetComponent* m_LockonComp;
    
    UPROPERTY()
    AActor* m_TargetActor;
    
    ATresProjectile_e_ex306_Claymore_Throw();
};

