#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipProjectileSequenceData.h"
#include "TresGumiShipSequentialProjectileBase.generated.h"

UCLASS(Abstract)
class ATresGumiShipSequentialProjectileBase : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipProjectileSequenceData> m_Sequences;
    
public:
    ATresGumiShipSequentialProjectileBase();
};

