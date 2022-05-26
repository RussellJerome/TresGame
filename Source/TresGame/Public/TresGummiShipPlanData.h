#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGummiShipAbility.h"
#include "TresGummiShipHeader.h"
#include "TresGummiShipSticker.h"
#include "TresGummiShipPartsStruct.h"
#include "TresGummiShipPlanData.generated.h"

USTRUCT()
struct FTresGummiShipPlanData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipHeader m_header;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipAbility m_Ability;
    
    UPROPERTY(EditDefaultsOnly)
    FTresGummiShipSticker m_Sticker[8];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresGummiShipPartsStruct> m_body;
    
    TRESGAME_API FTresGummiShipPlanData();
};

