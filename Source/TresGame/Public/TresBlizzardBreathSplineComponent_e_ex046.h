#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "TresBlizzardBreathSplineComponent_e_ex046.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBlizzardBreathSplineComponent_e_ex046 : public USplineComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_Number;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsFollowMapSpline: 1;
    
public:
    UTresBlizzardBreathSplineComponent_e_ex046();
};

