#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresRandomPlaceRuleBase.generated.h"

class AActor;
class UTresSpawnActorManagerComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresRandomPlaceRuleBase : public UObject {
    GENERATED_BODY()
public:
    UTresRandomPlaceRuleBase();
    UFUNCTION(BlueprintNativeEvent)
    void BPNE_SpawnActor(AActor* ParentActor, UTresSpawnActorManagerComponent* SpawnComponent);
    
};

