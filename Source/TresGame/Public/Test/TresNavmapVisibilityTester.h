#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNavmapVisibilityTester.generated.h"

UCLASS()
class ATresNavmapVisibilityTester : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bDisplayHitActors;
    
    UPROPERTY(EditAnywhere)
    float NavMeshThickness;
    
    UPROPERTY(EditAnywhere)
    float EdgeNormalThickness;
    
    UPROPERTY(EditAnywhere)
    bool bDrawCollisionConvexMeshes;
    
public:
    ATresNavmapVisibilityTester();
    UFUNCTION(BlueprintCallable)
    void SetDisplayHitActors(bool bEnable);
    
};

