#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADLayoutObstruction.generated.h"

class USQEXSEADLayoutObstructionComponent;

UCLASS(MinimalAPI)
class ASQEXSEADLayoutObstruction : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USQEXSEADLayoutObstructionComponent* ObstructionComponent;
    
    ASQEXSEADLayoutObstruction();
};

