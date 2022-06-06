#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipDebugBattleTrigger.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class ATresGumiShipActualRailSlideArrangement;
class AActor;

UCLASS()
class ATresGumiShipDebugBattleTrigger : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pArea;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipActualRailSlideArrangement* m_pArrangement;
    
public:
    ATresGumiShipDebugBattleTrigger();
    UFUNCTION()
    void _BeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

