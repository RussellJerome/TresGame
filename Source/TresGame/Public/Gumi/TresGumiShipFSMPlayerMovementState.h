#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMPlayerMovementStateBase.h"
#include "TresGumiShipFSMPlayerMovementState.generated.h"

class AActor;

UCLASS()
class UTresGumiShipFSMPlayerMovementState : public UTresGumiShipFSMPlayerMovementStateBase {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerMovementState();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestRailSlideInterpoletion();
    
    UFUNCTION(BlueprintPure)
    bool IsRailSliding() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetRailSlideActor() const;
    
    UFUNCTION(BlueprintPure)
    bool _IsTrackingRailSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool _IsRouteRailSliding() const;
    
};

