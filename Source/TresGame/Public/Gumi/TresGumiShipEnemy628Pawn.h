#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSplinePathMoveTypeEnemyBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy628Pawn.generated.h"

UCLASS(Abstract)
class ATresGumiShipEnemy628Pawn : public ATresGumiShipSplinePathMoveTypeEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AppearWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AppearOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Attack2PrepareTime;
    
    UPROPERTY(EditDefaultsOnly)
    float Mass4;
    
    UPROPERTY(EditDefaultsOnly)
    float Mass3;
    
    UPROPERTY(EditDefaultsOnly)
    float LegBrakeRate3;
    
    UPROPERTY(EditDefaultsOnly)
    float LegBrakeRate4;
    
    UPROPERTY(EditDefaultsOnly)
    float LegRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float LegRotAmplitude;
    
    UPROPERTY(EditDefaultsOnly)
    float LegRotCenter;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RotA2;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RotA3;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RotB2;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RotB3;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RotC2;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator RotC3;
    
    ATresGumiShipEnemy628Pawn();
};

