#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresAIWeaponComponent.generated.h"

class UTresAttackDefinitionWeaponBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresAIWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresAttackDefinitionWeaponBase* m_CurrentAttack;
    
    UPROPERTY(Transient)
    TArray<UTresAttackDefinitionWeaponBase*> m_CacheAttacks;
    
public:
    UTresAIWeaponComponent();
};

