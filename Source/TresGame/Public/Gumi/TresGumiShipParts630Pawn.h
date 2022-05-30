#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipParts630Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipParts630Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_fMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAdvanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Zoffset;
    
public:
    ATresGumiShipParts630Pawn();
    UFUNCTION(BlueprintPure)
    bool _StartAttack(FVector _target);
    
};

