#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickMagmaPool.generated.h"

class UTresGumiShipAtkCollisionSetCompo;

UCLASS()
class ATresGumiShipGimmickMagmaPool : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipAtkCollisionSetCompo* m_pAtkComllision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMagmaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fEndMagmaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAttackStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickMagmaPool();
};

