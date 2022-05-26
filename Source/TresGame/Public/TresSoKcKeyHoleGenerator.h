#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSoKcKeyHoleGenerator.generated.h"

class USceneComponent;

UCLASS()
class ATresSoKcKeyHoleGenerator : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    USceneComponent* GeneratorRootComponent;
    
    UPROPERTY(EditInstanceOnly)
    TWeakObjectPtr<AActor> m_pSourceHoudiniActor;
    
public:
    ATresSoKcKeyHoleGenerator();
};

