#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_he903_MagmaPlane.generated.h"

class USceneComponent;
class UCurveVector;

UCLASS(Abstract)
class ATresProjectile_e_he903_MagmaPlane : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* MyOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_OffsetCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_OffsetCurveScale;
    
    ATresProjectile_e_he903_MagmaPlane();
};

