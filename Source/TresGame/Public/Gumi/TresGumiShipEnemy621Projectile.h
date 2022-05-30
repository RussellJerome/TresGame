#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy621Projectile.generated.h"

class AActor;
class UTresGumiShipBodyCollisionSetCompo;
class UTresGumiShipWeaponSequence;
class AController;
class UDamageType;

UCLASS()
class ATresGumiShipEnemy621Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fToStopDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fEndSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator m_rRotateSpeed;
    
public:
    ATresGumiShipEnemy621Projectile();
protected:
    UFUNCTION()
    void OnActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

