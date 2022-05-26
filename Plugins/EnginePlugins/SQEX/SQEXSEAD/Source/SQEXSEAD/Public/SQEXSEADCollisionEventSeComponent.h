#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SQEXSEADCollisionEventSeComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USoundBase;
class UMeshComponent;
class UDestructibleComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADCollisionEventSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* OnHitSoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* OnPawnHitSoundAsset;
    
    UPROPERTY(EditAnywhere)
    float HitDistanceThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* OnBeginOverlapSoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* OnEndOverlapSoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bPawnOverlapOnly: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* OnFractureSoundAsset;
    
private:
    UPROPERTY(Export, Transient)
    UMeshComponent* MyMeshComponent;
    
    UPROPERTY(Export, Transient)
    UDestructibleComponent* MyDestructibleComponent;
    
public:
    USQEXSEADCollisionEventSeComponent();
    UFUNCTION()
    void OnFracture(const FVector& HitPoint, const FVector& HitDirection);
    
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

