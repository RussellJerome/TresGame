#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipLimitAreaData.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEndOfWorld.generated.h"

class UTresStaticMeshComponent;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ATresGumiShipEndOfWorld : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresStaticMeshComponent* m_pStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresGumiShipLimitAreaData> m_vLimitDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vOriginPoint;
    
public:
    ATresGumiShipEndOfWorld();
    UFUNCTION()
    void _OnEndOverlapComponent(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex);
    
    UFUNCTION()
    void _OnBeginOverlapComponent(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

