#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts719Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipParts719Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTakeDamage;
    
public:
    ATresGumiShipParts719Pawn();
};

