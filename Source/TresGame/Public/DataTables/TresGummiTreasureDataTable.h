#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiShipBP.h"
#include "ETresItemDefGumiEtc.h"
#include "TresGummiTreasureDataTable.generated.h"

USTRUCT()
struct FTresGummiTreasureDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiParts> m_nTreasureGummiParts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiEtc> m_nTreasureSpecialWeapon;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiShipBP> m_nTreasurePlan;
    
    TRESGAME_API FTresGummiTreasureDataTable();
};

