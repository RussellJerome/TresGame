#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "TresGumiShipParts646Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipParts646Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_EffectEndTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAdvanceDistance;
    
public:
    ATresGumiShipParts646Pawn();
    UFUNCTION(BlueprintPure)
    bool _StartAttack(FVector _target);
    
};

