#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipMeteoroGenerator.generated.h"

class UTresGumiShipAtkCollisionSetCompo;

UCLASS()
class ATresGumiShipMeteoroGenerator : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_FixStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_MeteoroVector;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipAtkCollisionSetCompo* m_pAtkComllision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMeteoroDispTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_RotateAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMeteoTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMeteoMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipMeteoroGenerator();
};

