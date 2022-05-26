#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADAttachSeComponent.generated.h"

class USoundBase;
class UAudioComponent;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADAttachSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* SoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollowOwnerVisible: 1;
    
private:
    UPROPERTY(Export, Transient)
    UAudioComponent* MyAudioComponent;
    
    UPROPERTY(Export, Transient)
    USceneComponent* MyAttachComponent;
    
public:
    USQEXSEADAttachSeComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
};

