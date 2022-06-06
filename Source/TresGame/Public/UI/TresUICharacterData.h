#pragma once
#include "CoreMinimal.h"
#include "TresUIGameFlagText.h"
#include "ETresPlayerUniqueID.h"
#include "Engine/DataTable.h"
#include "ETresChrUniqueID.h"
#include "ETresUIFaceUniqueID.h"
#include "ETresWorldCode.h"
#include "TresUICharacterData.generated.h"

class UTexture;
class UTresUIDataAssetStatus;

USTRUCT()
struct FTresUICharacterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresChrUniqueID ChrUniqueID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresPlayerUniqueID PlayerUniqueID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUIFaceUniqueID FaceUniqueID;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresWorldCode> WorldCode;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAssetStatus* StatusData;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* MenuFaceIcon;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresUIGameFlagText> Names;
    
    TRESGAME_API FTresUICharacterData();
};

