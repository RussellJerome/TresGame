#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresWorldCode.h"
#include "ETresUIDataVersion.h"
#include "TresUIGameFlagData.h"
#include "ETresChrUniqueID.h"
#include "ETresUIFaceUniqueID.h"
#include "TresUISaveMenuFaceIconLotteryData.generated.h"

USTRUCT()
struct FTresUISaveMenuFaceIconLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    FTresUIGameFlagData GameFlag;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresChrUniqueID> CharaIDs;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresUIFaceUniqueID> FaceIDs;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIDataVersion Version;
    
    TRESGAME_API FTresUISaveMenuFaceIconLotteryData();
};

