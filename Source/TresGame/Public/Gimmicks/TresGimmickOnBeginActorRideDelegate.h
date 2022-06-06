#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnBeginActorRideDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGimmickOnBeginActorRide, AActor*, RideActor, UPrimitiveComponent*, Component, const FName, BoneName);

