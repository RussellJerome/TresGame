#pragma once
#include "CoreMinimal.h"
#include "MashRotatorDataTable.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "ETresGumiShipTravelPointID.h"
#include "TresGumiShipGimmickTravelPoint.generated.h"

UCLASS()
class ATresGumiShipGimmickTravelPoint : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMashRotatorDataTable> m_MeshRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ActiveCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_GlowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipTravelPointID m_WorldMapID;
    
public:
    ATresGumiShipGimmickTravelPoint();
private:
    UFUNCTION(BlueprintCallable)
    void _SetMeshLoopCall(float LoopTime);
    
};

