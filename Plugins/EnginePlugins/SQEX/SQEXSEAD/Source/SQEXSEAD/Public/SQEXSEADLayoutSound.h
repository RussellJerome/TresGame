#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADLayoutSound.generated.h"

class USQEXSEADLayoutComponent;

UCLASS(MinimalAPI)
class ASQEXSEADLayoutSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USQEXSEADLayoutComponent* LayoutComponent;
    
    ASQEXSEADLayoutSound();
};

