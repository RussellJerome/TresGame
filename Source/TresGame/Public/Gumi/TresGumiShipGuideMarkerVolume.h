#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipGuideMarkerVolume.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class AActor;

UCLASS()
class ATresGumiShipGuideMarkerVolume : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipGuideVolume);
    
private:
    UPROPERTY(Export)
    USphereComponent* m_pEntryAreaCollision;
    
public:
    ATresGumiShipGuideMarkerVolume();
private:
    UFUNCTION()
    void _OnEnterMarkerGuideArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

