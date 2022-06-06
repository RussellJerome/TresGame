#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADPhysObjSeComponent.generated.h"

class AActor;
class UMeshComponent;
class USQEXSEADPhysObjSeComponentSetting;
class UAudioComponent;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADPhysObjSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USQEXSEADPhysObjSeComponentSetting* Setting;
    
private:
    UPROPERTY(Export, Transient)
    UMeshComponent* MyMeshComponent;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* VelocityAudioComponent;
    
public:
    USQEXSEADPhysObjSeComponent();
    UFUNCTION()
    void StopCalculation(float StopInnerSoundsFadeTime);
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

