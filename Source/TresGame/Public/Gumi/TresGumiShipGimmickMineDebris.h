#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickMineDebris.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class ATresGumiShipGimmickMineDebris : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickMineDebris();
protected:
    UFUNCTION()
    void _OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

