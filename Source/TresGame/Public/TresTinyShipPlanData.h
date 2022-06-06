#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiShipHeader.h"
#include "TresGummiShipSticker.h"
#include "TresGummiShipPartsStruct.h"
#include "TresTinyShipPlanData.generated.h"

USTRUCT()
struct FTresTinyShipPlanData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipHeader m_header;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGummiShipPartsStruct> m_body;
    
    TRESGAME_API FTresTinyShipPlanData();
};

