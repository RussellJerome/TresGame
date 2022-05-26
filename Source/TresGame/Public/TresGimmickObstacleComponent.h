#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "AI/RVOAvoidanceInterface.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "TresGimmickObstacleComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickObstacleComponent : public UPrimitiveComponent, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bManual;
    
    UPROPERTY(EditAnywhere)
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    float m_Height;
    
    UPROPERTY(EditAnywhere)
    float m_AvoidanceConsiderationRadius;
    
    UPROPERTY(EditAnywhere)
    FNavAvoidanceMask m_AvoidanceGroup;
    
public:
    UTresGimmickObstacleComponent();
    
    // Fix for true pure virtual functions not being implemented
};

