#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerateNavMesh.generated.h"

class UBoxComponent;

UCLASS()
class ATresGenerateNavMesh : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxComponent;
    
public:
    ATresGenerateNavMesh();
};

