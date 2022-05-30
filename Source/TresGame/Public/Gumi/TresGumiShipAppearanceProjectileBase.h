#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipProjectileBase.h"
#include "TresGumiShipAppearanceProjectileBase.generated.h"

class UTresStaticMeshComponent;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresGumiShipAppearanceProjectileBase : public ATresGumiShipProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pAttachedEffect;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresStaticMeshComponent* m_pStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bDestroyWhenEffcetEnd;
    
public:
    ATresGumiShipAppearanceProjectileBase();
};

