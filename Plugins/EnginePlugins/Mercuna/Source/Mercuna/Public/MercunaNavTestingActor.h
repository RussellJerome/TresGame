#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMercunaPathEvent.h"
#include "MercunaNavTestingActor.generated.h"

class AMercunaNavTestingActor;
class USphereComponent;
class UMercunaPath;

UCLASS()
class MERCUNA_API AMercunaNavTestingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    uint8 bSearchStart: 1;
    
    UPROPERTY(EditAnywhere)
    AMercunaNavTestingActor* OtherActor;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathExist: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathIsPartial: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathIsOutOfNodes: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathLength;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    int32 PathSteps;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathFindTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    int32 PathNodesUsed;
    
protected:
    UPROPERTY(Export)
    USphereComponent* SphereComponent;
    
    UPROPERTY(Transient)
    UMercunaPath* Path;
    
public:
    AMercunaNavTestingActor();
protected:
    UFUNCTION()
    void OnPathUpdate(TEnumAsByte<EMercunaPathEvent::Type> PathEvent);
    
};

