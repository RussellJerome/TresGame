#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresLSIGameActorMain.generated.h"

UCLASS()
class ATresLSIGameActorMain : public AActor {
    GENERATED_BODY()
public:
    ATresLSIGameActorMain();
    UFUNCTION(BlueprintPure)
    bool IsLsiPause();
    
};

