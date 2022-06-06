#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefGumiEtc.h"
#include "TresGumiShipRankDataTable.generated.h"

USTRUCT()
struct FTresGumiShipRankDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_nRank;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nPrize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nNextPrize;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nGummiShipCostAdd;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nTinyShipCostAdd;
    
    UPROPERTY(EditDefaultsOnly)
    int16 m_nAbilityPointAdd;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_nTinyUseAdd;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_nFormationAdd;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefGumiEtc m_nAbilityKind[5];
    
    TRESGAME_API FTresGumiShipRankDataTable();
};

