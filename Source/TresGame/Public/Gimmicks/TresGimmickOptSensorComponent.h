#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickOptSensorComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickOptSensorComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UTresGimmickOptSensorComponent();
private:
    UFUNCTION()
    void OnEntryEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnEntryBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

