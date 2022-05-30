#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEffectActor.generated.h"

class UTresRootComponent;

UCLASS()
class ATresEffectActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresRootComponent* MyRoot;
    
    ATresEffectActor();
    UFUNCTION(BlueprintCallable)
    void ResetEffect(int32 in_GroupID);
    
    UFUNCTION(BlueprintCallable)
    void LoopEnd(int32 in_GroupID);
    
    UFUNCTION(BlueprintCallable)
    void FadeEffect(bool in_FadeOut, float in_FadeTime, int32 in_GroupID);
    
    UFUNCTION(BlueprintCallable)
    void ActivateEffect(bool in_Active, int32 in_GroupID);
    
};

