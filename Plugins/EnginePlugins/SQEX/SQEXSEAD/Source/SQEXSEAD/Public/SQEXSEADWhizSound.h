#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADWhizSound.generated.h"

class USQEXSEADWhizSeComponent;

UCLASS(MinimalAPI)
class ASQEXSEADWhizSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USQEXSEADWhizSeComponent* WhizComponent;
    
    ASQEXSEADWhizSound();
};

