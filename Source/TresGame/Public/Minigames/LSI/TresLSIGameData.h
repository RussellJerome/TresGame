#pragma once
#include "CoreMinimal.h"
#include "ETresUILSIScoreType.h"
#include "Engine/DataTable.h"
#include "ETresItemDefLSIGameItem.h"
#include "ETresGameHelp.h"
#include "ETresUIPadButtonType.h"
#include "TresLSIGameData.generated.h"

class UTexture2D;

USTRUCT()
struct FTresLSIGameData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefLSIGameItem LSIGameItemID;
    
    UPROPERTY(EditDefaultsOnly)
    FString DetailTextID;
    
    UPROPERTY(EditDefaultsOnly)
    ETresGameHelp GameHelpID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ImageIconIndex;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUILSIScoreType ScoreType;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconGraALabelName;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconGraBLabelName;
    
    UPROPERTY(EditDefaultsOnly)
    FString BgIconGraLabelName;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* TitleLogoImage;
    
    UPROPERTY(EditDefaultsOnly)
    FString ButtonSetLabelName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETresUIPadButtonType>> ButtonSetButtonTypes;
    
    TRESGAME_API FTresLSIGameData();
};

