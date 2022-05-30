#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipDropPrizeData.h"
#include "TresGumiShipPrizeBox.generated.h"

class UProjectileMovementComponent;

UCLASS()
class ATresGumiShipPrizeBox : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresGumiShipDropPrizeData DropPrizeHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresGumiShipDropPrizeData DropPrizeCrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RespawnTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RespawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
    ATresGumiShipPrizeBox();
};

