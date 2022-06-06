#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGimmickPrizeBoxTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickPrizeBoxTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollingTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TriggerLimitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotSpeedScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BounceAttenuation;
    
    TRESGAME_API FTresGumiShipGimmickPrizeBoxTable();
};

