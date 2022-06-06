#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SQEXSEADWhizSeComponent.generated.h"

class USoundBase;
class UAudioComponent;
class UMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADWhizSeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ApproachJudgmentDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ApproachJudgmentVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOnlyOnce: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUseRelativeVelocity: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCalcVelocityFromLocation: 1;
    
private:
    UPROPERTY(Export, Transient)
    UAudioComponent* MyAudioComponent;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* MyMeshComponent;
    
public:
    USQEXSEADWhizSeComponent();
};

