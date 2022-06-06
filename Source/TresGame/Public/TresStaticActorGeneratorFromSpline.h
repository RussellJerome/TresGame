#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresStaticActorGeneratorFromSplineSimple.h"
#include "Engine/EngineTypes.h"
#include "TresStaticActorGeneratorFromSpline.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class AActor;

UCLASS(Abstract)
class ATresStaticActorGeneratorFromSpline : public ATresStaticActorGeneratorFromSplineSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GenerateTriggerRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bGenerateLater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bHiddenWhenFar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export, Transient)
    USphereComponent* triggerSphereComponent_;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> triggerTargetClass;
    
    ATresStaticActorGeneratorFromSpline();
    UFUNCTION()
    void OnGenerateOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnGenerateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OverlapEndSphere(AActor* OtherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OverlapBeginSphere(AActor* OtherActor);
    
};

