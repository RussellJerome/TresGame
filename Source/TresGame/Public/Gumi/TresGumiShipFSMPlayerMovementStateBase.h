#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMPlayerStateBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipFSMPlayerMovementStateBase.generated.h"

UCLASS()
class UTresGumiShipFSMPlayerMovementStateBase : public UTresGumiShipFSMPlayerStateBase {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerMovementStateBase();
protected:
    UFUNCTION(BlueprintPure)
    FRotator _GetPlayerRotation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator _GetPlayerRelativeRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector _GetPlayerRelativeLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector _GetPlayerLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void _EnableRotateModel(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _AddWorldDeltaMovementInput(const FVector& vWorldMovement);
    
    UFUNCTION(BlueprintCallable)
    void _AddLocalDeltaMovementInput(const FVector& vLocalMovement);
    
};

