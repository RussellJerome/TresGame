#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLtBase.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Config=Game)
class ATresLtBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    ATresLtBase();
};

