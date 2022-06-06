#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AtomListenerFocusPoint.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomListenerFocusPoint : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DistanceFocusLevel;
    
    UPROPERTY(EditAnywhere)
    float DirectionFocusLevel;
    
    UAtomListenerFocusPoint();
};

