#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGridSpawnEffectActor.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresGridSpawnEffectActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsRingMove: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RingMoveRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RingMoveScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UParticleSystem*> SpawnEffectList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GridSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HeightNumber;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 WidthNumber;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SpawnEffectIndex;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UParticleSystemComponent>> PSCs;
    
    ATresGridSpawnEffectActor();
protected:
    UFUNCTION(BlueprintPure)
    int32 GetSpawnEffectIndex();
    
};

