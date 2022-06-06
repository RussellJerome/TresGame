#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipCollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipStrikeGumiParametarDataTable.generated.h"

USTRUCT()
struct FTresGumiShipStrikeGumiParametarDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipCollisionShape m_eShape;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRefreshSec;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWidth;
    
    TRESGAME_API FTresGumiShipStrikeGumiParametarDataTable();
};

