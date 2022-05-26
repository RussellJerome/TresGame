#pragma once
#include "CoreMinimal.h"
#include "TresEditorOnlyGeneratorBase.h"
#include "TresLotterySpawnActorData.h"
#include "TresRandomPlaceBase.generated.h"

class UTresRandomPlaceRuleBase;
class UTresSpawnActorManagerComponent;
class AActor;

UCLASS(Abstract)
class ATresRandomPlaceBase : public ATresEditorOnlyGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UTresRandomPlaceRuleBase* GeneratedRule;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    ATresRandomPlaceBase();
    UFUNCTION()
    void spawn();
    
    UFUNCTION()
    void DestroyAndSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CallbackSpawn(AActor* SpawnActor, const FTresLotterySpawnActorData& Data);
    
};

