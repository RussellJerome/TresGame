#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipWorldSymbolID.h"
#include "ETresGumiShipTravelPointID.h"
#include "TresFirstMapJumpData.generated.h"

USTRUCT()
struct FTresFirstMapJumpData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresGumiShipWorldSymbolID m_nWmSymbleID;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PresistenLevelPath;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PlayerStartTagName;
    
    UPROPERTY(EditAnywhere)
    bool m_isWorldStart;
    
    UPROPERTY(EditAnywhere)
    ETresGumiShipWorldSymbolID m_nWmStart;
    
    UPROPERTY(EditAnywhere)
    bool m_isTpStart;
    
    UPROPERTY(EditAnywhere)
    ETresGumiShipTravelPointID m_nTpStart;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DebugInfo;
    
    TRESGAME_API FTresFirstMapJumpData();
};

