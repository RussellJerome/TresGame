#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickCannon.generated.h"

UCLASS()
class ATresGumiShipGimmickCannon : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_PrizeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMovementLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickCannon();
};

