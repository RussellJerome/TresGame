#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipPlayerBaseCommonParameter.h"
#include "TresGumiShipPlayerBaseMovementParameter.h"
#include "TresGumiShipPlayerBaseTrackingParameter.h"
#include "TresGumiShipPlayerBaseParameterDataTable.generated.h"

USTRUCT()
struct FTresGumiShipPlayerBaseParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipPlayerBaseCommonParameter m_Common;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipPlayerBaseMovementParameter m_Movement;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGumiShipPlayerBaseTrackingParameter m_Tracking;
    
    TRESGAME_API FTresGumiShipPlayerBaseParameterDataTable();
};

