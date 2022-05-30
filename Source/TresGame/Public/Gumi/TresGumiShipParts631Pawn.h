#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts631Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresGumiShipParts631Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pIcicleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pOuterWallVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pWallSnowVFX;
    
public:
    ATresGumiShipParts631Pawn();
};

