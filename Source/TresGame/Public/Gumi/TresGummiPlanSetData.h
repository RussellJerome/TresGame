#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresGummiPlanSetData.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiPlanSetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefGumiShipBP m_GummiShipPlan;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefGumiShipBP m_TinyShipPlan[2];
    
    TRESGAME_API FTresGummiPlanSetData();
};

