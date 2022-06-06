#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresWaypointKind.h"
#include "TresWaypoint.generated.h"

class ATresWaypoint;

UCLASS()
class ATresWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresWaypointKind::Type> MyWaypointKind;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<ATresWaypoint> NextWaypoint;
    
    ATresWaypoint();
};

