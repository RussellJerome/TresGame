#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresAtkCollManager.generated.h"

class UTresDamageType;
class UTresAtkCollComponent;
class UParticleSystem;

UCLASS(NotPlaceable, Transient)
class ATresAtkCollManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UTresAtkCollComponent*> m_AtkCompList;
    
    UPROPERTY(DuplicateTransient, Transient)
    UParticleSystem* m_CmnGuardReflectEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    UParticleSystem* m_CmnStaggerReflectEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    UParticleSystem* m_CmnInvincibleHitEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    UParticleSystem* m_CmnCriticalHitEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    UParticleSystem* m_CmnArmorHitEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    UParticleSystem* m_CmnIgnoreGuardHitEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    TSubclassOf<UTresDamageType> m_PhysDamageTypeClass[4];
    
    UPROPERTY(DuplicateTransient, Transient)
    TMap<TWeakObjectPtr<AActor>, int32> m_CheeringList;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<AActor*> m_JoinForceTargetList;
    
public:
    ATresAtkCollManager();
};

