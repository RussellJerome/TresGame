#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectileGenerator_e_ex773_Eclipse13.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class UTresParam_e_ex773_Eclipse13;

UCLASS(Abstract)
class ATresProjectileGenerator_e_ex773_Eclipse13 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* MyParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTresParam_e_ex773_Eclipse13* ParameterAsset;
    
    UPROPERTY(EditAnywhere)
    float ShootTime;
    
    UPROPERTY(EditAnywhere)
    int32 GeneratorIndex;
    
    ATresProjectileGenerator_e_ex773_Eclipse13();
    UFUNCTION(BlueprintPure)
    float GetWaitTime();
    
    UFUNCTION(BlueprintImplementableEvent)
    FVector BPE_GetFireLocation();
    
};

