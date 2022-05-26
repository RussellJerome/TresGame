#pragma once
#include "CoreMinimal.h"
#include "TresSpawnActorDataForGenerator.h"
#include "TresGimmickGeneratorBase.h"
#include "TresStaticActorGeneratorFromSplineSimple.generated.h"

class UTresSpawnActorManagerComponent;
class ASQEX_SplineActor;

UCLASS(Abstract)
class ATresStaticActorGeneratorFromSplineSimple : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FTresSpawnActorDataForGenerator> BuildTransformArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDestroyAfterBeginPlay;
    
    ATresStaticActorGeneratorFromSplineSimple();
    UFUNCTION(BlueprintCallable)
    void SetSplineActorNative(ASQEX_SplineActor* splineActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildTransformArray(const TArray<FTresSpawnActorDataForGenerator>& refSet);
    
    UFUNCTION(BlueprintCallable)
    void RequestRebuild();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_Reconvert();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPEV_Rebuild();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PostInitializeComponentsInGameWorld();
    
};

