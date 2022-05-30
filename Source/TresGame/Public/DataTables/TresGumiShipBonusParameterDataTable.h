#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipBonusKind.h"
#include "TresGumiShipBonusParameterDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBonusParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipBonusKind m_eBonusKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBonusValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_dArgs1;
    
    TRESGAME_API FTresGumiShipBonusParameterDataTable();
};

