#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnEndActorRideDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGimmickOnEndActorRide, AActor*, RideActor, UPrimitiveComponent*, Component, const FName, BoneName);

