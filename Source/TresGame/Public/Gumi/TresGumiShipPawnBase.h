#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "TresGumiShipNotifyInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipPawnBase.generated.h"

class UTresRootComponent;

UCLASS(Abstract)
class ATresGumiShipPawnBase : public APawn, public ITresGumiShipNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresRootComponent* m_pRootComponent;
    
public:
    ATresGumiShipPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetRootCollisionEnable(const bool bIn);
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationAmout() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRelativeRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRelativeLocation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetOldRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetOldLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMovementAmout() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

