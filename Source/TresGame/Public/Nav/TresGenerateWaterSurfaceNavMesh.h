#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerateWaterSurfaceNavMesh.generated.h"

class UBoxComponent;

UCLASS()
class ATresGenerateWaterSurfaceNavMesh : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxComponent;
    
    UPROPERTY(Export)
    UBoxComponent* m_NavModifierBoxComponent;
    
public:
    ATresGenerateWaterSurfaceNavMesh();
};

