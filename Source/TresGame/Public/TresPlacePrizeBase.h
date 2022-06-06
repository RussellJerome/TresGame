#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickActor.h"
#include "ETresCmnCureEffectGrpID.h"
#include "TresPlaceActorInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnActorData.h"
#include "UObject/NoExportTypes.h"
#include "TresPlacePrizeBase.generated.h"

class UActorComponent;
class USceneComponent;
class UTresPlacePrizeMovementBase;
class ATresCharPawnBase;
class AActor;

UCLASS(Abstract)
class ATresPlacePrizeBase : public ATresGimmickActor, public ITresPlaceActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UTresPlacePrizeMovementBase> CollectionMovementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideSphereRadius_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisableComponentRadius_;
    
public:
    ATresPlacePrizeBase();
    UFUNCTION(BlueprintCallable)
    void TresAddComponent(TSubclassOf<UActorComponent> Class, const FTransform& Transform, UActorComponent*& Out);
    
    UFUNCTION(BlueprintCallable)
    void SetCompWork(bool isWork, UActorComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryHpMp(ATresCharPawnBase* Actor, int32 InHpRecoveryPoint, int32 InMpRecoveryPoint, ETresCmnCureEffectGrpID InEffect);
    
    UFUNCTION(BlueprintCallable)
    AActor* PlacePrizeSpawnActor(const FTresSpawnActorData& SpawnData, float overrideRadius);
    
    UFUNCTION(BlueprintPure)
    bool IsHit();
    
    UFUNCTION(BlueprintCallable)
    void HitActor(AActor* Actor, FVector Offset);
    
    UFUNCTION(BlueprintPure)
    float GetDelta();
    
    UFUNCTION(BlueprintImplementableEvent)
    void GenerateDelaySpawn(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPlacePrize();
    
    UFUNCTION(BlueprintCallable)
    void CallUserConstructionScript();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_PreDestroy();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnChangeCompWork(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_InitializeSpawnActor(AActor* Actor, const FTresSpawnActorData& SpawnData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_GetItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPEV_ExecCollection(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

