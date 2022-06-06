#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts703Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresGumiShipParts703Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pChargeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pChargeLongVFX;
    
public:
    ATresGumiShipParts703Pawn();
};

