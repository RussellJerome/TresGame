#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPatternActor_e_dw407b_PillarLight.generated.h"

class USplineComponent;
class USceneComponent;

UCLASS(Abstract)
class ATresPatternActor_e_dw407b_PillarLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 m_bIsAimTarget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bHaveVariability: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_VariabilityMinTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_VariabilityMaxTime;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
public:
    ATresPatternActor_e_dw407b_PillarLight();
};

