#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresGumiShipJumpPointID.h"
#include "TresGumiShipGimmickJumpPoint.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class AActor;

UCLASS()
class ATresGumiShipGimmickJumpPoint : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    USphereComponent* m_pCheckJumpAreaCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipJumpPointID m_WorldMapID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fCheckAreaRadius;
    
public:
    ATresGumiShipGimmickJumpPoint();
protected:
    UFUNCTION()
    void _OnEnterCheckArea(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

