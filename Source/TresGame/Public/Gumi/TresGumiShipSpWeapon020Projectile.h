#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipSpWeapon020Projectile.generated.h"

class AActor;
class UTresGumiShipDefCollisionSetCompo;
class UPrimitiveComponent;

UCLASS(Abstract)
class ATresGumiShipSpWeapon020Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UTresGumiShipDefCollisionSetCompo* m_pDefCollision;
    
public:
    ATresGumiShipSpWeapon020Projectile();
protected:
    UFUNCTION()
    void _OnComponentHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

