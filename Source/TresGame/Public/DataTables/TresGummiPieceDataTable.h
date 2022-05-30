#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresGummiPieceDataTable.generated.h"

USTRUCT()
struct FTresGummiPieceDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiShipBP> m_pSpace1GummiPieceData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiShipBP> m_pSpace2GummiPieceData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiShipBP> m_pSpace3GummiPieceData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefGumiShipBP> m_pSpace4GummiPieceData;
    
    TRESGAME_API FTresGummiPieceDataTable();
};

