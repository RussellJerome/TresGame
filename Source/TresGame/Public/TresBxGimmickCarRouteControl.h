#pragma once
#include "CoreMinimal.h"
#include "TresBxCarRouteControlGroupData.h"
#include "TresGimmickBxCarManagerActor.h"
#include "TresBxGimmickCarRouteControl.generated.h"

class USceneComponent;

UCLASS(Abstract)
class ATresBxGimmickCarRouteControl : public ATresGimmickBxCarManagerActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresBxCarRouteControlGroupData> GroupList;
    
    ATresBxGimmickCarRouteControl();
    UFUNCTION(BlueprintPure)
    bool IsOwnedByCar() const;
    
};

