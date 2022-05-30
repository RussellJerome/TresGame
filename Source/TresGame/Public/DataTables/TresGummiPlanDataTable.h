#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiPlanSetData.h"
#include "TresGummiPlanDataTable.generated.h"

USTRUCT()
struct FTresGummiPlanDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGummiPlanSetData> m_nGummiPlanSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGummiPlanSetData> m_nSpecialGummiPlanSet;
    
    TRESGAME_API FTresGummiPlanDataTable();
};

