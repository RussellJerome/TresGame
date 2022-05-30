#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipElementResistance.h"
#include "TresGumiShipAbilityParametarDataTable.generated.h"

USTRUCT()
struct FTresGumiShipAbilityParametarDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fEffect1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffect2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffect3;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipElementResistance m_ElementResistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_byCost;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_byMaxCountOfEquip;
    
    TRESGAME_API FTresGumiShipAbilityParametarDataTable();
};

