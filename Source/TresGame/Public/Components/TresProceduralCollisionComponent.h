#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "PhysicsEngine/ConvexElem.h"
#include "TresProceduralCollisionComponent.generated.h"

class UBodySetup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresProceduralCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBodySetup* ProcMeshBodySetup;
    
private:
    UPROPERTY()
    TArray<FKConvexElem> CollisionConvexElems;
    
public:
    UTresProceduralCollisionComponent();
};

