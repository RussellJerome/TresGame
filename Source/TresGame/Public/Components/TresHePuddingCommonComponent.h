#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresHePuddingCommonComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresHePuddingCommonComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTresHePuddingCommonComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_DeadAnimation();
    
};

