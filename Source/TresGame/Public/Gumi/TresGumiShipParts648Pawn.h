#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipParts648Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipParts648Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAnglespeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_debug_rotator;
    
public:
    ATresGumiShipParts648Pawn();
};

