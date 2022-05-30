#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_bx901_DarkCubeMineJoint.generated.h"

class UParticleSystemComponent;
class AActor;
class UTresAtkCollPrimitive;

UCLASS(Abstract)
class ATresProjectile_e_bx901_DarkCubeMineJoint : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_JointParticleComp;
    
    UPROPERTY(EditDefaultsOnly)
    uint16 m_BoolArray[10];
    
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_StartActor;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_EndActor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UTresAtkCollPrimitive> m_AtkCollPrim;
    
public:
    ATresProjectile_e_bx901_DarkCubeMineJoint();
};

